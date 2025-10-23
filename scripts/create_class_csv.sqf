private _configs = (toString {configName _x isKindOf "CAManBase" && getNumber (_x >> "scope") > 1}) configClasses (configFile >> "CfgVehicles");

private _vnUnits = _configs select { "VN" in configSourceModList _x } select { { !("vietnam" in _x) } count configSourceAddonList _x isEqualTo 0 };

private _csv = [["faction", "faction_displayName", "editor_subcategory", "editor_subcategory_displayName", "unit_displayName", "unit_class", "parent_class", "parent_parent_class", "uniform_class", "uniform_parent_class", "uniform_parent_parent_class"]];

{
	private _uniform = getText (_x >> "uniformClass");
	private _uniformConfig = configFile >> "CfgWeapons" >> _uniform;
	private _editorSubcategory = getText (_x >> "editorSubcategory");
	private _faction = getText (_x >> "faction");
	_csv pushBack [
		_faction,
		getText (configFile >> "CfgFactionClasses" >> _faction >> "displayName"),
		_editorSubcategory,
		getText (configFile >> "CfgEditorSubcategories" >> _editorSubcategory >> "displayName"),
		getText(_x >> "displayName"),
		configName _x,
		configName inheritsFrom _x,
		configName inheritsFrom inheritsFrom _x,
		_uniform,
		configName inheritsFrom _uniformConfig,
		configName inheritsFrom inheritsFrom _uniformConfig  
	];
} forEach _vnUnits;


copyToClipboard str (_csv apply {_x joinString ","} joinString endl)