class CfgVehicles {
    class B_Soldier_base_F;
    class vn_b_men_sog_base : B_Soldier_base_F {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_army_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_army_03 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_03_zombie_walker : vn_b_men_army_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_army_27 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_27_zombie_walker : vn_b_men_army_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_army_11 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_11_zombie_walker : vn_b_men_army_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_army_05 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_05_zombie_walker : vn_b_men_army_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_04 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_04_zombie_walker : vn_b_men_army_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_12 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_12_zombie_walker : vn_b_men_army_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_70_base : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_70_06 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_06_zombie_walker : vn_b_men_usmc_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_70_03 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_03_zombie_walker : vn_b_men_usmc_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_70_22 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_22_zombie_walker : vn_b_men_usmc_70_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_05 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_05_zombie_walker : vn_b_men_usmc_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_12 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_12_zombie_walker : vn_b_men_usmc_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_70_09 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_09_zombie_walker : vn_b_men_usmc_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_15 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_15_zombie_walker : vn_b_men_usmc_70_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_17 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_17_zombie_walker : vn_b_men_usmc_70_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_16 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_16_zombie_walker : vn_b_men_usmc_70_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_70_20 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_20_zombie_walker : vn_b_men_usmc_70_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_18 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_18_zombie_walker : vn_b_men_usmc_70_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_70_21 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_21_zombie_walker : vn_b_men_usmc_70_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_70_19 : vn_b_men_usmc_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_19_zombie_walker : vn_b_men_usmc_70_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_70_07 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_07_zombie_walker : vn_b_men_usmc_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_01 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_01_zombie_walker : vn_b_men_usmc_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_27 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_27_zombie_walker : vn_b_men_usmc_70_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_70_23 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_23_zombie_walker : vn_b_men_usmc_70_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_70_24 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_24_zombie_walker : vn_b_men_usmc_70_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_25 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_25_zombie_walker : vn_b_men_usmc_70_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_70_28 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_28_zombie_walker : vn_b_men_usmc_70_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_26 : vn_b_men_usmc_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_26_zombie_walker : vn_b_men_usmc_70_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_70_11 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_11_zombie_walker : vn_b_men_usmc_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_02 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_02_zombie_walker : vn_b_men_usmc_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_70_04 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_04_zombie_walker : vn_b_men_usmc_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_70_14 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_14_zombie_walker : vn_b_men_usmc_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_70_10 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_10_zombie_walker : vn_b_men_usmc_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_70_13 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_13_zombie_walker : vn_b_men_usmc_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_70_08 : vn_b_men_usmc_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_70_08_zombie_walker : vn_b_men_usmc_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_army_14 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_14_zombie_walker : vn_b_men_army_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_navy_base : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_navy_03 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_03_zombie_walker : vn_b_men_navy_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_07_zombie_walker";
    };
    class vn_b_men_navy_07 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_07_zombie_walker : vn_b_men_navy_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_07_zombie_walker";
    };
    class vn_b_men_navy_08 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_08_zombie_walker : vn_b_men_navy_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_b_men_navy_05 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_05_zombie_walker : vn_b_men_navy_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_b_men_navy_06 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_06_zombie_walker : vn_b_men_navy_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_07_zombie_walker";
    };
    class vn_b_men_navy_02 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_02_zombie_walker : vn_b_men_navy_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_b_men_navy_09 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_09_zombie_walker : vn_b_men_navy_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_b_men_navy_01 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_01_zombie_walker : vn_b_men_navy_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_b_men_navy_04 : vn_b_men_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_navy_04_zombie_walker : vn_b_men_navy_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_b_men_usmc_68_base : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_68_14 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_14_zombie_walker : vn_b_men_usmc_68_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_68_04 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_04_zombie_walker : vn_b_men_usmc_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_10 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_10_zombie_walker : vn_b_men_usmc_68_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_68_02 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_02_zombie_walker : vn_b_men_usmc_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_06 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_06_zombie_walker : vn_b_men_usmc_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_68_15 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_15_zombie_walker : vn_b_men_usmc_68_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_20 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_20_zombie_walker : vn_b_men_usmc_68_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_16 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_16_zombie_walker : vn_b_men_usmc_68_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_68_17 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_17_zombie_walker : vn_b_men_usmc_68_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_18 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_18_zombie_walker : vn_b_men_usmc_68_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_68_21 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_21_zombie_walker : vn_b_men_usmc_68_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_68_19 : vn_b_men_usmc_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_19_zombie_walker : vn_b_men_usmc_68_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_68_05 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_05_zombie_walker : vn_b_men_usmc_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_03 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_03_zombie_walker : vn_b_men_usmc_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_68_11 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_11_zombie_walker : vn_b_men_usmc_68_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_08 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_08_zombie_walker : vn_b_men_usmc_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_68_22 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_22_zombie_walker : vn_b_men_usmc_68_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_13 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_13_zombie_walker : vn_b_men_usmc_68_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_68_07 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_07_zombie_walker : vn_b_men_usmc_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_09 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_09_zombie_walker : vn_b_men_usmc_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_01 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_01_zombie_walker : vn_b_men_usmc_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_68_25 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_25_zombie_walker : vn_b_men_usmc_68_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_68_24 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_24_zombie_walker : vn_b_men_usmc_68_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_28 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_28_zombie_walker : vn_b_men_usmc_68_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_68_27 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_27_zombie_walker : vn_b_men_usmc_68_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_68_23 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_23_zombie_walker : vn_b_men_usmc_68_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_68_26 : vn_b_men_usmc_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_26_zombie_walker : vn_b_men_usmc_68_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_68_12 : vn_b_men_usmc_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_68_12_zombie_walker : vn_b_men_usmc_68_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_army_13 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_13_zombie_walker : vn_b_men_army_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_28 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_28_zombie_walker : vn_b_men_army_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_01 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_01_zombie_walker : vn_b_men_army_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_24 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_24_zombie_walker : vn_b_men_army_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_30 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_30_zombie_walker : vn_b_men_army_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_army_25 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_25_zombie_walker : vn_b_men_army_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_31 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_31_zombie_walker : vn_b_men_army_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_23 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_23_zombie_walker : vn_b_men_army_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_29 : vn_b_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_29_zombie_walker : vn_b_men_army_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_base : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_rok_army_68_01 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_01_zombie_walker : vn_b_men_rok_army_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_29 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_29_zombie_walker : vn_b_men_rok_army_68_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_24 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_24_zombie_walker : vn_b_men_rok_army_68_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_23 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_23_zombie_walker : vn_b_men_rok_army_68_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_30 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_30_zombie_walker : vn_b_men_rok_army_68_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_31 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_31_zombie_walker : vn_b_men_rok_army_68_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_25 : vn_b_men_rok_army_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_25_zombie_walker : vn_b_men_rok_army_68_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_26 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_26_zombie_walker : vn_b_men_rok_army_68_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_marine_68_base : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_rok_marine_68_07 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_07_zombie_walker : vn_b_men_rok_marine_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_13 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_13_zombie_walker : vn_b_men_rok_marine_68_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_10 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_10_zombie_walker : vn_b_men_rok_marine_68_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_02 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_02_zombie_walker : vn_b_men_rok_marine_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_11 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_11_zombie_walker : vn_b_men_rok_marine_68_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_08 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_08_zombie_walker : vn_b_men_rok_marine_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_12 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_12_zombie_walker : vn_b_men_rok_marine_68_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_03 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_03_zombie_walker : vn_b_men_rok_marine_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_14 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_14_zombie_walker : vn_b_men_rok_marine_68_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_28 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_28_zombie_walker : vn_b_men_rok_marine_68_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_04 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_04_zombie_walker : vn_b_men_rok_marine_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_06 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_06_zombie_walker : vn_b_men_rok_marine_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_01 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_01_zombie_walker : vn_b_men_rok_marine_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_30 : vn_b_men_rok_marine_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_30_zombie_walker : vn_b_men_rok_marine_68_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_29 : vn_b_men_rok_marine_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_29_zombie_walker : vn_b_men_rok_marine_68_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_31 : vn_b_men_rok_marine_68_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_31_zombie_walker : vn_b_men_rok_marine_68_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_15 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_15_zombie_walker : vn_b_men_rok_marine_68_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_21 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_21_zombie_walker : vn_b_men_rok_marine_68_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_17 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_17_zombie_walker : vn_b_men_rok_marine_68_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_20 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_20_zombie_walker : vn_b_men_rok_marine_68_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_18 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_18_zombie_walker : vn_b_men_rok_marine_68_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_16 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_16_zombie_walker : vn_b_men_rok_marine_68_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_19 : vn_b_men_rok_marine_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_19_zombie_walker : vn_b_men_rok_marine_68_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_09 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_09_zombie_walker : vn_b_men_rok_marine_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_18_zombie_walker";
    };
    class vn_b_men_rok_marine_68_05 : vn_b_men_rok_marine_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_68_05_zombie_walker : vn_b_men_rok_marine_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_18_zombie_walker";
    };
    class vn_b_men_rok_army_65_base : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_rok_army_65_03 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_03_zombie_walker : vn_b_men_rok_army_65_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_01 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_01_zombie_walker : vn_b_men_rok_army_65_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_31 : vn_b_men_rok_army_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_31_zombie_walker : vn_b_men_rok_army_65_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_29 : vn_b_men_rok_army_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_29_zombie_walker : vn_b_men_rok_army_65_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_30 : vn_b_men_rok_army_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_30_zombie_walker : vn_b_men_rok_army_65_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_06 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_06_zombie_walker : vn_b_men_rok_army_65_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_09 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_09_zombie_walker : vn_b_men_rok_army_65_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_11 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_11_zombie_walker : vn_b_men_rok_army_65_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_10 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_10_zombie_walker : vn_b_men_rok_army_65_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_27 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_27_zombie_walker : vn_b_men_rok_army_65_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_02 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_02_zombie_walker : vn_b_men_rok_army_65_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_14 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_14_zombie_walker : vn_b_men_rok_army_65_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_28 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_28_zombie_walker : vn_b_men_rok_army_65_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_26 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_26_zombie_walker : vn_b_men_rok_army_65_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_15 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_15_zombie_walker : vn_b_men_rok_army_65_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_17 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_17_zombie_walker : vn_b_men_rok_army_65_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_16 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_16_zombie_walker : vn_b_men_rok_army_65_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_19 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_19_zombie_walker : vn_b_men_rok_army_65_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_18 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_18_zombie_walker : vn_b_men_rok_army_65_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_20 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_20_zombie_walker : vn_b_men_rok_army_65_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_21 : vn_b_men_rok_army_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_21_zombie_walker : vn_b_men_rok_army_65_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_07 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_07_zombie_walker : vn_b_men_rok_army_65_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_05 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_05_zombie_walker : vn_b_men_rok_army_65_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_08 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_08_zombie_walker : vn_b_men_rok_army_65_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_04 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_04_zombie_walker : vn_b_men_rok_army_65_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_12 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_12_zombie_walker : vn_b_men_rok_army_65_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_65_13 : vn_b_men_rok_army_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_65_13_zombie_walker : vn_b_men_rok_army_65_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_14 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_14_zombie_walker : vn_b_men_rok_army_68_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_12 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_12_zombie_walker : vn_b_men_rok_army_68_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_04 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_04_zombie_walker : vn_b_men_rok_army_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_09 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_09_zombie_walker : vn_b_men_rok_army_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_05 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_05_zombie_walker : vn_b_men_rok_army_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_28 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_28_zombie_walker : vn_b_men_rok_army_68_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_10 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_10_zombie_walker : vn_b_men_rok_army_68_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_06 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_06_zombie_walker : vn_b_men_rok_army_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_08 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_08_zombie_walker : vn_b_men_rok_army_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_02 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_02_zombie_walker : vn_b_men_rok_army_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_13 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_13_zombie_walker : vn_b_men_rok_army_68_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_15 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_15_zombie_walker : vn_b_men_rok_army_68_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_21 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_21_zombie_walker : vn_b_men_rok_army_68_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_18 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_18_zombie_walker : vn_b_men_rok_army_68_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_17 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_17_zombie_walker : vn_b_men_rok_army_68_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_16 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_16_zombie_walker : vn_b_men_rok_army_68_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_20 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_20_zombie_walker : vn_b_men_rok_army_68_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_19 : vn_b_men_rok_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_19_zombie_walker : vn_b_men_rok_army_68_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_27 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_27_zombie_walker : vn_b_men_rok_army_68_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_11 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_11_zombie_walker : vn_b_men_rok_army_68_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_03 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_03_zombie_walker : vn_b_men_rok_army_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_army_68_07 : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_army_68_07_zombie_walker : vn_b_men_rok_army_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_base : vn_b_men_rok_army_68_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_rok_marine_65_10 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_10_zombie_walker : vn_b_men_rok_marine_65_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_12 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_12_zombie_walker : vn_b_men_rok_marine_65_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_06 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_06_zombie_walker : vn_b_men_rok_marine_65_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_15 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_15_zombie_walker : vn_b_men_rok_marine_65_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_19 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_19_zombie_walker : vn_b_men_rok_marine_65_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_18 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_18_zombie_walker : vn_b_men_rok_marine_65_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_16 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_16_zombie_walker : vn_b_men_rok_marine_65_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_21 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_21_zombie_walker : vn_b_men_rok_marine_65_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_17 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_17_zombie_walker : vn_b_men_rok_marine_65_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_20 : vn_b_men_rok_marine_65_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_20_zombie_walker : vn_b_men_rok_marine_65_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_05 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_05_zombie_walker : vn_b_men_rok_marine_65_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_11 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_11_zombie_walker : vn_b_men_rok_marine_65_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_07 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_07_zombie_walker : vn_b_men_rok_marine_65_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_09 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_09_zombie_walker : vn_b_men_rok_marine_65_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_04 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_04_zombie_walker : vn_b_men_rok_marine_65_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_13 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_13_zombie_walker : vn_b_men_rok_marine_65_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_14 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_14_zombie_walker : vn_b_men_rok_marine_65_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_03 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_03_zombie_walker : vn_b_men_rok_marine_65_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_02 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_02_zombie_walker : vn_b_men_rok_marine_65_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_28 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_28_zombie_walker : vn_b_men_rok_marine_65_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_01 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_01_zombie_walker : vn_b_men_rok_marine_65_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_30 : vn_b_men_rok_marine_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_30_zombie_walker : vn_b_men_rok_marine_65_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_31 : vn_b_men_rok_marine_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_31_zombie_walker : vn_b_men_rok_marine_65_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_29 : vn_b_men_rok_marine_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_29_zombie_walker : vn_b_men_rok_marine_65_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_rok_marine_65_08 : vn_b_men_rok_marine_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_rok_marine_65_08_zombie_walker : vn_b_men_rok_marine_65_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_army_08 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_08_zombie_walker : vn_b_men_army_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_army_07 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_07_zombie_walker : vn_b_men_army_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_army_10 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_10_zombie_walker : vn_b_men_army_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_26 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_26_zombie_walker : vn_b_men_army_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_base : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_66_06 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_06_zombie_walker : vn_b_men_usmc_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_66_10 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_10_zombie_walker : vn_b_men_usmc_66_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_66_04 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_04_zombie_walker : vn_b_men_usmc_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_01 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_01_zombie_walker : vn_b_men_usmc_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_28 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_28_zombie_walker : vn_b_men_usmc_66_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_27 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_27_zombie_walker : vn_b_men_usmc_66_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_23 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_23_zombie_walker : vn_b_men_usmc_66_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_66_24 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_24_zombie_walker : vn_b_men_usmc_66_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_25 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_25_zombie_walker : vn_b_men_usmc_66_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_66_26 : vn_b_men_usmc_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_26_zombie_walker : vn_b_men_usmc_66_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_08 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_08_zombie_walker : vn_b_men_usmc_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_66_09 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_09_zombie_walker : vn_b_men_usmc_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_12 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_12_zombie_walker : vn_b_men_usmc_66_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_66_14 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_14_zombie_walker : vn_b_men_usmc_66_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_66_11 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_11_zombie_walker : vn_b_men_usmc_66_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_13 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_13_zombie_walker : vn_b_men_usmc_66_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_15 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_15_zombie_walker : vn_b_men_usmc_66_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_20 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_20_zombie_walker : vn_b_men_usmc_66_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_66_21 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_21_zombie_walker : vn_b_men_usmc_66_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_18 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_18_zombie_walker : vn_b_men_usmc_66_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_66_16 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_16_zombie_walker : vn_b_men_usmc_66_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_66_19 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_19_zombie_walker : vn_b_men_usmc_66_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_66_17 : vn_b_men_usmc_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_17_zombie_walker : vn_b_men_usmc_66_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_22 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_22_zombie_walker : vn_b_men_usmc_66_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_07 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_07_zombie_walker : vn_b_men_usmc_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_02 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_02_zombie_walker : vn_b_men_usmc_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_66_03 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_03_zombie_walker : vn_b_men_usmc_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_66_05 : vn_b_men_usmc_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_66_05_zombie_walker : vn_b_men_usmc_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_02 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_02_zombie_walker : vn_b_men_army_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_army_09 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_09_zombie_walker : vn_b_men_army_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_army_06 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_06_zombie_walker : vn_b_men_army_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_army_15 : vn_b_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_15_zombie_walker : vn_b_men_army_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_18 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_18_zombie_walker : vn_b_men_army_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_20 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_20_zombie_walker : vn_b_men_army_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_army_22 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_22_zombie_walker : vn_b_men_army_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_21 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_21_zombie_walker : vn_b_men_army_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_army_16 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_16_zombie_walker : vn_b_men_army_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_army_17 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_17_zombie_walker : vn_b_men_army_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_army_19 : vn_b_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_army_19_zombie_walker : vn_b_men_army_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_sog_14 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_14_zombie_walker : vn_b_men_sog_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_05_zombie_walker";
    };
    class vn_b_men_sog_15 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_15_zombie_walker : vn_b_men_sog_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_06_zombie_walker";
    };
    class vn_b_men_sog_22 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_22_zombie_walker : vn_b_men_sog_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_06_zombie_walker";
    };
    class vn_b_men_sog_23 : vn_b_men_sog_22 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_23_zombie_walker : vn_b_men_sog_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_21_zombie_walker";
    };
    class vn_b_men_sog_24 : vn_b_men_sog_23 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_24_zombie_walker : vn_b_men_sog_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_20_zombie_walker";
    };
    class vn_b_men_sog_26 : vn_b_men_sog_24 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_26_zombie_walker : vn_b_men_sog_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_20_zombie_walker";
    };
    class vn_b_men_sog_25 : vn_b_men_sog_24 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_25_zombie_walker : vn_b_men_sog_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_20_zombie_walker";
    };
    class vn_b_men_sog_27 : vn_b_men_sog_24 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_27_zombie_walker : vn_b_men_sog_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_20_zombie_walker";
    };
    class vn_b_men_sog_31 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_31_zombie_walker : vn_b_men_sog_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_04_zombie_walker";
    };
    class vn_b_men_sog_29 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_29_zombie_walker : vn_b_men_sog_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_05_zombie_walker";
    };
    class vn_b_men_sog_30 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_30_zombie_walker : vn_b_men_sog_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_06_zombie_walker";
    };
    class vn_b_men_seal_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_seal_13 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_13_zombie_walker : vn_b_men_seal_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_05_01_zombie_walker";
    };
    class vn_b_men_seal_asian_base : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_seal_42 : vn_b_men_seal_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_42_zombie_walker : vn_b_men_seal_42 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_seal_51 : vn_b_men_seal_42 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_51_zombie_walker : vn_b_men_seal_51 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_seal_38 : vn_b_men_seal_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_38_zombie_walker : vn_b_men_seal_38 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_06_zombie_walker";
    };
    class vn_b_men_seal_40 : vn_b_men_seal_38 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_40_zombie_walker : vn_b_men_seal_40 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_06_zombie_walker";
    };
    class vn_b_men_seal_39 : vn_b_men_seal_38 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_39_zombie_walker : vn_b_men_seal_39 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_06_zombie_walker";
    };
    class vn_b_men_seal_41 : vn_b_men_seal_38 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_41_zombie_walker : vn_b_men_seal_41 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_06_zombie_walker";
    };
    class vn_b_men_seal_43 : vn_b_men_seal_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_43_zombie_walker : vn_b_men_seal_43 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_seal_47 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_47_zombie_walker : vn_b_men_seal_47 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_b_men_seal_48 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_48_zombie_walker : vn_b_men_seal_48 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_seal_49 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_49_zombie_walker : vn_b_men_seal_49 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_seal_50 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_50_zombie_walker : vn_b_men_seal_50 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_seal_44 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_44_zombie_walker : vn_b_men_seal_44 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_02_zombie_walker";
    };
    class vn_b_men_seal_46 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_46_zombie_walker : vn_b_men_seal_46 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_02_zombie_walker";
    };
    class vn_b_men_seal_45 : vn_b_men_seal_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_45_zombie_walker : vn_b_men_seal_45 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_02_zombie_walker";
    };
    class vn_b_men_seal_37 : vn_b_men_seal_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_37_zombie_walker : vn_b_men_seal_37 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_06_zombie_walker";
    };
    class vn_b_men_seal_18 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_18_zombie_walker : vn_b_men_seal_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_06_01_zombie_walker";
    };
    class vn_b_men_seal_20 : vn_b_men_seal_18 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_20_zombie_walker : vn_b_men_seal_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_06_05_zombie_walker";
    };
    class vn_b_men_seal_19 : vn_b_men_seal_18 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_19_zombie_walker : vn_b_men_seal_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_06_02_zombie_walker";
    };
    class vn_b_men_seal_22 : vn_b_men_seal_18 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_22_zombie_walker : vn_b_men_seal_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_06_07_zombie_walker";
    };
    class vn_b_men_seal_01 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_01_zombie_walker : vn_b_men_seal_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_01_zombie_walker";
    };
    class vn_b_men_seal_17 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_17_zombie_walker : vn_b_men_seal_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_05_07_zombie_walker";
    };
    class vn_b_men_seal_24 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_24_zombie_walker : vn_b_men_seal_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_06_zombie_walker";
    };
    class vn_b_men_seal_08 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_08_zombie_walker : vn_b_men_seal_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_05_zombie_walker";
    };
    class vn_b_men_seal_15 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_15_zombie_walker : vn_b_men_seal_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_05_05_zombie_walker";
    };
    class vn_b_men_seal_14 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_14_zombie_walker : vn_b_men_seal_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_05_02_zombie_walker";
    };
    class vn_b_men_seal_07 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_07_zombie_walker : vn_b_men_seal_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_02_zombie_walker";
    };
    class vn_b_men_seal_10 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_10_zombie_walker : vn_b_men_seal_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_07_zombie_walker";
    };
    class vn_b_men_seal_16 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_16_zombie_walker : vn_b_men_seal_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_05_06_zombie_walker";
    };
    class vn_b_men_seal_11 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_11_zombie_walker : vn_b_men_seal_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_03_01_zombie_walker";
    };
    class vn_b_men_seal_04 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_04_zombie_walker : vn_b_men_seal_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_06_zombie_walker";
    };
    class vn_b_men_seal_12 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_12_zombie_walker : vn_b_men_seal_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_04_01_zombie_walker";
    };
    class vn_b_men_seal_diver_base : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_seal_28 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_28_zombie_walker : vn_b_men_seal_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_07_01_zombie_walker";
    };
    class vn_b_men_seal_31 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_31_zombie_walker : vn_b_men_seal_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_07_04_zombie_walker";
    };
    class vn_b_men_seal_34 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_34_zombie_walker : vn_b_men_seal_34 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_08_03_zombie_walker";
    };
    class vn_b_men_seal_33 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_33_zombie_walker : vn_b_men_seal_33 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_08_02_zombie_walker";
    };
    class vn_b_men_seal_29 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_29_zombie_walker : vn_b_men_seal_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_07_02_zombie_walker";
    };
    class vn_b_men_seal_30 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_30_zombie_walker : vn_b_men_seal_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_07_03_zombie_walker";
    };
    class vn_b_men_seal_32 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_32_zombie_walker : vn_b_men_seal_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_08_01_zombie_walker";
    };
    class vn_b_men_seal_35 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_35_zombie_walker : vn_b_men_seal_35 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_08_04_zombie_walker";
    };
    class vn_b_men_seal_36 : vn_b_men_seal_diver_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_36_zombie_walker : vn_b_men_seal_36 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_09_01_zombie_walker";
    };
    class vn_b_men_seal_09 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_09_zombie_walker : vn_b_men_seal_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_06_zombie_walker";
    };
    class vn_b_men_seal_23 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_23_zombie_walker : vn_b_men_seal_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_06_zombie_walker";
    };
    class vn_b_men_seal_26 : vn_b_men_seal_23 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_26_zombie_walker : vn_b_men_seal_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_06_zombie_walker";
    };
    class vn_b_men_seal_25 : vn_b_men_seal_23 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_25_zombie_walker : vn_b_men_seal_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_06_zombie_walker";
    };
    class vn_b_men_seal_27 : vn_b_men_seal_23 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_27_zombie_walker : vn_b_men_seal_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_06_zombie_walker";
    };
    class vn_b_men_seal_03 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_03_zombie_walker : vn_b_men_seal_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_05_zombie_walker";
    };
    class vn_b_men_seal_06 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_06_zombie_walker : vn_b_men_seal_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_01_zombie_walker";
    };
    class vn_b_men_seal_05 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_05_zombie_walker : vn_b_men_seal_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_07_zombie_walker";
    };
    class vn_b_men_seal_21 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_21_zombie_walker : vn_b_men_seal_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_06_06_zombie_walker";
    };
    class vn_b_men_seal_02 : vn_b_men_seal_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_seal_02_zombie_walker : vn_b_men_seal_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_02_zombie_walker";
    };
    class vn_b_men_sog_03 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_03_zombie_walker : vn_b_men_sog_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_06_zombie_walker";
    };
    class vn_b_men_sog_viet_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sog_indig_base : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sog_04 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_04_zombie_walker : vn_b_men_sog_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_01_zombie_walker";
    };
    class vn_b_men_sog_18 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_18_zombie_walker : vn_b_men_sog_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_02_zombie_walker";
    };
    class vn_b_men_sog_08 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_08_zombie_walker : vn_b_men_sog_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_02_zombie_walker";
    };
    class vn_b_men_sog_20 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_20_zombie_walker : vn_b_men_sog_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_05_zombie_walker";
    };
    class vn_b_men_sog_06 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_06_zombie_walker : vn_b_men_sog_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_03_zombie_walker";
    };
    class vn_b_men_sog_11 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_11_zombie_walker : vn_b_men_sog_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_04_zombie_walker";
    };
    class vn_b_men_sog_16 : vn_b_men_sog_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_16_zombie_walker : vn_b_men_sog_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_04_zombie_walker";
    };
    class vn_b_men_sog_09 : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_09_zombie_walker : vn_b_men_sog_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_03_zombie_walker";
    };
    class vn_b_men_sog_21 : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_21_zombie_walker : vn_b_men_sog_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_02_zombie_walker";
    };
    class vn_b_men_sog_asian_base : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sog_07 : vn_b_men_sog_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_07_zombie_walker : vn_b_men_sog_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_01_zombie_walker";
    };
    class vn_b_men_sog_12 : vn_b_men_sog_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_12_zombie_walker : vn_b_men_sog_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_01_zombie_walker";
    };
    class vn_b_men_sog_asian_medic_base : vn_b_men_sog_asian_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sog_10 : vn_b_men_sog_asian_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_10_zombie_walker : vn_b_men_sog_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_03_zombie_walker";
    };
    class vn_b_men_sog_28 : vn_b_men_sog_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_28_zombie_walker : vn_b_men_sog_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_01_zombie_walker";
    };
    class vn_b_men_sog_19 : vn_b_men_sog_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_19_zombie_walker : vn_b_men_sog_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_01_zombie_walker";
    };
    class vn_b_men_sog_05 : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_05_zombie_walker : vn_b_men_sog_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_02_zombie_walker";
    };
    class vn_b_men_sog_17 : vn_b_men_sog_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_17_zombie_walker : vn_b_men_sog_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_01_01_zombie_walker";
    };
    class vn_b_men_lrrp_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_lrrp_07 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_07_zombie_walker : vn_b_men_lrrp_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_02_zombie_walker";
    };
    class vn_b_men_lrrp_05 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_05_zombie_walker : vn_b_men_lrrp_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_06_zombie_walker";
    };
    class vn_b_men_lrrp_02 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_02_zombie_walker : vn_b_men_lrrp_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_06_zombie_walker";
    };
    class vn_b_men_lrrp_08 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_08_zombie_walker : vn_b_men_lrrp_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_02_zombie_walker";
    };
    class vn_b_men_lrrp_04 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_04_zombie_walker : vn_b_men_lrrp_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_06_zombie_walker";
    };
    class vn_b_men_lrrp_06 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_06_zombie_walker : vn_b_men_lrrp_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_06_zombie_walker";
    };
    class vn_b_men_lrrp_03 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_03_zombie_walker : vn_b_men_lrrp_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_06_zombie_walker";
    };
    class vn_b_men_lrrp_01 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_01_zombie_walker : vn_b_men_lrrp_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_06_zombie_walker";
    };
    class vn_b_men_lrrp_09 : vn_b_men_lrrp_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_lrrp_09_zombie_walker : vn_b_men_lrrp_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_06_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_recon_70_06 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_06_zombie_walker : vn_b_men_usmc_recon_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_08 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_08_zombie_walker : vn_b_men_usmc_recon_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_01 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_01_zombie_walker : vn_b_men_usmc_recon_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_09 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_09_zombie_walker : vn_b_men_usmc_recon_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_07 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_07_zombie_walker : vn_b_men_usmc_recon_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_04 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_04_zombie_walker : vn_b_men_usmc_recon_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_02 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_02_zombie_walker : vn_b_men_usmc_recon_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_03 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_03_zombie_walker : vn_b_men_usmc_recon_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_usmc_recon_70_05 : vn_b_men_usmc_recon_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_70_05_zombie_walker : vn_b_men_usmc_recon_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_aus_sas_66_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_aus_sas_66_03 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_03_zombie_walker : vn_b_men_aus_sas_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_02 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_02_zombie_walker : vn_b_men_aus_sas_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_11 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_11_zombie_walker : vn_b_men_aus_sas_66_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_aus_sas_66_09 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_09_zombie_walker : vn_b_men_aus_sas_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_base : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_nz_sas_66_07 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_07_zombie_walker : vn_b_men_nz_sas_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_12 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_12_zombie_walker : vn_b_men_nz_sas_66_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_base : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_nz_sas_70_09 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_09_zombie_walker : vn_b_men_nz_sas_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_07 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_07_zombie_walker : vn_b_men_nz_sas_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_70_11 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_11_zombie_walker : vn_b_men_nz_sas_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_nz_sas_70_05 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_05_zombie_walker : vn_b_men_nz_sas_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_nz_sas_70_04 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_04_zombie_walker : vn_b_men_nz_sas_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_nz_sas_70_13 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_13_zombie_walker : vn_b_men_nz_sas_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_70_08 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_08_zombie_walker : vn_b_men_nz_sas_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_03 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_03_zombie_walker : vn_b_men_nz_sas_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_10 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_10_zombie_walker : vn_b_men_nz_sas_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_12 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_12_zombie_walker : vn_b_men_nz_sas_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_02 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_02_zombie_walker : vn_b_men_nz_sas_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_01 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_01_zombie_walker : vn_b_men_nz_sas_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_06 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_06_zombie_walker : vn_b_men_nz_sas_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_70_14 : vn_b_men_nz_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_70_14_zombie_walker : vn_b_men_nz_sas_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_05 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_05_zombie_walker : vn_b_men_nz_sas_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_10 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_10_zombie_walker : vn_b_men_nz_sas_66_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_03 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_03_zombie_walker : vn_b_men_nz_sas_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_08 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_08_zombie_walker : vn_b_men_nz_sas_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_02 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_02_zombie_walker : vn_b_men_nz_sas_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_04 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_04_zombie_walker : vn_b_men_nz_sas_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_09 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_09_zombie_walker : vn_b_men_nz_sas_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_11 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_11_zombie_walker : vn_b_men_nz_sas_66_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_13 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_13_zombie_walker : vn_b_men_nz_sas_66_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_14 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_14_zombie_walker : vn_b_men_nz_sas_66_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_nz_sas_66_06 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_06_zombie_walker : vn_b_men_nz_sas_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_nz_sas_66_01 : vn_b_men_nz_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_sas_66_01_zombie_walker : vn_b_men_nz_sas_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_08 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_08_zombie_walker : vn_b_men_aus_sas_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_07 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_07_zombie_walker : vn_b_men_aus_sas_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_66_14 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_14_zombie_walker : vn_b_men_aus_sas_66_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_66_06 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_06_zombie_walker : vn_b_men_aus_sas_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_base : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_aus_sas_70_06 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_06_zombie_walker : vn_b_men_aus_sas_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_11 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_11_zombie_walker : vn_b_men_aus_sas_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_aus_sas_70_07 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_07_zombie_walker : vn_b_men_aus_sas_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_70_01 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_01_zombie_walker : vn_b_men_aus_sas_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_12 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_12_zombie_walker : vn_b_men_aus_sas_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_09 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_09_zombie_walker : vn_b_men_aus_sas_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_14 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_14_zombie_walker : vn_b_men_aus_sas_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_70_10 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_10_zombie_walker : vn_b_men_aus_sas_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_05 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_05_zombie_walker : vn_b_men_aus_sas_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_aus_sas_70_02 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_02_zombie_walker : vn_b_men_aus_sas_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_08 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_08_zombie_walker : vn_b_men_aus_sas_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_70_13 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_13_zombie_walker : vn_b_men_aus_sas_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_70_04 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_04_zombie_walker : vn_b_men_aus_sas_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_aus_sas_70_03 : vn_b_men_aus_sas_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_70_03_zombie_walker : vn_b_men_aus_sas_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_03_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_13 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_13_zombie_walker : vn_b_men_aus_sas_66_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_aus_sas_66_01 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_01_zombie_walker : vn_b_men_aus_sas_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_04 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_04_zombie_walker : vn_b_men_aus_sas_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_aus_sas_66_12 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_12_zombie_walker : vn_b_men_aus_sas_66_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_02_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_10 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_10_zombie_walker : vn_b_men_aus_sas_66_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sas_01_06_zombie_walker";
    };
    class vn_b_men_aus_sas_66_05 : vn_b_men_aus_sas_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_sas_66_05_zombie_walker : vn_b_men_aus_sas_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_recon_68_02 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_02_zombie_walker : vn_b_men_usmc_recon_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_03 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_03_zombie_walker : vn_b_men_usmc_recon_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_06 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_06_zombie_walker : vn_b_men_usmc_recon_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_04 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_04_zombie_walker : vn_b_men_usmc_recon_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_08 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_08_zombie_walker : vn_b_men_usmc_recon_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_09 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_09_zombie_walker : vn_b_men_usmc_recon_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_07 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_07_zombie_walker : vn_b_men_usmc_recon_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_01 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_01_zombie_walker : vn_b_men_usmc_recon_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_68_05 : vn_b_men_usmc_recon_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_68_05_zombie_walker : vn_b_men_usmc_recon_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_cidg_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_cidg_02 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_02_zombie_walker : vn_b_men_cidg_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_08_zombie_walker";
    };
    class vn_b_men_cidg_viet_base : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_cidg_12 : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_12_zombie_walker : vn_b_men_cidg_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_08_zombie_walker";
    };
    class vn_b_men_cidg_indig_base : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_cidg_20 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_20_zombie_walker : vn_b_men_cidg_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_08_zombie_walker";
    };
    class vn_b_men_cidg_15 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_15_zombie_walker : vn_b_men_cidg_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_08_zombie_walker";
    };
    class vn_b_men_cidg_19 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_19_zombie_walker : vn_b_men_cidg_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_08_zombie_walker";
    };
    class vn_b_men_cidg_17 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_17_zombie_walker : vn_b_men_cidg_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_08_zombie_walker";
    };
    class vn_b_men_cidg_11 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_11_zombie_walker : vn_b_men_cidg_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_08_zombie_walker";
    };
    class vn_b_men_cidg_13 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_13_zombie_walker : vn_b_men_cidg_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_08_zombie_walker";
    };
    class vn_b_men_cidg_08 : vn_b_men_cidg_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_08_zombie_walker : vn_b_men_cidg_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_08_zombie_walker";
    };
    class vn_b_men_cidg_21 : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_21_zombie_walker : vn_b_men_cidg_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_08_zombie_walker";
    };
    class vn_b_men_cidg_09 : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_09_zombie_walker : vn_b_men_cidg_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_08_zombie_walker";
    };
    class vn_b_men_cidg_asian_base : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_cidg_14 : vn_b_men_cidg_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_14_zombie_walker : vn_b_men_cidg_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_08_zombie_walker";
    };
    class vn_b_men_cidg_10 : vn_b_men_cidg_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_10_zombie_walker : vn_b_men_cidg_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_08_zombie_walker";
    };
    class vn_b_men_cidg_18 : vn_b_men_cidg_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_18_zombie_walker : vn_b_men_cidg_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_08_zombie_walker";
    };
    class vn_b_men_cidg_07 : vn_b_men_cidg_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_07_zombie_walker : vn_b_men_cidg_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_08_zombie_walker";
    };
    class vn_b_men_cidg_16 : vn_b_men_cidg_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_16_zombie_walker : vn_b_men_cidg_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_08_zombie_walker";
    };
    class vn_b_men_cidg_06 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_06_zombie_walker : vn_b_men_cidg_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_08_zombie_walker";
    };
    class vn_b_men_cidg_05 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_05_zombie_walker : vn_b_men_cidg_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_08_zombie_walker";
    };
    class vn_b_men_cidg_01 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_01_zombie_walker : vn_b_men_cidg_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_08_zombie_walker";
    };
    class vn_b_men_cidg_04 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_04_zombie_walker : vn_b_men_cidg_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_08_zombie_walker";
    };
    class vn_b_men_cidg_22 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_22_zombie_walker : vn_b_men_cidg_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_08_zombie_walker";
    };
    class vn_b_men_cidg_03 : vn_b_men_cidg_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_cidg_03_zombie_walker : vn_b_men_cidg_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_08_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_usmc_recon_66_05 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_05_zombie_walker : vn_b_men_usmc_recon_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_01 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_01_zombie_walker : vn_b_men_usmc_recon_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_08 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_08_zombie_walker : vn_b_men_usmc_recon_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_02 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_02_zombie_walker : vn_b_men_usmc_recon_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_03 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_03_zombie_walker : vn_b_men_usmc_recon_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_04 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_04_zombie_walker : vn_b_men_usmc_recon_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_07 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_07_zombie_walker : vn_b_men_usmc_recon_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_09 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_09_zombie_walker : vn_b_men_usmc_recon_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_06_zombie_walker";
    };
    class vn_b_men_usmc_recon_66_06 : vn_b_men_usmc_recon_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_usmc_recon_66_06_zombie_walker : vn_b_men_usmc_recon_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_b_men_medt_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_medt_03 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_03_zombie_walker : vn_b_men_medt_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_24_zombie_walker";
    };
    class vn_b_men_medt_06 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_06_zombie_walker : vn_b_men_medt_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_medt_02 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_02_zombie_walker : vn_b_men_medt_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_23_zombie_walker";
    };
    class vn_b_men_medt_01 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_01_zombie_walker : vn_b_men_medt_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_22_zombie_walker";
    };
    class vn_b_men_medt_05 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_05_zombie_walker : vn_b_men_medt_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_26_zombie_walker";
    };
    class vn_b_men_medt_04 : vn_b_men_medt_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_medt_04_zombie_walker : vn_b_men_medt_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_25_zombie_walker";
    };
    class vn_b_men_aus_army_66_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_aus_army_70_base : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_aus_army_70_10 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_10_zombie_walker : vn_b_men_aus_army_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_05 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_05_zombie_walker : vn_b_men_aus_army_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_03 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_03_zombie_walker : vn_b_men_aus_army_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_12 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_12_zombie_walker : vn_b_men_aus_army_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_14 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_14_zombie_walker : vn_b_men_aus_army_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_06 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_06_zombie_walker : vn_b_men_aus_army_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_11 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_11_zombie_walker : vn_b_men_aus_army_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_01 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_01_zombie_walker : vn_b_men_aus_army_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_27 : vn_b_men_aus_army_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_27_zombie_walker : vn_b_men_aus_army_70_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_26 : vn_b_men_aus_army_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_26_zombie_walker : vn_b_men_aus_army_70_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_25 : vn_b_men_aus_army_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_25_zombie_walker : vn_b_men_aus_army_70_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_24 : vn_b_men_aus_army_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_24_zombie_walker : vn_b_men_aus_army_70_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_23 : vn_b_men_aus_army_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_23_zombie_walker : vn_b_men_aus_army_70_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_07 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_07_zombie_walker : vn_b_men_aus_army_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_09 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_09_zombie_walker : vn_b_men_aus_army_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_13 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_13_zombie_walker : vn_b_men_aus_army_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_04 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_04_zombie_walker : vn_b_men_aus_army_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_08 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_08_zombie_walker : vn_b_men_aus_army_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_02 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_02_zombie_walker : vn_b_men_aus_army_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_15 : vn_b_men_aus_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_15_zombie_walker : vn_b_men_aus_army_70_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_18 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_18_zombie_walker : vn_b_men_aus_army_70_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_22 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_22_zombie_walker : vn_b_men_aus_army_70_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_21 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_21_zombie_walker : vn_b_men_aus_army_70_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_16 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_16_zombie_walker : vn_b_men_aus_army_70_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_19 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_19_zombie_walker : vn_b_men_aus_army_70_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_17 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_17_zombie_walker : vn_b_men_aus_army_70_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_70_20 : vn_b_men_aus_army_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_70_20_zombie_walker : vn_b_men_aus_army_70_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_12 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_12_zombie_walker : vn_b_men_aus_army_66_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_09 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_09_zombie_walker : vn_b_men_aus_army_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_05 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_05_zombie_walker : vn_b_men_aus_army_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_06 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_06_zombie_walker : vn_b_men_aus_army_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_08 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_08_zombie_walker : vn_b_men_aus_army_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_15 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_15_zombie_walker : vn_b_men_aus_army_66_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_21 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_21_zombie_walker : vn_b_men_aus_army_66_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_20 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_20_zombie_walker : vn_b_men_aus_army_66_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_22 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_22_zombie_walker : vn_b_men_aus_army_66_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_18 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_18_zombie_walker : vn_b_men_aus_army_66_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_19 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_19_zombie_walker : vn_b_men_aus_army_66_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_16 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_16_zombie_walker : vn_b_men_aus_army_66_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_17 : vn_b_men_aus_army_66_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_17_zombie_walker : vn_b_men_aus_army_66_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_10 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_10_zombie_walker : vn_b_men_aus_army_66_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_14 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_14_zombie_walker : vn_b_men_aus_army_66_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_13 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_13_zombie_walker : vn_b_men_aus_army_66_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_02 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_02_zombie_walker : vn_b_men_aus_army_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_04 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_04_zombie_walker : vn_b_men_aus_army_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_11 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_11_zombie_walker : vn_b_men_aus_army_66_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_base : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_nz_army_66_08 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_08_zombie_walker : vn_b_men_nz_army_66_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_05 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_05_zombie_walker : vn_b_men_nz_army_66_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_03 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_03_zombie_walker : vn_b_men_nz_army_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_13 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_13_zombie_walker : vn_b_men_nz_army_66_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_18 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_18_zombie_walker : vn_b_men_nz_army_66_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_16 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_16_zombie_walker : vn_b_men_nz_army_66_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_17 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_17_zombie_walker : vn_b_men_nz_army_66_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_14 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_14_zombie_walker : vn_b_men_nz_army_66_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_15 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_15_zombie_walker : vn_b_men_nz_army_66_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_20 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_20_zombie_walker : vn_b_men_nz_army_66_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_19 : vn_b_men_nz_army_66_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_19_zombie_walker : vn_b_men_nz_army_66_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_07 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_07_zombie_walker : vn_b_men_nz_army_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_04 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_04_zombie_walker : vn_b_men_nz_army_66_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_02 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_02_zombie_walker : vn_b_men_nz_army_66_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_10 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_10_zombie_walker : vn_b_men_nz_army_66_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_11 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_11_zombie_walker : vn_b_men_nz_army_66_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_base : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_nz_army_70_06 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_06_zombie_walker : vn_b_men_nz_army_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_13 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_13_zombie_walker : vn_b_men_nz_army_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_17 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_17_zombie_walker : vn_b_men_nz_army_70_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_19 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_19_zombie_walker : vn_b_men_nz_army_70_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_14 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_14_zombie_walker : vn_b_men_nz_army_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_18 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_18_zombie_walker : vn_b_men_nz_army_70_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_15 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_15_zombie_walker : vn_b_men_nz_army_70_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_20 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_20_zombie_walker : vn_b_men_nz_army_70_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_16 : vn_b_men_nz_army_70_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_16_zombie_walker : vn_b_men_nz_army_70_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_11 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_11_zombie_walker : vn_b_men_nz_army_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_08 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_08_zombie_walker : vn_b_men_nz_army_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_10 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_10_zombie_walker : vn_b_men_nz_army_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_12 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_12_zombie_walker : vn_b_men_nz_army_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_03 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_03_zombie_walker : vn_b_men_nz_army_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_04 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_04_zombie_walker : vn_b_men_nz_army_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_01 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_01_zombie_walker : vn_b_men_nz_army_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_02 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_02_zombie_walker : vn_b_men_nz_army_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_07 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_07_zombie_walker : vn_b_men_nz_army_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_05 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_05_zombie_walker : vn_b_men_nz_army_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_70_09 : vn_b_men_nz_army_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_70_09_zombie_walker : vn_b_men_nz_army_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_06 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_06_zombie_walker : vn_b_men_nz_army_66_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_09 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_09_zombie_walker : vn_b_men_nz_army_66_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_base : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_nz_army_68_08 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_08_zombie_walker : vn_b_men_nz_army_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_07 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_07_zombie_walker : vn_b_men_nz_army_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_04 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_04_zombie_walker : vn_b_men_nz_army_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_06 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_06_zombie_walker : vn_b_men_nz_army_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_05 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_05_zombie_walker : vn_b_men_nz_army_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_11 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_11_zombie_walker : vn_b_men_nz_army_68_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_13 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_13_zombie_walker : vn_b_men_nz_army_68_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_20 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_20_zombie_walker : vn_b_men_nz_army_68_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_18 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_18_zombie_walker : vn_b_men_nz_army_68_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_17 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_17_zombie_walker : vn_b_men_nz_army_68_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_19 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_19_zombie_walker : vn_b_men_nz_army_68_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_15 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_15_zombie_walker : vn_b_men_nz_army_68_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_16 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_16_zombie_walker : vn_b_men_nz_army_68_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_14 : vn_b_men_nz_army_68_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_14_zombie_walker : vn_b_men_nz_army_68_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_12 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_12_zombie_walker : vn_b_men_nz_army_68_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_10 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_10_zombie_walker : vn_b_men_nz_army_68_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_02 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_02_zombie_walker : vn_b_men_nz_army_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_06_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_03 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_03_zombie_walker : vn_b_men_nz_army_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_09 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_09_zombie_walker : vn_b_men_nz_army_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_68_01 : vn_b_men_nz_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_68_01_zombie_walker : vn_b_men_nz_army_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_05_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_12 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_12_zombie_walker : vn_b_men_nz_army_66_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_04_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_01 : vn_b_men_nz_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_01_zombie_walker : vn_b_men_nz_army_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_nz_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_22 : vn_b_men_nz_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_22_zombie_walker : vn_b_men_nz_army_66_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_nz_army_66_21 : vn_b_men_nz_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_nz_army_66_21_zombie_walker : vn_b_men_nz_army_66_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_03 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_03_zombie_walker : vn_b_men_aus_army_66_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_01 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_01_zombie_walker : vn_b_men_aus_army_66_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_26 : vn_b_men_aus_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_26_zombie_walker : vn_b_men_aus_army_66_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_02_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_27 : vn_b_men_aus_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_27_zombie_walker : vn_b_men_aus_army_66_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_25 : vn_b_men_aus_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_25_zombie_walker : vn_b_men_aus_army_66_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_24 : vn_b_men_aus_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_24_zombie_walker : vn_b_men_aus_army_66_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_23 : vn_b_men_aus_army_66_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_23_zombie_walker : vn_b_men_aus_army_66_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_base : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_aus_army_68_03 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_03_zombie_walker : vn_b_men_aus_army_68_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_08 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_08_zombie_walker : vn_b_men_aus_army_68_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_04 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_04_zombie_walker : vn_b_men_aus_army_68_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_10 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_10_zombie_walker : vn_b_men_aus_army_68_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_13 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_13_zombie_walker : vn_b_men_aus_army_68_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_11 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_11_zombie_walker : vn_b_men_aus_army_68_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_15 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_15_zombie_walker : vn_b_men_aus_army_68_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_18 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_18_zombie_walker : vn_b_men_aus_army_68_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_05_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_20 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_20_zombie_walker : vn_b_men_aus_army_68_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_21 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_21_zombie_walker : vn_b_men_aus_army_68_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_09_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_16 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_16_zombie_walker : vn_b_men_aus_army_68_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_22 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_22_zombie_walker : vn_b_men_aus_army_68_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_17 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_17_zombie_walker : vn_b_men_aus_army_68_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_19 : vn_b_men_aus_army_68_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_19_zombie_walker : vn_b_men_aus_army_68_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_05 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_05_zombie_walker : vn_b_men_aus_army_68_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_12 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_12_zombie_walker : vn_b_men_aus_army_68_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_06_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_07 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_07_zombie_walker : vn_b_men_aus_army_68_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_03_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_06 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_06_zombie_walker : vn_b_men_aus_army_68_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_04_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_01 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_01_zombie_walker : vn_b_men_aus_army_68_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_02 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_02_zombie_walker : vn_b_men_aus_army_68_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_08_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_14 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_14_zombie_walker : vn_b_men_aus_army_68_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_10_01_zombie_walker";
    };
    class vn_b_men_aus_army_68_09 : vn_b_men_aus_army_68_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_68_09_zombie_walker : vn_b_men_aus_army_68_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_07_01_zombie_walker";
    };
    class vn_b_men_aus_army_66_07 : vn_b_men_aus_army_66_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aus_army_66_07_zombie_walker : vn_b_men_aus_army_66_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_aus_01_01_zombie_walker";
    };
    class vn_b_men_sog_02 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_02_zombie_walker : vn_b_men_sog_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_05_zombie_walker";
    };
    class vn_b_men_sog_13 : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sog_13_zombie_walker : vn_b_men_sog_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_sog_02_04_zombie_walker";
    };
    class vn_b_men_sf_base : vn_b_men_sog_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sf_02 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_02_zombie_walker : vn_b_men_sf_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_sf_22 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_22_zombie_walker : vn_b_men_sf_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_02_zombie_walker";
    };
    class vn_b_men_sf_04 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_04_zombie_walker : vn_b_men_sf_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_02_zombie_walker";
    };
    class vn_b_men_sf_06 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_06_zombie_walker : vn_b_men_sf_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_15_zombie_walker";
    };
    class vn_b_men_sf_03 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_03_zombie_walker : vn_b_men_sf_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_02_zombie_walker";
    };
    class vn_b_men_sf_viet_base : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sf_indig_base : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sf_20 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_20_zombie_walker : vn_b_men_sf_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_sf_13 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_13_zombie_walker : vn_b_men_sf_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_sf_15 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_15_zombie_walker : vn_b_men_sf_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_02_zombie_walker";
    };
    class vn_b_men_sf_17 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_17_zombie_walker : vn_b_men_sf_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_02_zombie_walker";
    };
    class vn_b_men_sf_19 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_19_zombie_walker : vn_b_men_sf_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_02_zombie_walker";
    };
    class vn_b_men_sf_08 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_08_zombie_walker : vn_b_men_sf_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_15_zombie_walker";
    };
    class vn_b_men_sf_11 : vn_b_men_sf_indig_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_11_zombie_walker : vn_b_men_sf_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_15_zombie_walker";
    };
    class vn_b_men_sf_10 : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_10_zombie_walker : vn_b_men_sf_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_15_zombie_walker";
    };
    class vn_b_men_sf_14 : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_14_zombie_walker : vn_b_men_sf_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_sf_07 : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_07_zombie_walker : vn_b_men_sf_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_15_zombie_walker";
    };
    class vn_b_men_sf_18 : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_18_zombie_walker : vn_b_men_sf_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_sf_asian_base : vn_b_men_sf_viet_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_sf_16 : vn_b_men_sf_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_16_zombie_walker : vn_b_men_sf_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class vn_b_men_sf_09 : vn_b_men_sf_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_09_zombie_walker : vn_b_men_sf_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_15_zombie_walker";
    };
    class vn_b_men_sf_12 : vn_b_men_sf_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_12_zombie_walker : vn_b_men_sf_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_02_zombie_walker";
    };
    class vn_b_men_sf_21 : vn_b_men_sf_asian_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_21_zombie_walker : vn_b_men_sf_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_02_zombie_walker";
    };
    class vn_b_men_sf_05 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_05_zombie_walker : vn_b_men_sf_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_02_zombie_walker";
    };
    class vn_b_men_sf_01 : vn_b_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_sf_01_zombie_walker : vn_b_men_sf_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_02_zombie_walker";
    };
    class SoldierWB;
    class vn_b_men_aircrew_base : SoldierWB {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_b_men_jetpilot_01 : vn_b_men_aircrew_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_01_zombie_walker : vn_b_men_jetpilot_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_b_men_jetpilot_07 : vn_b_men_jetpilot_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_07_zombie_walker : vn_b_men_jetpilot_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_08 : vn_b_men_jetpilot_07 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_08_zombie_walker : vn_b_men_jetpilot_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_12 : vn_b_men_jetpilot_08 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_12_zombie_walker : vn_b_men_jetpilot_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_05_zombie_walker";
    };
    class vn_b_men_jetpilot_11 : vn_b_men_jetpilot_07 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_11_zombie_walker : vn_b_men_jetpilot_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_04_zombie_walker";
    };
    class vn_b_men_jetpilot_02 : vn_b_men_jetpilot_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_02_zombie_walker : vn_b_men_jetpilot_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_b_men_jetpilot_03 : vn_b_men_jetpilot_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_03_zombie_walker : vn_b_men_jetpilot_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_04 : vn_b_men_jetpilot_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_04_zombie_walker : vn_b_men_jetpilot_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_06 : vn_b_men_jetpilot_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_06_zombie_walker : vn_b_men_jetpilot_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_05 : vn_b_men_jetpilot_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_05_zombie_walker : vn_b_men_jetpilot_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_02_zombie_walker";
    };
    class vn_b_men_jetpilot_09 : vn_b_men_jetpilot_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_09_zombie_walker : vn_b_men_jetpilot_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_b_men_jetpilot_10 : vn_b_men_jetpilot_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_jetpilot_10_zombie_walker : vn_b_men_jetpilot_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_01 : vn_b_men_aircrew_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_01_zombie_walker : vn_b_men_aircrew_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_25 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_25_zombie_walker : vn_b_men_aircrew_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_47 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_47_zombie_walker : vn_b_men_aircrew_47 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_41 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_41_zombie_walker : vn_b_men_aircrew_41 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_42 : vn_b_men_aircrew_41 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_42_zombie_walker : vn_b_men_aircrew_42 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_43 : vn_b_men_aircrew_41 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_43_zombie_walker : vn_b_men_aircrew_43 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_44 : vn_b_men_aircrew_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_44_zombie_walker : vn_b_men_aircrew_44 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_48 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_48_zombie_walker : vn_b_men_aircrew_48 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_03 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_03_zombie_walker : vn_b_men_aircrew_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_11 : vn_b_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_11_zombie_walker : vn_b_men_aircrew_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_23 : vn_b_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_23_zombie_walker : vn_b_men_aircrew_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_07 : vn_b_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_07_zombie_walker : vn_b_men_aircrew_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_15 : vn_b_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_15_zombie_walker : vn_b_men_aircrew_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_19 : vn_b_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_19_zombie_walker : vn_b_men_aircrew_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_13 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_13_zombie_walker : vn_b_men_aircrew_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_17 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_17_zombie_walker : vn_b_men_aircrew_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_37 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_37_zombie_walker : vn_b_men_aircrew_37 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_38 : vn_b_men_aircrew_37 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_38_zombie_walker : vn_b_men_aircrew_38 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_40 : vn_b_men_aircrew_37 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_40_zombie_walker : vn_b_men_aircrew_40 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_39 : vn_b_men_aircrew_37 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_39_zombie_walker : vn_b_men_aircrew_39 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_seal_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_45 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_45_zombie_walker : vn_b_men_aircrew_45 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_49 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_49_zombie_walker : vn_b_men_aircrew_49 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_50 : vn_b_men_aircrew_49 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_50_zombie_walker : vn_b_men_aircrew_50 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_46 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_46_zombie_walker : vn_b_men_aircrew_46 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_27 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_27_zombie_walker : vn_b_men_aircrew_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_31 : vn_b_men_aircrew_27 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_31_zombie_walker : vn_b_men_aircrew_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_02_zombie_walker";
    };
    class vn_b_men_aircrew_32 : vn_b_men_aircrew_31 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_32_zombie_walker : vn_b_men_aircrew_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_02_zombie_walker";
    };
    class vn_b_men_aircrew_34 : vn_b_men_aircrew_32 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_34_zombie_walker : vn_b_men_aircrew_34 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_33 : vn_b_men_aircrew_31 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_33_zombie_walker : vn_b_men_aircrew_33 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_28 : vn_b_men_aircrew_27 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_28_zombie_walker : vn_b_men_aircrew_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_30 : vn_b_men_aircrew_28 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_30_zombie_walker : vn_b_men_aircrew_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_29 : vn_b_men_aircrew_27 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_29_zombie_walker : vn_b_men_aircrew_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_03_01_zombie_walker";
    };
    class vn_b_men_aircrew_21 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_21_zombie_walker : vn_b_men_aircrew_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_09 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_09_zombie_walker : vn_b_men_aircrew_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_35 : vn_b_men_aircrew_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_35_zombie_walker : vn_b_men_aircrew_35 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_04_zombie_walker";
    };
    class vn_b_men_aircrew_04 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_04_zombie_walker : vn_b_men_aircrew_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_24 : vn_b_men_aircrew_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_24_zombie_walker : vn_b_men_aircrew_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_20 : vn_b_men_aircrew_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_20_zombie_walker : vn_b_men_aircrew_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_12 : vn_b_men_aircrew_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_12_zombie_walker : vn_b_men_aircrew_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_16 : vn_b_men_aircrew_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_16_zombie_walker : vn_b_men_aircrew_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_08 : vn_b_men_aircrew_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_08_zombie_walker : vn_b_men_aircrew_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_05 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_05_zombie_walker : vn_b_men_aircrew_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_02 : vn_b_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_02_zombie_walker : vn_b_men_aircrew_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_14 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_14_zombie_walker : vn_b_men_aircrew_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_03_zombie_walker";
    };
    class vn_b_men_aircrew_22 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_22_zombie_walker : vn_b_men_aircrew_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_18 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_18_zombie_walker : vn_b_men_aircrew_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_06 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_06_zombie_walker : vn_b_men_aircrew_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_b_men_aircrew_26 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_26_zombie_walker : vn_b_men_aircrew_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_b_men_aircrew_10 : vn_b_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_10_zombie_walker : vn_b_men_aircrew_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_02_zombie_walker";
    };
    class vn_b_men_aircrew_36 : vn_b_men_aircrew_10 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_b_men_aircrew_36_zombie_walker : vn_b_men_aircrew_36 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_05_zombie_walker";
    };
    class SoldierGB;
    class vn_i_men_aircrew_base : SoldierGB {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_aircrew_01 : vn_i_men_aircrew_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_01_zombie_walker : vn_i_men_aircrew_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_i_men_aircrew_02 : vn_i_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_02_zombie_walker : vn_i_men_aircrew_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_i_men_aircrew_05 : vn_i_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_05_zombie_walker : vn_i_men_aircrew_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_06 : vn_i_men_aircrew_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_06_zombie_walker : vn_i_men_aircrew_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_08 : vn_i_men_aircrew_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_08_zombie_walker : vn_i_men_aircrew_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_07 : vn_i_men_aircrew_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_07_zombie_walker : vn_i_men_aircrew_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_03 : vn_i_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_03_zombie_walker : vn_i_men_aircrew_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_04 : vn_i_men_aircrew_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_04_zombie_walker : vn_i_men_aircrew_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_09 : vn_i_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_09_zombie_walker : vn_i_men_aircrew_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_10 : vn_i_men_aircrew_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_10_zombie_walker : vn_i_men_aircrew_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_heli_01_01_zombie_walker";
    };
    class vn_i_men_aircrew_12 : vn_i_men_aircrew_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_12_zombie_walker : vn_i_men_aircrew_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_i_men_aircrew_11 : vn_i_men_aircrew_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_aircrew_11_zombie_walker : vn_i_men_aircrew_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_02_01_zombie_walker";
    };
    class vn_i_men_jetpilot_01 : vn_i_men_aircrew_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_jetpilot_01_zombie_walker : vn_i_men_jetpilot_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_jetpilot_02 : vn_i_men_jetpilot_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_jetpilot_02_zombie_walker : vn_i_men_jetpilot_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_k2b_01_01_zombie_walker";
    };
    class vn_i_men_army_base : SoldierGB {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_army_14 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_14_zombie_walker : vn_i_men_army_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_ranger_base : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_ranger_14 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_14_zombie_walker : vn_i_men_ranger_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_09 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_09_zombie_walker : vn_i_men_ranger_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_17_zombie_walker";
    };
    class vn_i_men_ranger_11 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_11_zombie_walker : vn_i_men_ranger_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_17_zombie_walker";
    };
    class vn_i_men_ranger_05 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_05_zombie_walker : vn_i_men_ranger_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_17_zombie_walker";
    };
    class vn_i_men_ranger_15 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_15_zombie_walker : vn_i_men_ranger_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_17_zombie_walker";
    };
    class vn_i_men_ranger_21 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_21_zombie_walker : vn_i_men_ranger_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_17_zombie_walker";
    };
    class vn_i_men_ranger_20 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_20_zombie_walker : vn_i_men_ranger_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_17_zombie_walker";
    };
    class vn_i_men_ranger_17 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_17_zombie_walker : vn_i_men_ranger_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_17_zombie_walker";
    };
    class vn_i_men_ranger_18 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_18_zombie_walker : vn_i_men_ranger_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_16 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_16_zombie_walker : vn_i_men_ranger_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_17_zombie_walker";
    };
    class vn_i_men_ranger_19 : vn_i_men_ranger_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_19_zombie_walker : vn_i_men_ranger_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_02 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_02_zombie_walker : vn_i_men_ranger_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_06 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_06_zombie_walker : vn_i_men_ranger_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_17_zombie_walker";
    };
    class vn_i_men_sf_base : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_sf_10 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_10_zombie_walker : vn_i_men_sf_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_05_zombie_walker";
    };
    class vn_i_men_sf_02 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_02_zombie_walker : vn_i_men_sf_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_05_zombie_walker";
    };
    class vn_i_men_sf_04 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_04_zombie_walker : vn_i_men_sf_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_05_zombie_walker";
    };
    class vn_i_men_sf_07 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_07_zombie_walker : vn_i_men_sf_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_sf_09 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_09_zombie_walker : vn_i_men_sf_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_05_zombie_walker";
    };
    class vn_i_men_sf_05 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_05_zombie_walker : vn_i_men_sf_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_sf_11 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_11_zombie_walker : vn_i_men_sf_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_sf_13 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_13_zombie_walker : vn_i_men_sf_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_sf_12 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_12_zombie_walker : vn_i_men_sf_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_sf_08 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_08_zombie_walker : vn_i_men_sf_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_sf_03 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_03_zombie_walker : vn_i_men_sf_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_05_zombie_walker";
    };
    class vn_i_men_sf_06 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_06_zombie_walker : vn_i_men_sf_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_sf_01 : vn_i_men_sf_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_sf_01_zombie_walker : vn_i_men_sf_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_ranger_07 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_07_zombie_walker : vn_i_men_ranger_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_04 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_04_zombie_walker : vn_i_men_ranger_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_17_zombie_walker";
    };
    class vn_i_men_ranger_08 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_08_zombie_walker : vn_i_men_ranger_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_17_zombie_walker";
    };
    class vn_i_men_ranger_03 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_03_zombie_walker : vn_i_men_ranger_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_17_zombie_walker";
    };
    class vn_i_men_ranger_10 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_10_zombie_walker : vn_i_men_ranger_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_17_zombie_walker";
    };
    class vn_i_men_ranger_13 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_13_zombie_walker : vn_i_men_ranger_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_17_zombie_walker";
    };
    class vn_i_men_ranger_01 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_01_zombie_walker : vn_i_men_ranger_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_17_zombie_walker";
    };
    class vn_i_men_ranger_12 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_12_zombie_walker : vn_i_men_ranger_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_17_zombie_walker";
    };
    class vn_i_men_ranger_22 : vn_i_men_ranger_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_ranger_22_zombie_walker : vn_i_men_ranger_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_17_zombie_walker";
    };
    class vn_i_men_army_13 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_13_zombie_walker : vn_i_men_army_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_i_men_army_07 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_07_zombie_walker : vn_i_men_army_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_army_10 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_10_zombie_walker : vn_i_men_army_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_11 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_11_zombie_walker : vn_i_men_army_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_army_04 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_04_zombie_walker : vn_i_men_army_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_i_men_army_03 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_03_zombie_walker : vn_i_men_army_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_07_zombie_walker";
    };
    class vn_i_men_army_08 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_08_zombie_walker : vn_i_men_army_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_i_men_rla_base : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_rla_23 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_23_zombie_walker : vn_i_men_rla_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_i_men_rla_03 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_03_zombie_walker : vn_i_men_rla_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_16_zombie_walker";
    };
    class vn_i_men_rla_13 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_13_zombie_walker : vn_i_men_rla_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_i_men_rla_22 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_22_zombie_walker : vn_i_men_rla_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_rla_14 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_14_zombie_walker : vn_i_men_rla_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_rla_25 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_25_zombie_walker : vn_i_men_rla_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_rla_10 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_10_zombie_walker : vn_i_men_rla_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_rla_04 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_04_zombie_walker : vn_i_men_rla_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_16_zombie_walker";
    };
    class vn_i_men_rla_02 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_02_zombie_walker : vn_i_men_rla_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_16_zombie_walker";
    };
    class vn_i_men_rla_01 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_01_zombie_walker : vn_i_men_rla_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_16_zombie_walker";
    };
    class vn_i_men_rla_12 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_12_zombie_walker : vn_i_men_rla_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_rla_24 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_24_zombie_walker : vn_i_men_rla_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_i_men_rla_06 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_06_zombie_walker : vn_i_men_rla_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_16_zombie_walker";
    };
    class vn_i_men_rla_11 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_11_zombie_walker : vn_i_men_rla_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_rla_07 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_07_zombie_walker : vn_i_men_rla_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_rla_08 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_08_zombie_walker : vn_i_men_rla_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_i_men_rla_15 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_15_zombie_walker : vn_i_men_rla_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_i_men_rla_17 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_17_zombie_walker : vn_i_men_rla_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_rla_18 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_18_zombie_walker : vn_i_men_rla_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_rla_20 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_20_zombie_walker : vn_i_men_rla_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_i_men_rla_19 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_19_zombie_walker : vn_i_men_rla_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_rla_16 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_16_zombie_walker : vn_i_men_rla_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_rla_21 : vn_i_men_rla_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_21_zombie_walker : vn_i_men_rla_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_07_zombie_walker";
    };
    class vn_i_men_rla_05 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_05_zombie_walker : vn_i_men_rla_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_16_zombie_walker";
    };
    class vn_i_men_rla_09 : vn_i_men_rla_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_rla_09_zombie_walker : vn_i_men_rla_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_02 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_02_zombie_walker : vn_i_men_army_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_army_06 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_06_zombie_walker : vn_i_men_army_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_05 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_05_zombie_walker : vn_i_men_army_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_i_men_army_26 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_26_zombie_walker : vn_i_men_army_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_army_15 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_15_zombie_walker : vn_i_men_army_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_07_zombie_walker";
    };
    class vn_i_men_army_17 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_17_zombie_walker : vn_i_men_army_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_21 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_21_zombie_walker : vn_i_men_army_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_07_zombie_walker";
    };
    class vn_i_men_army_16 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_16_zombie_walker : vn_i_men_army_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_20 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_20_zombie_walker : vn_i_men_army_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_07_zombie_walker";
    };
    class vn_i_men_army_22 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_22_zombie_walker : vn_i_men_army_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_19 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_19_zombie_walker : vn_i_men_army_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_07_zombie_walker";
    };
    class vn_i_men_army_18 : vn_i_men_army_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_18_zombie_walker : vn_i_men_army_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_09 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_09_zombie_walker : vn_i_men_army_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_marine_base : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_marine_07 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_07_zombie_walker : vn_i_men_marine_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_marine_22 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_22_zombie_walker : vn_i_men_marine_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_05_zombie_walker";
    };
    class vn_i_men_marine_13 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_13_zombie_walker : vn_i_men_marine_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_05_zombie_walker";
    };
    class vn_i_men_marine_14 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_14_zombie_walker : vn_i_men_marine_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_marine_01 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_01_zombie_walker : vn_i_men_marine_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_marine_03 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_03_zombie_walker : vn_i_men_marine_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_05_zombie_walker";
    };
    class vn_i_men_marine_09 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_09_zombie_walker : vn_i_men_marine_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_marine_06 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_06_zombie_walker : vn_i_men_marine_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_05_zombie_walker";
    };
    class vn_i_men_marine_24 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_24_zombie_walker : vn_i_men_marine_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_marine_02 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_02_zombie_walker : vn_i_men_marine_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_marine_10 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_10_zombie_walker : vn_i_men_marine_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_05_zombie_walker";
    };
    class vn_i_men_marine_04 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_04_zombie_walker : vn_i_men_marine_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_05_zombie_walker";
    };
    class vn_i_men_marine_05 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_05_zombie_walker : vn_i_men_marine_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_marine_08 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_08_zombie_walker : vn_i_men_marine_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_marine_11 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_11_zombie_walker : vn_i_men_marine_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_marine_12 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_12_zombie_walker : vn_i_men_marine_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_marine_15 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_15_zombie_walker : vn_i_men_marine_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_05_zombie_walker";
    };
    class vn_i_men_marine_18 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_18_zombie_walker : vn_i_men_marine_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_marine_21 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_21_zombie_walker : vn_i_men_marine_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_05_zombie_walker";
    };
    class vn_i_men_marine_20 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_20_zombie_walker : vn_i_men_marine_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_05_zombie_walker";
    };
    class vn_i_men_marine_17 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_17_zombie_walker : vn_i_men_marine_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_05_zombie_walker";
    };
    class vn_i_men_marine_19 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_19_zombie_walker : vn_i_men_marine_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_marine_16 : vn_i_men_marine_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_16_zombie_walker : vn_i_men_marine_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_05_zombie_walker";
    };
    class vn_i_men_marine_23 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_23_zombie_walker : vn_i_men_marine_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_05_zombie_walker";
    };
    class vn_i_men_marine_25 : vn_i_men_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_marine_25_zombie_walker : vn_i_men_marine_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_05_zombie_walker";
    };
    class vn_i_men_army_01 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_01_zombie_walker : vn_i_men_army_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_army_23 : vn_i_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_23_zombie_walker : vn_i_men_army_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_army_25 : vn_i_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_25_zombie_walker : vn_i_men_army_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_army_24 : vn_i_men_army_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_24_zombie_walker : vn_i_men_army_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_army_12 : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_army_12_zombie_walker : vn_i_men_army_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_07_zombie_walker";
    };
    class vn_i_men_fank_71_base : vn_i_men_army_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_fank_71_08 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_08_zombie_walker : vn_i_men_fank_71_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_71_12 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_12_zombie_walker : vn_i_men_fank_71_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_07 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_07_zombie_walker : vn_i_men_fank_71_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_71_05 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_05_zombie_walker : vn_i_men_fank_71_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_70_base : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_i_men_fank_70_11 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_11_zombie_walker : vn_i_men_fank_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_70_13 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_13_zombie_walker : vn_i_men_fank_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_70_15 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_15_zombie_walker : vn_i_men_fank_70_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_70_18 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_18_zombie_walker : vn_i_men_fank_70_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_21 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_21_zombie_walker : vn_i_men_fank_70_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_i_men_fank_70_22 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_22_zombie_walker : vn_i_men_fank_70_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_17 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_17_zombie_walker : vn_i_men_fank_70_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_20 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_20_zombie_walker : vn_i_men_fank_70_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_70_16 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_16_zombie_walker : vn_i_men_fank_70_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_19 : vn_i_men_fank_70_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_19_zombie_walker : vn_i_men_fank_70_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_70_06 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_06_zombie_walker : vn_i_men_fank_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_04 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_04_zombie_walker : vn_i_men_fank_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_70_26 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_26_zombie_walker : vn_i_men_fank_70_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_70_02 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_02_zombie_walker : vn_i_men_fank_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_70_03 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_03_zombie_walker : vn_i_men_fank_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_i_men_fank_70_01 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_01_zombie_walker : vn_i_men_fank_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_25 : vn_i_men_fank_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_25_zombie_walker : vn_i_men_fank_70_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_23 : vn_i_men_fank_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_23_zombie_walker : vn_i_men_fank_70_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_24 : vn_i_men_fank_70_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_24_zombie_walker : vn_i_men_fank_70_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_14 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_14_zombie_walker : vn_i_men_fank_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_70_09 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_09_zombie_walker : vn_i_men_fank_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_10 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_10_zombie_walker : vn_i_men_fank_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_08 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_08_zombie_walker : vn_i_men_fank_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_70_12 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_12_zombie_walker : vn_i_men_fank_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_70_07 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_07_zombie_walker : vn_i_men_fank_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_70_05 : vn_i_men_fank_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_70_05_zombie_walker : vn_i_men_fank_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_71_01 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_01_zombie_walker : vn_i_men_fank_71_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_24 : vn_i_men_fank_71_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_24_zombie_walker : vn_i_men_fank_71_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_25 : vn_i_men_fank_71_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_25_zombie_walker : vn_i_men_fank_71_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_23 : vn_i_men_fank_71_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_23_zombie_walker : vn_i_men_fank_71_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_09 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_09_zombie_walker : vn_i_men_fank_71_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_13 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_13_zombie_walker : vn_i_men_fank_71_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_71_11 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_11_zombie_walker : vn_i_men_fank_71_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_71_04 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_04_zombie_walker : vn_i_men_fank_71_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_71_14 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_14_zombie_walker : vn_i_men_fank_71_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_71_10 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_10_zombie_walker : vn_i_men_fank_71_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_26 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_26_zombie_walker : vn_i_men_fank_71_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_71_02 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_02_zombie_walker : vn_i_men_fank_71_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_71_03 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_03_zombie_walker : vn_i_men_fank_71_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_03_01_zombie_walker";
    };
    class vn_i_men_fank_71_15 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_15_zombie_walker : vn_i_men_fank_71_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_04_01_zombie_walker";
    };
    class vn_i_men_fank_71_22 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_22_zombie_walker : vn_i_men_fank_71_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_17 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_17_zombie_walker : vn_i_men_fank_71_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_16 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_16_zombie_walker : vn_i_men_fank_71_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_20 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_20_zombie_walker : vn_i_men_fank_71_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_05_01_zombie_walker";
    };
    class vn_i_men_fank_71_21 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_21_zombie_walker : vn_i_men_fank_71_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_06_01_zombie_walker";
    };
    class vn_i_men_fank_71_18 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_18_zombie_walker : vn_i_men_fank_71_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class vn_i_men_fank_71_19 : vn_i_men_fank_71_15 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_19_zombie_walker : vn_i_men_fank_71_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_02_01_zombie_walker";
    };
    class vn_i_men_fank_71_06 : vn_i_men_fank_71_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_i_men_fank_71_06_zombie_walker : vn_i_men_fank_71_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_b_uniform_macv_01_01_zombie_walker";
    };
    class O_Soldier_base_F;
    class vn_o_men_nva_base : O_Soldier_base_F {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_38 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_38_zombie_walker : vn_o_men_nva_38 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_03_zombie_walker";
    };
    class vn_o_men_nva_41 : vn_o_men_nva_38 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_41_zombie_walker : vn_o_men_nva_41 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_14 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_14_zombie_walker : vn_o_men_nva_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_28 : vn_o_men_nva_14 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_28_zombie_walker : vn_o_men_nva_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_vc_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_02 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_02_zombie_walker : vn_o_men_vc_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_02_07_zombie_walker";
    };
    class vn_o_men_vc_medic_base : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_08 : vn_o_men_vc_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_08_zombie_walker : vn_o_men_vc_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_vc_13 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_13_zombie_walker : vn_o_men_vc_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_vc_regional_base : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_regional_04 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_04_zombie_walker : vn_o_men_vc_regional_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_08_zombie_walker";
    };
    class vn_o_men_vc_regional_10 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_10_zombie_walker : vn_o_men_vc_regional_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_08_zombie_walker";
    };
    class vn_o_men_vc_regional_02 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_02_zombie_walker : vn_o_men_vc_regional_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_09_zombie_walker";
    };
    class vn_o_men_vc_regional_05 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_05_zombie_walker : vn_o_men_vc_regional_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_09_zombie_walker";
    };
    class vn_o_men_vc_regional_06 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_06_zombie_walker : vn_o_men_vc_regional_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_10_zombie_walker";
    };
    class vn_o_men_vc_regional_09 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_09_zombie_walker : vn_o_men_vc_regional_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_10_zombie_walker";
    };
    class vn_o_men_vc_regional_07 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_07_zombie_walker : vn_o_men_vc_regional_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_08_zombie_walker";
    };
    class vn_o_men_vc_regional_01 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_01_zombie_walker : vn_o_men_vc_regional_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_08_zombie_walker";
    };
    class vn_o_men_vc_regional_12 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_12_zombie_walker : vn_o_men_vc_regional_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_10_zombie_walker";
    };
    class vn_o_men_vc_regional_13 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_13_zombie_walker : vn_o_men_vc_regional_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_08_zombie_walker";
    };
    class vn_o_men_vc_regional_medic_base : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_regional_08 : vn_o_men_vc_regional_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_08_zombie_walker : vn_o_men_vc_regional_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_09_zombie_walker";
    };
    class vn_o_men_vc_regional_03 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_03_zombie_walker : vn_o_men_vc_regional_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_10_zombie_walker";
    };
    class vn_o_men_vc_regional_14 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_14_zombie_walker : vn_o_men_vc_regional_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_09_zombie_walker";
    };
    class vn_o_men_vc_regional_11 : vn_o_men_vc_regional_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_regional_11_zombie_walker : vn_o_men_vc_regional_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_09_zombie_walker";
    };
    class vn_o_men_vc_09 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_09_zombie_walker : vn_o_men_vc_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_01_07_zombie_walker";
    };
    class vn_o_men_vc_05 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_05_zombie_walker : vn_o_men_vc_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_vc_16 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_16_zombie_walker : vn_o_men_vc_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_vc_07 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_07_zombie_walker : vn_o_men_vc_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_11_07_zombie_walker";
    };
    class vn_o_men_vc_01 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_01_zombie_walker : vn_o_men_vc_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_01_07_zombie_walker";
    };
    class vn_o_men_vc_12 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_12_zombie_walker : vn_o_men_vc_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_04_07_zombie_walker";
    };
    class vn_o_men_vc_03 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_03_zombie_walker : vn_o_men_vc_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_03_07_zombie_walker";
    };
    class vn_o_men_vc_11 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_11_zombie_walker : vn_o_men_vc_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_03_07_zombie_walker";
    };
    class vn_o_men_vc_04 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_04_zombie_walker : vn_o_men_vc_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_04_07_zombie_walker";
    };
    class vn_o_men_vc_17 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_17_zombie_walker : vn_o_men_vc_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_vc_10 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_10_zombie_walker : vn_o_men_vc_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_02_07_zombie_walker";
    };
    class vn_o_men_vc_local_base : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_local_13 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_13_zombie_walker : vn_o_men_vc_local_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_04_zombie_walker";
    };
    class vn_o_men_vc_local_05 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_05_zombie_walker : vn_o_men_vc_local_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_02_zombie_walker";
    };
    class vn_o_men_vc_local_32 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_32_zombie_walker : vn_o_men_vc_local_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_04_zombie_walker";
    };
    class vn_o_men_vc_local_20 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_20_zombie_walker : vn_o_men_vc_local_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_05_zombie_walker";
    };
    class vn_o_men_vc_local_18 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_18_zombie_walker : vn_o_men_vc_local_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_05_zombie_walker";
    };
    class vn_o_men_vc_local_31 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_31_zombie_walker : vn_o_men_vc_local_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_03_zombie_walker";
    };
    class vn_o_men_vc_local_medic_base : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_vc_local_29 : vn_o_men_vc_local_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_29_zombie_walker : vn_o_men_vc_local_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_01_zombie_walker";
    };
    class vn_o_men_vc_local_22 : vn_o_men_vc_local_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_22_zombie_walker : vn_o_men_vc_local_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_06_zombie_walker";
    };
    class vn_o_men_vc_local_08 : vn_o_men_vc_local_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_08_zombie_walker : vn_o_men_vc_local_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_02_zombie_walker";
    };
    class vn_o_men_vc_local_30 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_30_zombie_walker : vn_o_men_vc_local_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_02_zombie_walker";
    };
    class vn_o_men_vc_local_28 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_28_zombie_walker : vn_o_men_vc_local_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_07_zombie_walker";
    };
    class vn_o_men_vc_local_19 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_19_zombie_walker : vn_o_men_vc_local_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_05_zombie_walker";
    };
    class vn_o_men_vc_local_14 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_14_zombie_walker : vn_o_men_vc_local_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_04_zombie_walker";
    };
    class vn_o_men_vc_local_17 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_17_zombie_walker : vn_o_men_vc_local_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_05_zombie_walker";
    };
    class vn_o_men_vc_local_21 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_21_zombie_walker : vn_o_men_vc_local_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_06_zombie_walker";
    };
    class vn_o_men_vc_local_15 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_15_zombie_walker : vn_o_men_vc_local_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_04_zombie_walker";
    };
    class vn_o_men_vc_local_23 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_23_zombie_walker : vn_o_men_vc_local_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_06_zombie_walker";
    };
    class vn_o_men_vc_local_27 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_27_zombie_walker : vn_o_men_vc_local_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_07_zombie_walker";
    };
    class vn_o_men_vc_local_10 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_10_zombie_walker : vn_o_men_vc_local_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_03_zombie_walker";
    };
    class vn_o_men_vc_local_24 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_24_zombie_walker : vn_o_men_vc_local_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_06_zombie_walker";
    };
    class vn_o_men_vc_local_25 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_25_zombie_walker : vn_o_men_vc_local_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_07_zombie_walker";
    };
    class vn_o_men_vc_local_16 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_16_zombie_walker : vn_o_men_vc_local_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_04_zombie_walker";
    };
    class vn_o_men_vc_local_06 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_06_zombie_walker : vn_o_men_vc_local_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_02_zombie_walker";
    };
    class vn_o_men_vc_local_01 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_01_zombie_walker : vn_o_men_vc_local_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_vc_local_26 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_26_zombie_walker : vn_o_men_vc_local_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_07_zombie_walker";
    };
    class vn_o_men_vc_local_04 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_04_zombie_walker : vn_o_men_vc_local_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_01_zombie_walker";
    };
    class vn_o_men_vc_local_11 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_11_zombie_walker : vn_o_men_vc_local_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_03_zombie_walker";
    };
    class vn_o_men_vc_local_12 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_12_zombie_walker : vn_o_men_vc_local_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_03_zombie_walker";
    };
    class vn_o_men_vc_local_07 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_07_zombie_walker : vn_o_men_vc_local_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_02_zombie_walker";
    };
    class vn_o_men_vc_local_02 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_02_zombie_walker : vn_o_men_vc_local_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_vc_local_03 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_03_zombie_walker : vn_o_men_vc_local_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_01_zombie_walker";
    };
    class vn_o_men_vc_local_09 : vn_o_men_vc_local_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_local_09_zombie_walker : vn_o_men_vc_local_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_03_zombie_walker";
    };
    class vn_o_men_vc_06 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_06_zombie_walker : vn_o_men_vc_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_vc_15 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_15_zombie_walker : vn_o_men_vc_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_vc_14 : vn_o_men_vc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_vc_14_zombie_walker : vn_o_men_vc_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_pl_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_pl_27 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_27_zombie_walker : vn_o_men_pl_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_11_zombie_walker";
    };
    class vn_o_men_pl_02 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_02_zombie_walker : vn_o_men_pl_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_11_zombie_walker";
    };
    class vn_o_men_pl_06 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_06_zombie_walker : vn_o_men_pl_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_12_zombie_walker";
    };
    class vn_o_men_pl_12 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_12_zombie_walker : vn_o_men_pl_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_13_zombie_walker";
    };
    class vn_o_men_pl_31 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_31_zombie_walker : vn_o_men_pl_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_13_zombie_walker";
    };
    class vn_o_men_pl_03 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_03_zombie_walker : vn_o_men_pl_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_11_zombie_walker";
    };
    class vn_o_men_pl_07 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_07_zombie_walker : vn_o_men_pl_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_12_zombie_walker";
    };
    class vn_o_men_pl_10 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_10_zombie_walker : vn_o_men_pl_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_13_zombie_walker";
    };
    class vn_o_men_pl_14 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_14_zombie_walker : vn_o_men_pl_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_14_zombie_walker";
    };
    class vn_o_men_pl_20 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_20_zombie_walker : vn_o_men_pl_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_pl_23 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_23_zombie_walker : vn_o_men_pl_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_12_zombie_walker";
    };
    class vn_o_men_pl_22 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_22_zombie_walker : vn_o_men_pl_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_12_zombie_walker";
    };
    class vn_o_men_pl_01 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_01_zombie_walker : vn_o_men_pl_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_01_11_zombie_walker";
    };
    class vn_o_men_pl_15 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_15_zombie_walker : vn_o_men_pl_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_14_zombie_walker";
    };
    class vn_o_men_pl_11 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_11_zombie_walker : vn_o_men_pl_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_13_zombie_walker";
    };
    class vn_o_men_pl_26 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_26_zombie_walker : vn_o_men_pl_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_14_zombie_walker";
    };
    class vn_o_men_pl_05 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_05_zombie_walker : vn_o_men_pl_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_01_12_zombie_walker";
    };
    class vn_o_men_pl_09 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_09_zombie_walker : vn_o_men_pl_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_01_13_zombie_walker";
    };
    class vn_o_men_pl_24 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_24_zombie_walker : vn_o_men_pl_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_13_zombie_walker";
    };
    class vn_o_men_pl_19 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_19_zombie_walker : vn_o_men_pl_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_03_zombie_walker";
    };
    class vn_o_men_pl_30 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_30_zombie_walker : vn_o_men_pl_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_02_11_zombie_walker";
    };
    class vn_o_men_pl_29 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_29_zombie_walker : vn_o_men_pl_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_01_13_zombie_walker";
    };
    class vn_o_men_pl_17 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_17_zombie_walker : vn_o_men_pl_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_pl_16 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_16_zombie_walker : vn_o_men_pl_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_14_zombie_walker";
    };
    class vn_o_men_pl_18 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_18_zombie_walker : vn_o_men_pl_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_03_zombie_walker";
    };
    class vn_o_men_pl_25 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_25_zombie_walker : vn_o_men_pl_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_03_13_zombie_walker";
    };
    class vn_o_men_pl_28 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_28_zombie_walker : vn_o_men_pl_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_12_zombie_walker";
    };
    class vn_o_men_pl_21 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_21_zombie_walker : vn_o_men_pl_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_12_zombie_walker";
    };
    class vn_o_men_pl_04 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_04_zombie_walker : vn_o_men_pl_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_11_zombie_walker";
    };
    class vn_o_men_pl_08 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_08_zombie_walker : vn_o_men_pl_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_04_12_zombie_walker";
    };
    class vn_o_men_pl_13 : vn_o_men_pl_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_pl_13_zombie_walker : vn_o_men_pl_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_pl_army_01_14_zombie_walker";
    };
    class vn_o_men_aircrew_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_aircrew_01 : vn_o_men_aircrew_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_01_zombie_walker : vn_o_men_aircrew_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_03_zombie_walker";
    };
    class vn_o_men_aircrew_05 : vn_o_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_05_zombie_walker : vn_o_men_aircrew_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_air_01_zombie_walker";
    };
    class vn_o_men_aircrew_07 : vn_o_men_aircrew_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_07_zombie_walker : vn_o_men_aircrew_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_air_01_zombie_walker";
    };
    class vn_o_men_aircrew_06 : vn_o_men_aircrew_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_06_zombie_walker : vn_o_men_aircrew_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_air_01_zombie_walker";
    };
    class vn_o_men_aircrew_08 : vn_o_men_aircrew_06 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_08_zombie_walker : vn_o_men_aircrew_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_air_01_zombie_walker";
    };
    class vn_o_men_aircrew_02 : vn_o_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_02_zombie_walker : vn_o_men_aircrew_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_03_zombie_walker";
    };
    class vn_o_men_aircrew_04 : vn_o_men_aircrew_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_04_zombie_walker : vn_o_men_aircrew_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_03_zombie_walker";
    };
    class vn_o_men_aircrew_03 : vn_o_men_aircrew_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_aircrew_03_zombie_walker : vn_o_men_aircrew_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_03_zombie_walker";
    };
    class vn_o_men_nva_39 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_39_zombie_walker : vn_o_men_nva_39 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_42 : vn_o_men_nva_39 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_42_zombie_walker : vn_o_men_nva_42 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_dc_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_dc_02 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_02_zombie_walker : vn_o_men_nva_dc_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_dc_16 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_16_zombie_walker : vn_o_men_nva_dc_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_dc_07 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_07_zombie_walker : vn_o_men_nva_dc_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_02_zombie_walker";
    };
    class vn_o_men_nva_dc_11 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_11_zombie_walker : vn_o_men_nva_dc_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_14_01_zombie_walker";
    };
    class vn_o_men_nva_dc_14 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_14_zombie_walker : vn_o_men_nva_dc_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_dc_01 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_01_zombie_walker : vn_o_men_nva_dc_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_02_zombie_walker";
    };
    class vn_o_men_nva_dc_18 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_18_zombie_walker : vn_o_men_nva_dc_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_08_zombie_walker";
    };
    class vn_o_men_nva_dc_09 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_09_zombie_walker : vn_o_men_nva_dc_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_07_zombie_walker";
    };
    class vn_o_men_nva_dc_04 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_04_zombie_walker : vn_o_men_nva_dc_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_08_zombie_walker";
    };
    class vn_o_men_nva_dc_03 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_03_zombie_walker : vn_o_men_nva_dc_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_07_zombie_walker";
    };
    class vn_o_men_nva_dc_12 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_12_zombie_walker : vn_o_men_nva_dc_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_14_04_zombie_walker";
    };
    class vn_o_men_nva_dc_13 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_13_zombie_walker : vn_o_men_nva_dc_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_02_zombie_walker";
    };
    class vn_o_men_nva_dc_06 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_06_zombie_walker : vn_o_men_nva_dc_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_14_04_zombie_walker";
    };
    class vn_o_men_nva_dc_05 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_05_zombie_walker : vn_o_men_nva_dc_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_14_01_zombie_walker";
    };
    class vn_o_men_nva_dc_10 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_10_zombie_walker : vn_o_men_nva_dc_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_08_zombie_walker";
    };
    class vn_o_men_nva_dc_17 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_17_zombie_walker : vn_o_men_nva_dc_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_dc_08 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_08_zombie_walker : vn_o_men_nva_dc_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_dc_15 : vn_o_men_nva_dc_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_dc_15_zombie_walker : vn_o_men_nva_dc_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_dc_13_04_zombie_walker";
    };
    class vn_o_men_nva_30 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_30_zombie_walker : vn_o_men_nva_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_34 : vn_o_men_nva_30 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_34_zombie_walker : vn_o_men_nva_34 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_31 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_31_zombie_walker : vn_o_men_nva_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_06_03_zombie_walker";
    };
    class vn_o_men_nva_35 : vn_o_men_nva_31 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_35_zombie_walker : vn_o_men_nva_35 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_medic_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_08 : vn_o_men_nva_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_08_zombie_walker : vn_o_men_nva_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_08_03_zombie_walker";
    };
    class vn_o_men_nva_22 : vn_o_men_nva_08 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_22_zombie_walker : vn_o_men_nva_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_08_04_zombie_walker";
    };
    class vn_o_men_nva_03 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_03_zombie_walker : vn_o_men_nva_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_03_zombie_walker";
    };
    class vn_o_men_nva_17 : vn_o_men_nva_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_17_zombie_walker : vn_o_men_nva_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_04_zombie_walker";
    };
    class vn_o_men_nva_11 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_11_zombie_walker : vn_o_men_nva_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_11_03_zombie_walker";
    };
    class vn_o_men_nva_25 : vn_o_men_nva_11 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_25_zombie_walker : vn_o_men_nva_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_11_04_zombie_walker";
    };
    class vn_o_men_nva_05 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_05_zombie_walker : vn_o_men_nva_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_19 : vn_o_men_nva_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_19_zombie_walker : vn_o_men_nva_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_43 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_43_zombie_walker : vn_o_men_nva_43 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_44 : vn_o_men_nva_43 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_44_zombie_walker : vn_o_men_nva_44 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_37 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_37_zombie_walker : vn_o_men_nva_37 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_03_zombie_walker";
    };
    class vn_o_men_nva_40 : vn_o_men_nva_37 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_40_zombie_walker : vn_o_men_nva_40 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_45 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_45_zombie_walker : vn_o_men_nva_45 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_10_03_zombie_walker";
    };
    class vn_o_men_nva_46 : vn_o_men_nva_45 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_46_zombie_walker : vn_o_men_nva_46 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_01 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_01_zombie_walker : vn_o_men_nva_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_03_zombie_walker";
    };
    class vn_o_men_nva_15 : vn_o_men_nva_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_15_zombie_walker : vn_o_men_nva_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_04_zombie_walker";
    };
    class vn_o_men_nva_12 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_12_zombie_walker : vn_o_men_nva_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_03_zombie_walker";
    };
    class vn_o_men_nva_26 : vn_o_men_nva_12 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_26_zombie_walker : vn_o_men_nva_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_04_zombie_walker";
    };
    class vn_o_men_nva_07 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_07_zombie_walker : vn_o_men_nva_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_07_03_zombie_walker";
    };
    class vn_o_men_nva_21 : vn_o_men_nva_07 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_21_zombie_walker : vn_o_men_nva_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_07_04_zombie_walker";
    };
    class vn_o_men_nva_29 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_29_zombie_walker : vn_o_men_nva_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_03_zombie_walker";
    };
    class vn_o_men_nva_33 : vn_o_men_nva_29 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_33_zombie_walker : vn_o_men_nva_33 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_kr_70_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_kr_70_19 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_19_zombie_walker : vn_o_men_kr_70_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_70_15 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_15_zombie_walker : vn_o_men_kr_70_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_11_07_zombie_walker";
    };
    class vn_o_men_kr_70_16 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_16_zombie_walker : vn_o_men_kr_70_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_70_23 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_23_zombie_walker : vn_o_men_kr_70_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_kr_70_07 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_07_zombie_walker : vn_o_men_kr_70_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_11_07_zombie_walker";
    };
    class vn_o_men_kr_70_18 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_18_zombie_walker : vn_o_men_kr_70_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_70_01 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_01_zombie_walker : vn_o_men_kr_70_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_kr_70_04 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_04_zombie_walker : vn_o_men_kr_70_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_01_zombie_walker";
    };
    class vn_o_men_kr_75_base : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_kr_75_03 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_03_zombie_walker : vn_o_men_kr_75_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_01_zombie_walker";
    };
    class vn_o_men_kr_75_11 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_11_zombie_walker : vn_o_men_kr_75_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_04_zombie_walker";
    };
    class vn_o_men_kr_75_04 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_04_zombie_walker : vn_o_men_kr_75_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_01_zombie_walker";
    };
    class vn_o_men_kr_75_22 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_22_zombie_walker : vn_o_men_kr_75_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_75_21 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_21_zombie_walker : vn_o_men_kr_75_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_75_18 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_18_zombie_walker : vn_o_men_kr_75_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_75_07 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_07_zombie_walker : vn_o_men_kr_75_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_11_07_zombie_walker";
    };
    class vn_o_men_kr_75_09 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_09_zombie_walker : vn_o_men_kr_75_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_12_10_zombie_walker";
    };
    class vn_o_men_kr_75_19 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_19_zombie_walker : vn_o_men_kr_75_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_04_zombie_walker";
    };
    class vn_o_men_kr_75_14 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_14_zombie_walker : vn_o_men_kr_75_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_75_06 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_06_zombie_walker : vn_o_men_kr_75_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_75_15 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_15_zombie_walker : vn_o_men_kr_75_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_11_04_zombie_walker";
    };
    class vn_o_men_kr_75_16 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_16_zombie_walker : vn_o_men_kr_75_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_75_08 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_08_zombie_walker : vn_o_men_kr_75_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_75_20 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_20_zombie_walker : vn_o_men_kr_75_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_kr_75_05 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_05_zombie_walker : vn_o_men_kr_75_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_75_02 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_02_zombie_walker : vn_o_men_kr_75_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_kr_75_13 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_13_zombie_walker : vn_o_men_kr_75_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_10_04_zombie_walker";
    };
    class vn_o_men_kr_75_01 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_01_zombie_walker : vn_o_men_kr_75_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_kr_75_23 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_23_zombie_walker : vn_o_men_kr_75_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_kr_75_10 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_10_zombie_walker : vn_o_men_kr_75_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_reg_11_10_zombie_walker";
    };
    class vn_o_men_kr_75_12 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_12_zombie_walker : vn_o_men_kr_75_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_75_17 : vn_o_men_kr_75_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_75_17_zombie_walker : vn_o_men_kr_75_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_70_08 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_08_zombie_walker : vn_o_men_kr_70_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_70_09 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_09_zombie_walker : vn_o_men_kr_70_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_kr_70_12 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_12_zombie_walker : vn_o_men_kr_70_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_70_20 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_20_zombie_walker : vn_o_men_kr_70_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_o_men_kr_70_05 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_05_zombie_walker : vn_o_men_kr_70_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_70_14 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_14_zombie_walker : vn_o_men_kr_70_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_70_06 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_06_zombie_walker : vn_o_men_kr_70_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_70_17 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_17_zombie_walker : vn_o_men_kr_70_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_10_07_zombie_walker";
    };
    class vn_o_men_kr_70_22 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_22_zombie_walker : vn_o_men_kr_70_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_70_02 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_02_zombie_walker : vn_o_men_kr_70_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_kr_70_21 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_21_zombie_walker : vn_o_men_kr_70_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_12_07_zombie_walker";
    };
    class vn_o_men_kr_70_24 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_24_zombie_walker : vn_o_men_kr_70_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_mf_09_07_zombie_walker";
    };
    class vn_o_men_kr_70_03 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_03_zombie_walker : vn_o_men_kr_70_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_01_zombie_walker";
    };
    class vn_o_men_kr_70_10 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_10_zombie_walker : vn_o_men_kr_70_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_o_men_kr_70_11 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_11_zombie_walker : vn_o_men_kr_70_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_01_zombie_walker";
    };
    class vn_o_men_kr_70_13 : vn_o_men_kr_70_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_kr_70_13_zombie_walker : vn_o_men_kr_70_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_01_zombie_walker";
    };
    class vn_o_men_nva_09 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_09_zombie_walker : vn_o_men_nva_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_03_zombie_walker";
    };
    class vn_o_men_nva_23 : vn_o_men_nva_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_23_zombie_walker : vn_o_men_nva_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_04_zombie_walker";
    };
    class vn_o_men_nva_47 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_47_zombie_walker : vn_o_men_nva_47 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_10_03_zombie_walker";
    };
    class vn_o_men_nva_48 : vn_o_men_nva_47 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_48_zombie_walker : vn_o_men_nva_48 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_06 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_06_zombie_walker : vn_o_men_nva_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_06_03_zombie_walker";
    };
    class vn_o_men_nva_20 : vn_o_men_nva_06 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_20_zombie_walker : vn_o_men_nva_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_06_04_zombie_walker";
    };
    class vn_o_men_nva_49 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_49_zombie_walker : vn_o_men_nva_49 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_03_zombie_walker";
    };
    class vn_o_men_nva_50 : vn_o_men_nva_49 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_50_zombie_walker : vn_o_men_nva_50 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_13 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_13_zombie_walker : vn_o_men_nva_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_03_zombie_walker";
    };
    class vn_o_men_nva_27 : vn_o_men_nva_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_27_zombie_walker : vn_o_men_nva_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_04_zombie_walker";
    };
    class vn_o_men_nva_02 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_02_zombie_walker : vn_o_men_nva_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_03_zombie_walker";
    };
    class vn_o_men_nva_16 : vn_o_men_nva_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_16_zombie_walker : vn_o_men_nva_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_04_zombie_walker";
    };
    class vn_o_men_nva_32 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_32_zombie_walker : vn_o_men_nva_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_06_03_zombie_walker";
    };
    class vn_o_men_nva_36 : vn_o_men_nva_32 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_36_zombie_walker : vn_o_men_nva_36 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_05_04_zombie_walker";
    };
    class vn_o_men_nva_10 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_10_zombie_walker : vn_o_men_nva_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_10_03_zombie_walker";
    };
    class vn_o_men_nva_24 : vn_o_men_nva_10 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_24_zombie_walker : vn_o_men_nva_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_10_04_zombie_walker";
    };
    class vn_o_men_nva_65_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_65_03 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_03_zombie_walker : vn_o_men_nva_65_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_01_zombie_walker";
    };
    class vn_o_men_nva_65_17 : vn_o_men_nva_65_03 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_17_zombie_walker : vn_o_men_nva_65_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_02_zombie_walker";
    };
    class vn_o_men_nva_65_36 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_36_zombie_walker : vn_o_men_nva_65_36 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_01_zombie_walker";
    };
    class vn_o_men_nva_65_39 : vn_o_men_nva_65_36 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_39_zombie_walker : vn_o_men_nva_65_39 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_02_zombie_walker";
    };
    class vn_o_men_nva_65_11 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_11_zombie_walker : vn_o_men_nva_65_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_01_zombie_walker";
    };
    class vn_o_men_nva_65_25 : vn_o_men_nva_65_11 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_25_zombie_walker : vn_o_men_nva_65_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_02_zombie_walker";
    };
    class vn_o_men_nva_65_01 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_01_zombie_walker : vn_o_men_nva_65_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_01_zombie_walker";
    };
    class vn_o_men_nva_65_15 : vn_o_men_nva_65_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_15_zombie_walker : vn_o_men_nva_65_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_02_zombie_walker";
    };
    class vn_o_men_nva_65_04 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_04_zombie_walker : vn_o_men_nva_65_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_01_zombie_walker";
    };
    class vn_o_men_nva_65_18 : vn_o_men_nva_65_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_18_zombie_walker : vn_o_men_nva_65_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_65_05 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_05_zombie_walker : vn_o_men_nva_65_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_01_zombie_walker";
    };
    class vn_o_men_nva_65_19 : vn_o_men_nva_65_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_19_zombie_walker : vn_o_men_nva_65_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_09_02_zombie_walker";
    };
    class vn_o_men_nva_65_13 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_13_zombie_walker : vn_o_men_nva_65_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_01_zombie_walker";
    };
    class vn_o_men_nva_65_27 : vn_o_men_nva_65_13 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_27_zombie_walker : vn_o_men_nva_65_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_02_zombie_walker";
    };
    class vn_o_men_nva_65_10 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_10_zombie_walker : vn_o_men_nva_65_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_01_zombie_walker";
    };
    class vn_o_men_nva_65_24 : vn_o_men_nva_65_10 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_24_zombie_walker : vn_o_men_nva_65_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_65_29 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_29_zombie_walker : vn_o_men_nva_65_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_32 : vn_o_men_nva_65_29 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_32_zombie_walker : vn_o_men_nva_65_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_65_37 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_37_zombie_walker : vn_o_men_nva_65_37 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_01_zombie_walker";
    };
    class vn_o_men_nva_65_40 : vn_o_men_nva_65_37 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_40_zombie_walker : vn_o_men_nva_65_40 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_02_zombie_walker";
    };
    class vn_o_men_nva_65_06 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_06_zombie_walker : vn_o_men_nva_65_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_01_zombie_walker";
    };
    class vn_o_men_nva_65_20 : vn_o_men_nva_65_06 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_20_zombie_walker : vn_o_men_nva_65_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_02_zombie_walker";
    };
    class vn_o_men_nva_65_30 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_30_zombie_walker : vn_o_men_nva_65_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_33 : vn_o_men_nva_65_30 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_33_zombie_walker : vn_o_men_nva_65_33 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_65_07 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_07_zombie_walker : vn_o_men_nva_65_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_01_zombie_walker";
    };
    class vn_o_men_nva_65_21 : vn_o_men_nva_65_07 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_21_zombie_walker : vn_o_men_nva_65_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_02_zombie_walker";
    };
    class vn_o_men_nva_65_12 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_12_zombie_walker : vn_o_men_nva_65_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_01_zombie_walker";
    };
    class vn_o_men_nva_65_26 : vn_o_men_nva_65_12 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_26_zombie_walker : vn_o_men_nva_65_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_12_02_zombie_walker";
    };
    class vn_o_men_nva_65_35 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_35_zombie_walker : vn_o_men_nva_65_35 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_38 : vn_o_men_nva_65_35 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_38_zombie_walker : vn_o_men_nva_65_38 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_01_02_zombie_walker";
    };
    class vn_o_men_nva_65_14 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_14_zombie_walker : vn_o_men_nva_65_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_28 : vn_o_men_nva_65_14 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_28_zombie_walker : vn_o_men_nva_65_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_65_02 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_02_zombie_walker : vn_o_men_nva_65_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_16 : vn_o_men_nva_65_02 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_16_zombie_walker : vn_o_men_nva_65_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_02_zombie_walker";
    };
    class vn_o_men_nva_65_09 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_09_zombie_walker : vn_o_men_nva_65_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_01_zombie_walker";
    };
    class vn_o_men_nva_65_23 : vn_o_men_nva_65_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_23_zombie_walker : vn_o_men_nva_65_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_03_02_zombie_walker";
    };
    class vn_o_men_nva_65_08 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_08_zombie_walker : vn_o_men_nva_65_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_22 : vn_o_men_nva_65_08 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_22_zombie_walker : vn_o_men_nva_65_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_02_zombie_walker";
    };
    class vn_o_men_nva_65_31 : vn_o_men_nva_65_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_31_zombie_walker : vn_o_men_nva_65_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_02_01_zombie_walker";
    };
    class vn_o_men_nva_65_34 : vn_o_men_nva_65_31 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_65_34_zombie_walker : vn_o_men_nva_65_34 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_02_zombie_walker";
    };
    class vn_o_men_nva_04 : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_04_zombie_walker : vn_o_men_nva_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_03_zombie_walker";
    };
    class vn_o_men_nva_18 : vn_o_men_nva_04 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_18_zombie_walker : vn_o_men_nva_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_army_04_04_zombie_walker";
    };
    class vn_o_men_nva_navy_base : vn_o_men_nva_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_navy_13 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_13_zombie_walker : vn_o_men_nva_navy_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_medic_base : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_navy_08 : vn_o_men_nva_navy_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_08_zombie_walker : vn_o_men_nva_navy_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_02_zombie_walker";
    };
    class vn_o_men_nva_navy_03 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_03_zombie_walker : vn_o_men_nva_navy_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_02_zombie_walker";
    };
    class vn_o_men_nva_navy_07 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_07_zombie_walker : vn_o_men_nva_navy_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_marine_base : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_marine_14 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_14_zombie_walker : vn_o_men_nva_marine_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_11 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_11_zombie_walker : vn_o_men_nva_marine_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_04 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_04_zombie_walker : vn_o_men_nva_marine_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_01 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_01_zombie_walker : vn_o_men_nva_marine_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_13 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_13_zombie_walker : vn_o_men_nva_marine_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_02 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_02_zombie_walker : vn_o_men_nva_marine_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_12 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_12_zombie_walker : vn_o_men_nva_marine_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_05 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_05_zombie_walker : vn_o_men_nva_marine_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_medic_base : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_o_men_nva_marine_08 : vn_o_men_nva_marine_medic_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_08_zombie_walker : vn_o_men_nva_marine_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_03 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_03_zombie_walker : vn_o_men_nva_marine_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_10 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_10_zombie_walker : vn_o_men_nva_marine_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_marine_09 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_09_zombie_walker : vn_o_men_nva_marine_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_07 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_07_zombie_walker : vn_o_men_nva_marine_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_03_zombie_walker";
    };
    class vn_o_men_nva_marine_06 : vn_o_men_nva_marine_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_marine_06_zombie_walker : vn_o_men_nva_marine_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_01_zombie_walker";
    };
    class vn_o_men_nva_navy_12 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_12_zombie_walker : vn_o_men_nva_navy_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_01 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_01_zombie_walker : vn_o_men_nva_navy_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_02_zombie_walker";
    };
    class vn_o_men_nva_navy_02 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_02_zombie_walker : vn_o_men_nva_navy_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_09 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_09_zombie_walker : vn_o_men_nva_navy_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_06 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_06_zombie_walker : vn_o_men_nva_navy_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_02_zombie_walker";
    };
    class vn_o_men_nva_navy_11 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_11_zombie_walker : vn_o_men_nva_navy_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_14 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_14_zombie_walker : vn_o_men_nva_navy_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_02_zombie_walker";
    };
    class vn_o_men_nva_navy_05 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_05_zombie_walker : vn_o_men_nva_navy_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_10 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_10_zombie_walker : vn_o_men_nva_navy_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class vn_o_men_nva_navy_04 : vn_o_men_nva_navy_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_o_men_nva_navy_04_zombie_walker : vn_o_men_nva_navy_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_nva_navy_04_zombie_walker";
    };
    class Civilian_F;
    class vn_c_men_base : Civilian_F {
        DECLARE_ZOMBIE_PARENT_PARENT
    };
    class vn_c_men_30 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_30_zombie_walker : vn_c_men_30 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_02_zombie_walker";
    };
    class vn_c_men_24 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_24_zombie_walker : vn_c_men_24 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_06_zombie_walker";
    };
    class vn_c_men_23 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_23_zombie_walker : vn_c_men_23 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_06_zombie_walker";
    };
    class vn_c_men_14 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_14_zombie_walker : vn_c_men_14 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_04_zombie_walker";
    };
    class vn_c_men_29 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_29_zombie_walker : vn_c_men_29 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_01_zombie_walker";
    };
    class vn_c_men_22 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_22_zombie_walker : vn_c_men_22 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_06_zombie_walker";
    };
    class vn_c_men_16 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_16_zombie_walker : vn_c_men_16 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_04_zombie_walker";
    };
    class vn_c_men_25 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_25_zombie_walker : vn_c_men_25 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_07_zombie_walker";
    };
    class vn_c_men_27 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_27_zombie_walker : vn_c_men_27 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_07_zombie_walker";
    };
    class vn_c_men_20 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_20_zombie_walker : vn_c_men_20 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_05_zombie_walker";
    };
    class vn_c_men_09 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_09_zombie_walker : vn_c_men_09 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_03_zombie_walker";
    };
    class vn_c_men_12 : vn_c_men_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_12_zombie_walker : vn_c_men_12 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_03_zombie_walker";
    };
    class vn_c_men_10 : vn_c_men_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_10_zombie_walker : vn_c_men_10 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_03_zombie_walker";
    };
    class vn_c_men_11 : vn_c_men_09 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_11_zombie_walker : vn_c_men_11 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_03_zombie_walker";
    };
    class vn_c_men_32 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_32_zombie_walker : vn_c_men_32 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_04_zombie_walker";
    };
    class vn_c_men_21 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_21_zombie_walker : vn_c_men_21 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_06_zombie_walker";
    };
    class vn_c_men_19 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_19_zombie_walker : vn_c_men_19 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_05_zombie_walker";
    };
    class vn_c_men_26 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_26_zombie_walker : vn_c_men_26 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_07_zombie_walker";
    };
    class vn_c_men_13 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_13_zombie_walker : vn_c_men_13 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_04_zombie_walker";
    };
    class vn_c_men_01 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_01_zombie_walker : vn_c_men_01 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_01_zombie_walker";
    };
    class vn_c_men_02 : vn_c_men_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_02_zombie_walker : vn_c_men_02 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_01_zombie_walker";
    };
    class vn_c_men_04 : vn_c_men_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_04_zombie_walker : vn_c_men_04 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_01_zombie_walker";
    };
    class vn_c_men_03 : vn_c_men_01 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_03_zombie_walker : vn_c_men_03 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_01_zombie_walker";
    };
    class vn_c_men_28 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_28_zombie_walker : vn_c_men_28 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_07_zombie_walker";
    };
    class vn_c_men_17 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_17_zombie_walker : vn_c_men_17 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_05_zombie_walker";
    };
    class vn_c_men_15 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_15_zombie_walker : vn_c_men_15 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_04_zombie_walker";
    };
    class vn_c_men_05 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_05_zombie_walker : vn_c_men_05 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_01_02_zombie_walker";
    };
    class vn_c_men_08 : vn_c_men_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_08_zombie_walker : vn_c_men_08 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_04_02_zombie_walker";
    };
    class vn_c_men_06 : vn_c_men_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_06_zombie_walker : vn_c_men_06 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_02_zombie_walker";
    };
    class vn_c_men_07 : vn_c_men_05 {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_07_zombie_walker : vn_c_men_07 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_03_02_zombie_walker";
    };
    class vn_c_men_18 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_18_zombie_walker : vn_c_men_18 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_02_05_zombie_walker";
    };
    class vn_c_men_31 : vn_c_men_base {
        DECLARE_ZOMBIE_PARENT
    };
    class vn_c_men_31_zombie_walker : vn_c_men_31 {
        ZOMBIFY_WALKER
        uniformClass = "vn_o_uniform_vc_05_03_zombie_walker";
    };
};