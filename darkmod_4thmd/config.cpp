class CfgPatches {
    class darkmod_4thmd
	{
        weapons[] = 
        {
            "4thmd_u_unif1_ar1",
            "4thmd_u_unif1_ar1_ss",
            "4thmd_u_unif1_ar1_tt",
            "4thmd_u_unif1_ar1_sw",
            "4thmd_u_unif1_ar1_gh",
            "4thmd_u_ghil1_ar1_a",
            "4thmd_u_ghil1_ar1_b",
            "4thmd_u_ghil1_ar1_c",

            "4thmd_u_unif1_wd1",
            "4thmd_u_unif1_wd1_ss",
            "4thmd_u_unif1_wd1_tt",
            "4thmd_u_unif1_wd1_sw",
            "4thmd_u_unif1_wd1_gh",
            "4thmd_u_ghil1_wd1_a",
            "4thmd_u_ghil1_wd1_b"
        };
        units[] = 
        {
            "4thmd_u_unif1_ar1_f",
            "4thmd_u_unif1_ar1_ss_f",
            "4thmd_u_unif1_ar1_tt_f",
            "4thmd_u_unif1_ar1_sw_f",
            "4thmd_u_unif1_ar1_gh_f",
            "4thmd_u_ghil1_ar1_f",
            "4thmd_u_ghil1_ar1_a_f",
            "4thmd_u_ghil1_ar1_l_f",
            "4thmd_b_pac1_ar1",
            "4thmd_b_pac2_ar1",
            "4thmd_b_pac3_ar1",
            "4thmd_b_pac5_ar1",

            "4thmd_u_unif1_wd1_f",
            "4thmd_u_unif1_wd1_ss_f",
            "4thmd_u_unif1_wd1_tt_f",
            "4thmd_u_unif1_wd1_sw_f",
            "4thmd_u_unif1_wd1_gh_f",
            "4thmd_u_ghil1_wd1_f",
            "4thmd_u_ghil1_wd1_a_f",
            "4thmd_u_ghil1_wd1_l_f",
            "4thmd_b_pac1_wd1",
            "4thmd_b_pac2_wd1",
            "4thmd_b_pac3_wd1",
            "4thmd_b_pac5_wd1",
        };
        magazines[] = {};
        requiredAddons[] = 
            {   
            "cba_main",
			"task_force_radio",
			"task_force_radio_items",
            "A3_Data_F",
            "A3_Armor_F",
            "A3_Armor_F_Argo",
            "A3_Armor_F_Beta",
            "A3_Armor_F_EPB",
            "A3_Armor_F_EPC",
            "A3_Armor_F_Exp",
            "A3_Armor_F_Gamma",
            "A3_Armor_F_Tank",
            "A3_Characters_F",
            "A3_Characters_F_Beta",
            "A3_Characters_F_Enoch"
            };

        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgFactionClasses
{
    class 4thmd_ar_faction
    {
        displayName = "ARMCO 4th Battalion (Arid)";
    };

    class 4thmd_wd_faction
    {
        displayName = "ARMCO 4th Battalion (Woodland)";
    };

    class 4thmd_de_faction
    {
        displayName = "ARMCO 4th Battalion (Desert)";
    };

    class 4thmd_bl_faction
    {
        displayName = "ARMCO 4th Battalion (Boreal)";
    };

    class 4thmd_ac_faction
    {
        displayName = "ARMCO 4th Battalion (Artic)";
    };

    class 4thmd_ju_faction
    {
        displayName = "ARMCO 4th Battalion (Jungle)";
    };
};

class CfgEditorCategories
{
    class 4thmd_supplies
    {
        displayName = "ARMCO Supplies";
    };
};

class CfgEditorSubcategories
{
    class 4thmd_comp
    {
        displayName = "ARMCO 4th Battalion";
    };

    class 4thmd_lgs
    {
        displayName = "Logistics";
    };
};

class CfgWeapons
{
    class Uniform_Base;
    class U_I_CombatUniform : Uniform_Base
    {
        class ItemInfo;
    };

    class 4thmd_u_unif1_ar1 : U_I_CombatUniform
    {
        author = "Darknessvoid99";
        displayName = "4Bt. Arid Uniform";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_unif1_ar1_f";
        };
    };

    class 4thmd_u_unif1_ar1_ss : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Uniform (Short Sleeve)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_unif1_ar1_ss_f";
        };
    };

    class 4thmd_u_unif1_ar1_tt : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Uniform (Tank Top)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_unif1_ar1_tt_f";
        };
    };

    class 4thmd_u_unif1_ar1_sw : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Uniform (Sweater)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_unif1_ar1_sw_f";
        };
    };

    class 4thmd_u_unif1_ar1_gh : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Uniform (Ghillie)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_unif1_ar1_gh_f";
        };
    };

    class 4thmd_u_ghil1_ar1 : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Ghillie (Semi-Arid)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_ghil1_ar1_f";
        };
    };

    class 4thmd_u_ghil1_ar1_b : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Ghillie (Arid)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_ghil1_ar1_b_f";
        };
    };

    class 4thmd_u_ghil1_ar1_c : 4thmd_u_unif1_ar1
    {
        displayName = "4Bt. Arid Ghillie (Lush)";
        class ItemInfo : ItemInfo
        {
            uniformClass = "4thmd_u_ghil1_ar1_c_f";
        };
    };

    #include "CfgW_equ_wd.hpp"
