from dataclasses import dataclass, field
from enum import Enum
from typing import Union
import csv

import arma_config

# Alternate idea: Assemble an ordered list of nodes, with level of detail, ordered by depedency level.
# Propagate a list of priorities up the dependency chain whenever a node is added
# only internal consistency to a tree is needed - we never actually need to walk the whole tree.

@dataclass
class Node:
	name: str
	parent: Union[str, None] = None
	children: dict[str, 'Node'] = field(default_factory=dict)
	distance: int = 0
	data: any = None

class TreesBuilder:
	_roots: dict[str, Node]
	_nodes: dict[str, Node]

	def __init__(self) -> None:
		self._roots = {}
		self._nodes = {}

	def add(self, name_hierarchy=list[str], data: any = None, distance=0) -> Node:
		if len(name_hierarchy) == 0:
			return

		name = name_hierarchy[0]
		node = self._nodes.get(name, None)

		if not node:
			node = Node(name=name, distance=distance, data=data)
			self._nodes[name] = node
		else:
			node.distance = min(node.distance, distance)
			if data and not node.data:
				node.data = data

		parent = self.add(name_hierarchy=name_hierarchy[1:], distance=distance + 1)

		if parent:
			node.parent = parent.name
			parent.children[name] = node
			if name in self._roots:
				del self._roots[name]

		if not node.parent:
			self._roots[name] = node

		return node

	def roots(self):
		for value in self._roots.values():
			yield value

	def get_node(self, name):
		return self._nodes.get(name)

def iterate_tree_depth_first(builder, root_node):
	yield root_node
	for child_name in root_node.children.keys():
		child = builder.get_node(child_name)
		if child:
			yield from iterate_tree_depth_first(builder, child)

#for root in trees_builder.roots():
#	for n in iterate_tree_depth_first(trees_builder, root):
#		print(n)

unit_trees_builder = TreesBuilder()
uniform_trees_builder = TreesBuilder()

@dataclass
class UnitData:
	unit_class: str
	uniform_class: str
	editor_subcategory: str
	faction: str

@dataclass
class UniformData:
	uniform_class: str
	unit_class: str

editor_subcategories = {}
factions = {}

with open("DataDump.csv", "r") as data_file:
	reader = csv.DictReader(data_file)
	for row in reader:
		unit_classes = [c for c in [row['unit_class'], row['parent_class'], row['parent_parent_class']] if c]
		unit_trees_builder.add(name_hierarchy=unit_classes, data=UnitData(unit_class=row['unit_class'], uniform_class=row['uniform_class'], editor_subcategory=row["editor_subcategory"], faction=row["faction"]))
		uniform_classes = [c for c in [row['uniform_class'], row['uniform_parent_class'], row['uniform_parent_parent_class']] if c]
		uniform_trees_builder.add(name_hierarchy=uniform_classes, data=UniformData(unit_class=row['unit_class'], uniform_class=row['uniform_class']))

		factions[row["faction"]] = row["faction_displayName"]
		editor_subcategories[row["editor_subcategory"]] = row["editor_subcategory_displayName"]


class ZombieClassTypes(Enum):
	PARENT_GEN_3 = "PARENT_GEN_3"
	PARENT_GEN_2 = "PARENT_GEN_2"
	PARENT = "PARENT"
	WALKER = "WALKER"
	SLOW = "SLOW"
	SLOW2 = "SLOW2"
	MEDIUM = "MEDIUM"
	FAST = "FAST"
	CRAWLER = "CRAWLER"
	SPIDER = "SPIDER"
	PLAYER = "PLAYER"

