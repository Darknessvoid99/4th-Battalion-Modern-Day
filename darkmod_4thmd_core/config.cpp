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
                "A3_Weapons_F_Tank_Launchers_MRAWS"
            };

        author = "Darknessvoid99";
    };

    //skipWhenMissingDependencies = 1;
};

#define DEBUG 1 // 1 = OFF, 2 = ON

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