/*
    #include "CfgW_equ_de.hpp"
    #include "CfgW_equ_bl.hpp"
    #include "CfgW_equ_sb.hpp"
    #include "CfgW_equ_ac.hpp"
    #include "CfgW_equ_ju.hpp"
*/
};

class CfgVehicles
{
    class I_Soldier_base_F;
    class 4thmd_u_unif1_ar1_f : I_Soldier_base_F
    {
        scope = DEBUG;
        side = 1;
        author = "Darknesvoid99";
        displayName = "[DEBUG] 4Bt. Arid Uniform";
        faction = "4thmd_ar_faction";
        editorSubcategory="EdSubcat_Personnel";
        uniformClass = "4thmd_u_unif1_ar1";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_unif1_ar1.paa"
        };
        linkedItems[] = {};
		respawnLinkedItems[] = {};
        weapons[] = {};
        respawnweapons[] = {};
    };

    class 4thmd_u_unif1_ar1_ss_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Uniform (Rolled-Up)";
        uniformClass = "4thmd_u_unif1_ar1_ss";
        model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_unif1_ar1.paa"
        };
    };

    class 4thmd_u_unif1_ar1_tt_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Uniform (Tank Top)";
        uniformClass = "4thmd_u_unif1_ar1_tt";
        model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
        hiddenSelections[] = 
        {
            "camo1", 
            "camo2", 
            "camo3", 
            "insignia"
        };
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_unif1_tt_ar1.paa",
			"darkmod_4thmd\data\arid\dm_unif1_ar1.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
        };
    };

    class 4thmd_u_unif1_ar1_sw_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Uniform (Sweater)";
        uniformClass = "4thmd_u_unif1_ar1_sw";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_unif1_sw_ar1.paa"
        };
    };

    class 4thmd_u_unif1_ar1_gh_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Uniform (Ghillie)";
        uniformClass = "4thmd_u_unif1_ar1_gh";
        model="A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_unif1_ar1.paa"
        };
    };

    class 4thmd_u_ghil1_ar1_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Ghillie (Semi-Arid)";
        uniformClass = "4thmd_u_ghil1_ar1";
        model="\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";

        hiddenSelections[] = 
        {"camo",
        "camo3",
        "camo4"
        };

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_ghil1_ar1.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"
        };
    };

    class 4thmd_u_ghil1_ar1_b_f : 4thmd_u_ghil1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Ghillie (Arid)";
        uniformClass = "4thmd_u_ghil1_ar1_b";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_ghil1_ar1.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_co.paa"
        };
    };

    class 4thmd_u_ghil1_ar1_c_f : 4thmd_u_ghil1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Arid Ghillie (Lush)";
        uniformClass = "4thmd_u_ghil1_ar1_c";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_ghil1_ar1.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"
        };
    };

    class B_AssaultPack_cbr;
    class 4thmd_b_pac1_ar1 : B_AssaultPack_cbr
    {
        displayName = "4Bt. Arid Assault Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_pac1_ar1.paa"
        };
    };

    class B_FieldPack_cbr;
    class 4thmd_b_pac2_ar1 : B_FieldPack_cbr
    {
        displayName = "4Bt. Arid Field Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_pac2_ar1.paa"
        };
    };

    class B_Kitbag_cbr;
    class 4thmd_b_pac3_ar1 : B_Kitbag_cbr
    {
        displayName = "4Bt. Arid Kitbag";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_pac3_ar1.paa"
        };
    };

    class B_Carryall_cbr;
    class 4thmd_b_pac5_ar1 : B_Carryall_cbr
    {
        displayName = "4Bt. Arid Carryall";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\arid\dm_pac5_ar1.paa"
        };
    };

    //Combat Fatigues [AAF] (Officer)
    //Parade Uniforms... Eventually

    #include "CfgV_equ_wd.hpp"