zombie_macros = {
	ZombieClassTypes.PARENT_GEN_2: "DECLARE_ZOMBIE_PARENT_PARENT",
	ZombieClassTypes.PARENT: "DECLARE_ZOMBIE_PARENT",
	ZombieClassTypes.WALKER: "ZOMBIFY_WALKER",
	ZombieClassTypes.SLOW: "ZOMBIFY_SLOW",
	ZombieClassTypes.SLOW2: "ZOMBIFY_SLOW2",
	ZombieClassTypes.MEDIUM: "ZOMBIFY_MEDIUM",
	ZombieClassTypes.FAST: "ZOMBIFY_FAST",
	ZombieClassTypes.SPIDER: "ZOMBIFY_SPIDER",
	ZombieClassTypes.CRAWLER: "ZOMBIFY_CRAWLER",
	ZombieClassTypes.PLAYER: "ZOMBIFY_PLAYER"
}

zombie_factionNames = {
	ZombieClassTypes.WALKER: "Zombies - Walker",
	ZombieClassTypes.SLOW: "Zombies - Slow",
	ZombieClassTypes.SLOW2: "Zombies - Slow 2",
	ZombieClassTypes.MEDIUM: "Zombies - Medium",
	ZombieClassTypes.FAST: "Zombies - Fast",
	ZombieClassTypes.SPIDER: "Zombies - Spider",
	ZombieClassTypes.CRAWLER: "Zombies - Crawler",
	ZombieClassTypes.PLAYER: "Zombies - Player"
}

zombie_postfixes = {
	ZombieClassTypes.WALKER: "_zombie_walker",
	ZombieClassTypes.SLOW: "_zombie_slow",
	ZombieClassTypes.SLOW2: "_zombie_slow2",
	ZombieClassTypes.MEDIUM: "_zombie_medium",
	ZombieClassTypes.FAST: "_zombie_fast",
	ZombieClassTypes.SPIDER: "_zombie_spider",
	ZombieClassTypes.CRAWLER: "_zombie_crawler",
	ZombieClassTypes.PLAYER: "_zombie_player"
}

npc_zombie_types = [ZombieClassTypes.WALKER, ZombieClassTypes.SLOW, ZombieClassTypes.SLOW2, ZombieClassTypes.MEDIUM, ZombieClassTypes.FAST, ZombieClassTypes.CRAWLER, ZombieClassTypes.SPIDER]
zombie_types = npc_zombie_types + [ZombieClassTypes.PLAYER]


def make_zombie_parent_gen_3_class(name: str, parent: str):
	unitClass = arma_config.Class(name, parent=parent)
	return unitClass

def make_zombie_parent_gen_2_class(name: str, parent: str):
	unitClass = arma_config.Class(name, parent=parent)
	unitClass.add(arma_config.Raw("DECLARE_ZOMBIE_PARENT_PARENT"))
	return unitClass

def make_zombie_parent_class(name: str, parent: str):
	unitClass = arma_config.Class(name, parent=parent)
	unitClass.add(arma_config.Raw("DECLARE_ZOMBIE_PARENT"))
	return unitClass

def make_zombie_unit_class(type: ZombieClassTypes, originalClassName: str, parent: str = None, originalUniformName: str = None, originalFaction = None, brain = True):
	isPlayer = type == ZombieClassTypes.PLAYER
	className = get_zombie_class_name(type, originalClassName) + ("" if brain else "_nobrain")
	unitClass = arma_config.Class(className, parent=parent)
	macro = zombie_macros.get(type, None)
	if macro:
		unitClass.add(arma_config.Raw(macro))
	if originalUniformName:
		unitClass.addProperty("uniformClass", arma_config.String(get_zombie_class_name(type, originalUniformName)))
		unitClass.addProperty("uniformClassHuman", arma_config.String(originalUniformName))
	if originalFaction:
		unitClass.addProperty("faction", arma_config.String(get_zombie_class_name(type, originalFaction)))
	if brain and not isPlayer:
		unitClass.add(arma_config.Raw("RYAN_ZOMBIE_BRAIN"))
	if brain and isPlayer:
		unitClass.add(arma_config.Raw("RYAN_ZOMBIE_PLAYER_INIT"))
	return unitClass

def get_zombie_class_name(type: ZombieClassTypes, original_name: str) -> str:
	postfix = zombie_postfixes[type]
	return f"{original_name}{postfix}"

CfgVehicles = arma_config.Class("CfgVehicles")

