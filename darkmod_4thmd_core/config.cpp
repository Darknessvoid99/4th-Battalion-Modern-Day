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
        units[] =
        {
            "4thmd_cgo_e_1",
            "4thmd_cgo_e_2",
            "4thmd_cgo_e_3",
            "4thmd_cgo_e_4",
            "4thmd_cgo_e_5",
            "4thmd_cgo_e_6",
            "4thmd_cgo_e_med",
            "4thmd_cgo_e_eod",

            "4thmd_s_jc1_std",
            "4thmd_s_ft1_forest",
            "4thmd_s_ft1_sand",

            "4thmd_s_va2_std",
            "4thmd_s_va1_std",
            
            "4thmd_s_static_rrr",
            "4thmd_s_static_kpl",
            "4thmd_s_ccs_kpl"
        };
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
        displayName = "ARMCO 4th Battalion (Arctic)";
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

    class 4thmd_ar_supplies
    {
        displayName = "ARMCO Supplies (Arid)";
    };

    class 4thmd_wd_supplies
    {
        displayName = "ARMCO Supplies (Woodland)";
    };

    class 4thmd_de_supplies
    {
        displayName = "ARMCO Supplies (Desert)";
    };

    class 4thmd_bl_supplies
    {
        displayName = "ARMCO Supplies (Boreal)";
    };

    class 4thmd_ac_supplies
    {
        displayName = "ARMCO Supplies (Arctic)";
    };

    class 4thmd_ju_supplies
    {
        displayName = "ARMCO Supplies (Jungle)";
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

        class 4thot_m_lhrM_d_heat : MRAWS_HEAT_F
        {
            mass = 0.1;
        };
};

class CfgWeapons
{
    // HEAT 75 , HEDP,  GMM HEAT, ASM

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
            // Mod 1
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
    //Player Units
        class I_Soldier_base_F;
        class 4thmd_u_base_b : I_Soldier_base_F
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

        class Land_CanisterFuel_F;
        class Land_CanisterFuel_Red_F : Land_CanisterFuel_F
        {
            class EventHandlers;
        };

        class 4thmd_s_jc1_std : Land_CanisterFuel_Red_F
        {
            displayName = "Jerry Can";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            ace_cargo_size = 0.75;
            ace_cargo_canLoad = 1;
            ace_dragging_ignoreWeightCarry = 1;

            class EventHandlers : EventHandlers
            {
                
                init="[(_this select 0), 100] call ace_refuel_fnc_makeJerryCan;";
            };
        };

        class FlexibleTank_01_forest_F;
        class 4thmd_s_ft1_forest : FlexibleTank_01_forest_F
        {
            ace_cargo_size = 3;
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_refuel_fuelCargo = 450;
            ace_dragging_ignoreWeightCarry = 1;
        };

        class FlexibleTank_01_sand_F;
        class 4thmd_s_ft1_sand : FlexibleTank_01_sand_F
        {
            ace_cargo_size = 3;
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_refuel_fuelCargo = 450;
            ace_dragging_ignoreWeightCarry = 1;
        };

        class Box_NATO_AmmoVeh_F;
        class 4thmd_s_va2_std : Box_NATO_AmmoVeh_F
        {
            displayName = "Vehicle Light Ammo";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
            hiddenSelections[] = {"Camo_Signs","Camo"};
            hiddenSelectionsTextures[] = {"","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};

            ace_cargo_size = 3;
            ace_rearm_defaultSupply = 750;
            ace_cargo_canLoad = 1;
            ace_dragging_canCarry = 1;
            ace_dragging_canDrag = 1;
            ace_cargo_hasCargo = 0;
            ace_cargo_space = 0;
            //maximumLoad = 0;
            ace_dragging_ignoreWeightCarry = 1;
        };