/*
    #include "CfgV_equ_de.hpp"
    #include "CfgV_equ_bl.hpp"
    #include "CfgV_equ_ac.hpp"
    #include "CfgV_equ_ju.hpp"
*/

    class Box_NATO_Ammo_F;
    class dmlib_cgo_e_1 : Box_NATO_Ammo_F
    {
        displayName = "Empty Crate (1)";
        maximumLoad = 800;
        ace_cargo_size = 1;
        class TransportBackpacks{};
        class TransportItems{};
        class TransportMagazines{};
        class TransportWeapons{};
    };

    class Box_NATO_WpsSpecial_F;
    class dmlib_cgo_e_2 : Box_NATO_WpsSpecial_F
    {
        displayName = "Empty Crate (2)";
        maximumLoad = 1200;
        ace_cargo_size = 2;
        class TransportBackpacks{};
        class TransportItems{};
        class TransportMagazines{};
        class TransportWeapons{};
    };

    class Box_NATO_Equip_F;
    class dmlib_cgo_e_3 : Box_NATO_Equip_F
    {
        displayName = "Empty Crate (3)";
        maximumLoad = 1600;
        ace_cargo_size = 3;
        class TransportBackpacks{};
        class TransportItems{};
        class TransportMagazines{};
        class TransportWeapons{};
    };

    class B_supplyCrate_F;
    class dmlib_cgo_e_6 : B_supplyCrate_F
    {
        displayName = "Empty Crate (6)";
        maximumLoad = 4000;
        ace_cargo_size = 6;
        class TransportBackpacks{};
        class TransportItems{};
        class TransportMagazines{};
        class TransportWeapons{};
        
    };

    class FlexibleTank_01_forest_F;
    class 4thmd_s_ft1_forest : FlexibleTank_01_forest_F
    {
        editorCategory="4thmd_supplies";
        editorSubcategory="4thmd_lgs";
        ace_refuel_fuelCargo = 400;
    };

    class FlexibleTank_01_sand_F;
    class 4thmd_s_ft1_sand : FlexibleTank_01_sand_F
    {
        editorCategory="4thmd_supplies";
        editorSubcategory="4thmd_lgs";
        ace_refuel_fuelCargo = 400;
    };

    class Constructions_base_F;
    class Land_WoodenBox_F : Constructions_base_F
    {
        class EventHandlers;
    };
    class 4thmd_s_val_wood : Land_WoodenBox_F
    {
        displayName = "Vehicle Light Ammo";
        editorCategory="4thmd_supplies";
        editorSubcategory="4thmd_lgs";

        class EventHandlers : EventHandlers
        {
            init="[(_this select 0), 800] call ace_rearm_fnc_makeSource;";
        };

        ace_cargo_size = 3;
        //ace_rearm_defaultSupply = 800;
        ace_cargo_canLoad = 1;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
        ace_cargo_hasCargo = 0;
        ace_cargo_space = 0;
        maximumLoad = 0;
    };

    class Box_NATO_AmmoVeh_F;
    class 4thmd_s_va1_std : Box_NATO_AmmoVeh_F
    {
        ace_cargo_size = 6;
        editorCategory="4thmd_supplies";
        editorSubcategory="4thmd_lgs";
        ace_rearm_defaultSupply = 2000;
    };
};