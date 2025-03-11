class CfgPatches {
    class darkmod_4thmd_core
	{
        weapons[] = 
        {
            "4thmd_w_ld_lhrM1_heat_od",
            "4thmd_w_ld_lhrM1_heat_od_loaded",
            "4thmd_w_ld_lhrM1_heat_od_used",
            "4thmd_w_ld_lhrM1_heat_sd",
            "4thmd_w_ld_lhrM1_heat_sd_loaded",
            "4thmd_w_ld_lhrM1_heat_sd_used",
            "4thmd_w_ld_lhrM1_heat_dg",
            "4thmd_w_ld_lhrM1_heat_dg_loaded",
            "4thmd_w_ld_lhrM1_heat_dg_used",

            "4thmd_w_ld_lhrM0_heat_od",
            "4thmd_w_ld_lhrM0_heat_od_loaded",
            "4thmd_w_ld_lhrM0_heat_od_used",
            "4thmd_w_ld_lhrM0_heat_sd",
            "4thmd_w_ld_lhrM0_heat_sd_loaded",
            "4thmd_w_ld_lhrM0_heat_sd_used",
            "4thmd_w_ld_lhrM0_heat_dg",
            "4thmd_w_ld_lhrM0_heat_dg_loaded",
            "4thmd_w_ld_lhrM0_heat_dg_used"
        };
        units[] = {};
        requiredAddons[] = 
            {   
                "A3_Weapons_F_Tank_Launchers_MRAWS",
                "cba_main"
            };

        author = "Darknessvoid99";
    };

    //skipWhenMissingDependencies = 1;
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

    class 4thmd_players
	{
		displayName = "ARMCO Player Units";
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
    class 4thmd_logistics
    {
        displayName = "Logistics";
    };

    class 4thmd_crates
    {
        displayName = "Crates";
    };

    class 4thmd_resupply
    {
        displayName = "Resupply";
    };

    class 4thmd_uniform
    {
        displayName = "Uniform";
    };

    class 4thmd_pu_std
	{
		displayName = "Standard";
	};

    class 4thmd_pu_rec
	{
		displayName = "Recon";
	};

    class 4thmd_comp
    {
        displayName = "ARMCO 4th Battalion";
    };

    class 4thmd_comp_ar
    {
        displayName = "ARMCO 4th Battalion (Arid)";
    };

   class 4thmd_comp_wd
    {
        displayName = "ARMCO 4th Battalion (Woodland)";
    };

    class 4thmd_comp_de
    {
        displayName = "ARMCO 4th Battalion (Desert)";
    };

    class 4thmd_comp_bl
    {
        displayName = "ARMCO 4th Battalion (Boreal)";
    };

    class 4thmd_comp_ac
    {
        displayName = "ARMCO 4th Battalion (Arctic)";
    };

    class 4thmd_comp_ju
    {
        displayName = "ARMCO 4th Battalion (Jungle)";
    };

    class 4thmd_comp_nv
    {
        displayName = "ARMCO 4th Battalion (Navy)";
    };
};

class CfgMagazines
{
    // Alpha's Disposiable MAAWS
        class MRAWS_HEAT_F;
        /*class MAA_MAAWS_ASM509;
        class MAA_MAAWS_GMM_HEAT;
        class MAA_MAAWS_HEDP502;*/

        class 4thot_m_lhrM_d_heat : MRAWS_HEAT_F
        {
            mass = 0.1;
        };

        /*class 4thot_m_lhrM_d_asm5 : MAA_MAAWS_ASM509
        {
            mass = 0.1;
        };

        class 4thot_m_lhrM_d_atgm : MAA_MAAWS_GMM_HEAT
        {
            mass = 0.1;
        };

        class 4thot_m_lhrM_d_hedp : MAA_MAAWS_HEDP502
        {
            mass = 0.1;
        };*/
};

class CfgWeapons
{
    //HEAT 75 , HEDP,  GMM HEAT, ASM

    // Alpha's Disposiable MAAWS
        class launch_MRAWS_base_F;
        class launch_MRAWS_olive_F : launch_MRAWS_base_F
        {
            class WeaponSlotsInfo;
        };

        class launch_MRAWS_olive_rail_F : launch_MRAWS_olive_F
        {
            class WeaponSlotsInfo;
        };

        //HEAT 75
            //Mod 1
                class 4thmd_w_ld_lhrM1_heat_od : launch_MRAWS_olive_F
                {
                    displayName = "[ALPHA] MAAWS Mod 1 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_heat"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 205.4;
                    };
                };
                class 4thmd_w_ld_lhrM1_heat_od_loaded : 4thmd_w_ld_lhrM1_heat_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 205.5;
                    };
                };
                class 4thmd_w_ld_lhrM1_heat_od_used : 4thmd_w_ld_lhrM1_heat_od
                {
                    displayName = "MAAWS Mod 1 Disposable (Empty)";
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_sd : 4thmd_w_ld_lhrM1_heat_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_sd_loaded : 4thmd_w_ld_lhrM1_heat_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_sd_used : 4thmd_w_ld_lhrM1_heat_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_dg : 4thmd_w_ld_lhrM1_heat_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_dg_loaded : 4thmd_w_ld_lhrM1_heat_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_heat_dg_used : 4thmd_w_ld_lhrM1_heat_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_heat_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };
            // Mod 0
                class 4thmd_w_ld_lhrM0_heat_od : launch_MRAWS_olive_rail_F
                {
                    displayName = "[ALPHA] MAAWS Mod 0 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_heat"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 205.4;
                    };
                };
                class 4thmd_w_ld_lhrM0_heat_od_loaded : 4thmd_w_ld_lhrM0_heat_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 205.5;
                    };
                };
                class 4thmd_w_ld_lhrM0_heat_od_used : 4thmd_w_ld_lhrM0_heat_od
                {
                    displayName = "MAAWS Mod 0 Disposable (Empty)";
                    //baseWeapon = "4thmd_w_ld_lhrM0_heat_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_sd : 4thmd_w_ld_lhrM0_heat_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_sd_loaded : 4thmd_w_ld_lhrM0_heat_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_sd_used : 4thmd_w_ld_lhrM0_heat_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_dg : 4thmd_w_ld_lhrM0_heat_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_dg_loaded : 4thmd_w_ld_lhrM0_heat_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_heat_dg_used : 4thmd_w_ld_lhrM0_heat_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_heat_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };
};