        class 4thmd_s_va1_std : Box_NATO_AmmoVeh_F
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            ace_cargo_size = 8;
            ace_rearm_defaultSupply = 2000;
            ace_cargo_canLoad = 1;
            ace_dragging_canCarry = 0;
            ace_dragging_canDrag = 1;
            ace_cargo_hasCargo = 0;
            ace_cargo_space = 0;
            ace_dragging_ignoreWeightCarry = 1;
        };

        class Slingload_01_Base_F;
        class B_Slingload_01_Ammo_F : Slingload_01_Base_F
        {
            class EventHandlers;
        };
        class 4thmd_s_static_rrr : B_Slingload_01_Ammo_F
        {
            displayName = "Service Point";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            ace_cargo_size = 1000;
            ace_repair_canRepair = 1;
            ace_rearm_defaultSupply = 999999;
            ace_cargo_canLoad = 0;
            ace_dragging_canCarry = 0;
            ace_dragging_canDrag = 0;
            ace_cargo_hasCargo = 0;
            ace_cargo_space = 0;

            class EventHandlers : EventHandlers
            {
                init="(_this select 0) enableRopeAttach false;";
            };
        };

        class B_Slingload_01_Repair_F : Slingload_01_Base_F
        {
            class EventHandlers;
        };
        class 4thmd_s_static_kpl : B_Slingload_01_Repair_F
        {
            displayName = "Logistics Point";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            ace_cargo_size = 1000;
            ace_repair_canRepair = 0;
            //ace_rearm_defaultSupply = 0;
            ace_cargo_canLoad = 0;
            ace_dragging_canCarry = 0;
            ace_dragging_canDrag = 0;
            ace_cargo_hasCargo = 0;
            ace_cargo_space = 0;

            class EventHandlers : EventHandlers
            {
                init="(_this select 0) enableRopeAttach false;";
            };
        };

        class Land_ClutterCutter_small_F;
        class 4thmd_s_ccs_kpl : Land_ClutterCutter_small_F
        {
            scope = DEBUG;
            scopeCurator = DEBUG;

            displayName = "Logistics Spawnpoint";

            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
        };
        

        class ACE_RepairItem_Base;
        class ACE_Track : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 0.75;
        };

        class ACE_Wheel : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 0.75;
        };
};

class XtdGearModels
{
    class CamoBase;

    class CfgWeapons
    {
        class 4thmd_w_ld_lhrM
        {
            label = "[ALPHA] MAAWS DMAT";
            options[]=
            {
                "4thmd_type",
                "4thmd_ammo",
                "4thmd_color"
            };

            class 4thmd_type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Sight Version (Mod)";
                values[]=
				{
					"4thmd_t_mod0",
                    "4thmd_t_mod1"
				};

                class 4thmd_t_mod0
                {
                    label = "Mod 0";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };

                class 4thmd_t_mod1
                {
                    label = "Mod 1";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };
            };

            class 4thmd_ammo
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Munition Type";
                values[]=
				{
					"4thmd_a_heat",
                    "4thmd_a_hedp",
                    "4thmd_a_asm5",
                    "4thmd_a_atgm"
				};

                class 4thmd_a_heat
                {
                    label = "HEAT";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };

                class 4thmd_a_hedp
                {
                    label = "HEDP";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };

                class 4thmd_a_asm5
                {
                    label = "ASM";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };

                class 4thmd_a_atgm
                {
                    label = "GMM-MT";
                    image = "darkmod_4thmd_core\data\icon_z_standard.paa";
                };
            };

            class 4thmd_color : CamoBase
            {
                alwaysSelectable = 1;
                changeingame = 0;
                changedelay = 0;
                label = "Camouflage";
                values[] =
                {
                    "GRN",
                    "OLI",
                    "SND"
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //Alpha's Disposiable MAAWS
            //HEAT 75
                class 4thmd_w_ld_lhrM1_heat_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM1_heat_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM1_heat_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "SND";
                };

                class 4thmd_w_ld_lhrM0_heat_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM0_heat_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM0_heat_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_heat";
                    4thmd_color = "SND";
                };
    };
};