for root in unit_trees_builder.roots():
	for unit_node in iterate_tree_depth_first(unit_trees_builder, root):
		if unit_node.distance >= 2:
			CfgVehicles.add(make_zombie_parent_gen_3_class(unit_node.name, unit_node.parent))
		elif unit_node.distance == 1:
			CfgVehicles.add(make_zombie_parent_gen_2_class(unit_node.name, unit_node.parent))
		elif unit_node.distance == 0:
			CfgVehicles.add(make_zombie_parent_class(unit_node.name, unit_node.parent))

			for zombie_type in npc_zombie_types:
				CfgVehicles.add(make_zombie_unit_class(zombie_type, unit_node.name, unit_node.name, unit_node.data.uniform_class, unit_node.data.faction, brain=True))
				CfgVehicles.add(make_zombie_unit_class(zombie_type, unit_node.name, unit_node.name, unit_node.data.uniform_class, unit_node.data.faction, brain=False))

			CfgVehicles.add(make_zombie_unit_class(ZombieClassTypes.PLAYER, unit_node.name, unit_node.name, unit_node.data.uniform_class, unit_node.data.faction, brain=True))
			CfgVehicles.add(make_zombie_unit_class(ZombieClassTypes.PLAYER, unit_node.name, unit_node.name, unit_node.data.uniform_class, unit_node.data.faction, brain=False))

CfgWeapons = arma_config.Class("CfgWeapons")

for root in uniform_trees_builder.roots():
	for uniform_node in iterate_tree_depth_first(uniform_trees_builder, root):
		uniform_class = arma_config.Class(name=uniform_node.name, parent=uniform_node.parent)
		CfgWeapons.add(uniform_class)

		if uniform_node.distance == 0:
			uniform_class.add(arma_config.Class("ItemInfo"))

			for zombie_type in zombie_types:
				zombie_uniform_class = arma_config.Class(name=get_zombie_class_name(zombie_type, uniform_node.name), parent=uniform_node.name)
				item_info = arma_config.Class(name="ItemInfo", parent="ItemInfo")
				item_info.addProperty("uniformClass", arma_config.String(get_zombie_class_name(zombie_type, uniform_node.data.unit_class)))
				zombie_uniform_class.add(item_info)
				CfgWeapons.add(zombie_uniform_class)


CfgFactionClasses = arma_config.Class("CfgFactionClasses")
for faction_class_name, faction_display_name in factions.items():
	parent_class = arma_config.Class(faction_class_name);
	CfgFactionClasses.add(parent_class);

	for zombie_type in zombie_types:
		category_class = arma_config.Class(get_zombie_class_name(zombie_type, faction_class_name), parent=faction_class_name)
		category_class.addProperty("displayName", arma_config.String(f"{faction_display_name} ({zombie_factionNames[zombie_type]})"))
		category_class.addProperty("icon", arma_config.String(r"\Ryanzombies\icons\zombie2.paa"))
		CfgFactionClasses.add(category_class)

"""
CfgEditorSubcategories = arma_config.Class("CfgEditorSubcategories")

for category_class_name, category_display_name in editor_subcategories.items():
	for zombie_type in zombie_types:
		category_class = arma_config.Class(get_zombie_class_name(zombie_type, category_class_name))
		category_class.addProperty("displayName", arma_config.String(f"{category_display_name} ({zombie_editorSubcategories[zombie_type]})"))
		CfgEditorSubcategories.add(category_class)
"""

with open("../addons/zombies_f_vietnam_c/factions.hpp", "w", encoding="utf8") as uniforms_file:
	uniforms_file.write("\n".join(CfgFactionClasses.to_config_lines()))

with open("../addons/zombies_f_vietnam_c/zombies.hpp", "w", encoding="utf8") as zombies_file:
	zombies_file.write("\n".join(CfgVehicles.to_config_lines()))

with open("../addons/zombies_f_vietnam_c/uniforms.hpp", "w", encoding="utf8") as uniforms_file:
	uniforms_file.write("\n".join(CfgWeapons.to_config_lines()))
