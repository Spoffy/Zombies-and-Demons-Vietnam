class CfgPatches
{
    class zombies_f_vietnam_c
    {
        author = "Spoffy";
        name = "zombies_f_vietnam_c";
        url = "https://www.sogpf.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.18;
        requiredAddons[] = {
            "characters_f_vietnam_c",
            "characters_f_vietnam_02_c",
            "characters_f_vietnam_03_c",
            "characters_f_vietnam_04_c",
            "Ryanzombies"
        };
    };
};

#include "common_includes.inc"

#include "editor_subcategories.hpp"

#include "uniforms.hpp"

#include "zombies.hpp"

// class CfgWeapons {
// 	class Uniform_Base;
// 	class vn_b_uniform_base : Uniform_Base {
// 		class ItemInfo;
// 	};
// 	class vn_b_uniform_sog_01_04 : vn_b_uniform_base {
// 		class ItemInfo : ItemInfo {
// 			uniformClass = "SpoffyZombie";
// 		};
// 	};
// };

// class CfgVehicles {
//     class B_Soldier_base_F;
// 	class vn_b_men_sog_base : B_Soldier_base_F {
//         DECLARE_ZOMBIE_PARENT_PARENT
// 	};
// 	class vn_b_men_sog_01: vn_b_men_sog_base
// 	{
// 		DECLARE_ZOMBIE_PARENT
// 	};
//     class SpoffyZombie: vn_b_men_sog_01
// 	{
//         ZOMBIFY_FAST
//     };
//     class SpoffyZombieSlow: vn_b_men_sog_01 {
//         ZOMBIFY_SLOW
//     };
//     class SpoffyZombieSlow2: vn_b_men_sog_01 {
//         ZOMBIFY_SLOW2
//     };
//     class SpoffyZombieMedium: vn_b_men_sog_01 {
//         ZOMBIFY_MEDIUM
//     };
//     class SpoffyZombieWalker: vn_b_men_sog_01 {
//         ZOMBIFY_WALKER
//     };
//     class SpoffyZombieSpider: vn_b_men_sog_01 {
//         ZOMBIFY_SPIDER
//     };
//     class SpoffyZombieCrawler: vn_b_men_sog_01 {
//         ZOMBIFY_CRAWLER
//     };
// };