class CBA_DisposableLaunchers
{
	4thmd_w_ld_lhrM1_heat_od[]=
	{
		"4thmd_w_ld_lhrM1_heat_od_loaded",
		"4thmd_w_ld_lhrM1_heat_od_used"
	};

    4thmd_w_ld_lhrM1_heat_sd[]=
	{
		"4thmd_w_ld_lhrM1_heat_sd_loaded",
		"4thmd_w_ld_lhrM1_heat_sd_used"
	};

    4thmd_w_ld_lhrM1_heat_dg[]=
	{
		"4thmd_w_ld_lhrM1_heat_dg_loaded",
		"4thmd_w_ld_lhrM1_heat_dg_used"
	};

    4thmd_w_ld_lhrM0_heat_od[]=
	{
		"4thmd_w_ld_lhrM0_heat_od_loaded",
		"4thmd_w_ld_lhrM0_heat_od_used"
	};

    4thmd_w_ld_lhrM0_heat_sd[]=
	{
		"4thmd_w_ld_lhrM0_heat_sd_loaded",
		"4thmd_w_ld_lhrM0_heat_sd_used"
	};

    4thmd_w_ld_lhrM0_heat_dg[]=
	{
		"4thmd_w_ld_lhrM0_heat_dg_loaded",
		"4thmd_w_ld_lhrM0_heat_dg_used"
	};
};

class CfgVehicles
{
    class B_Soldier_F;
    class 4thmd_u_base_b : B_Soldier_F
	{
		scope = 1;
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
		author = "Darknessvoid99";
		displayName = "RMN";
		icon = "iconMan";
		faction = "dm_players";
		editorSubcategory = "dmpu_categ_standard";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {};
		RespawnItems[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ACE_Altimeter","TFAR_anprc154"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ACE_Altimeter","TFAR_anprc154"};
		uniformClass = "U_I_G_resistanceLeader_F";
		backpack = "";
	};

    //Logistics
        class Box_NATO_Ammo_F;
        class 4thmd_cgo_e_1 : Box_NATO_Ammo_F
        {
            displayName = "Empty Crate (1)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 800;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_WpsLaunch_F;
        class 4thmd_cgo_e_2 : Box_NATO_WpsLaunch_F
        {
            displayName = "Empty Crate (1.5)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1.5;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_Wps_F;
        class 4thmd_cgo_e_3 : Box_NATO_Wps_F
        {
            displayName = "Empty Crate (2)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1600;
            ace_cargo_size = 2;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_WpsSpecial_F;
        class 4thmd_cgo_e_4 : Box_NATO_WpsSpecial_F
        {
            displayName = "Empty Crate (3)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 2400;
            ace_cargo_size = 3;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_Equip_F;
        class 4thmd_cgo_e_5 : Box_NATO_Equip_F
        {
            displayName = "Empty Crate (4)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 3200;
            ace_cargo_size = 4;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class B_supplyCrate_F;
        class 4thmd_cgo_e_6 : B_supplyCrate_F
        {
            displayName = "Empty Crate (6)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 4800;
            ace_cargo_size = 6;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
            
        };

        class ACE_medicalSupplyCrate;
        class 4thmd_cgo_e_med : ACE_medicalSupplyCrate
        {
            displayName = "Empty Crate (MED)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_IDAP_AmmoOrd_F;
        class 4thmd_cgo_e_eod : Box_IDAP_AmmoOrd_F
        {
            displayName = "Empty Crate (EOD)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };


        class FlexibleTank_01_forest_F;
        class 4thmd_s_ft1_forest : FlexibleTank_01_forest_F
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_refuel_fuelCargo = 400;
        };

        class FlexibleTank_01_sand_F;
        class 4thmd_s_ft1_sand : FlexibleTank_01_sand_F
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
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
            editorSubcategory="4thmd_logistics";

            class EventHandlers : EventHandlers
            {
                init="[(_this select 0), 600] call ace_rearm_fnc_makeSource;";
            };

            ace_cargo_size = 2;
            ace_rearm_defaultSupply = 600;
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
            editorSubcategory="4thmd_logistics";
            ace_rearm_defaultSupply = 2000;
        };

        class ACE_RepairItem_Base;
        class ACE_Track : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 1;
        };

        class ACE_Wheel : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 1;
        };
};