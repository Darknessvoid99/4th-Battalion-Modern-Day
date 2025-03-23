class CfgPatches
{
    class darkmod_4thmd_core_maa
	{
        weapons[] = 
        {
            //"greenmag_ammo_9x19_basic_15Rnd"
        };
        units[] = {};
        magazines[] = 
        {
            //"4thmd_m_762x51_dm50_drum_sby_t3_rb"
        };
        requiredAddons[] = 
        {   
            "MAAMod"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
    };
};

class CfgMagazines
{
    // Alpha's Disposiable MAAWS
        class MAA_MAAWS_HEDP502;
        class MAA_MAAWS_ASM509;
        class MAA_MAAWS_GMM_MT;

        class 4thot_m_lhrM_d_hedp : MAA_MAAWS_HEDP502
        {
            mass = 0.1; //
        };

        class 4thot_m_lhrM_d_asm5 : MAA_MAAWS_ASM509
        {
            mass = 0.1;
        };

        class 4thot_m_lhrM_d_atgm : MAA_MAAWS_GMM_MT
        {
            mass = 0.1;
        };
};

class CfgWeapons
{
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

        //HEDP 502
            // Mod 1
                class 4thmd_w_ld_lhrM1_hedp_od : launch_MRAWS_olive_F
                {
                    displayName = "[ALPHA] MAAWS Mod 1 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_hedp"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 185.4;
                    };
                };
                class 4thmd_w_ld_lhrM1_hedp_od_loaded : 4thmd_w_ld_lhrM1_hedp_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 185.5;
                    };
                };
                class 4thmd_w_ld_lhrM1_hedp_od_used : 4thmd_w_ld_lhrM1_hedp_od
                {
                    displayName = "MAAWS Mod 1 Disposable (Empty)";
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_sd : 4thmd_w_ld_lhrM1_hedp_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_sd_loaded : 4thmd_w_ld_lhrM1_hedp_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_sd_used : 4thmd_w_ld_lhrM1_hedp_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_dg : 4thmd_w_ld_lhrM1_hedp_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_dg_loaded : 4thmd_w_ld_lhrM1_hedp_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_hedp_dg_used : 4thmd_w_ld_lhrM1_hedp_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_hedp_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };
            // Mod 0
                class 4thmd_w_ld_lhrM0_hedp_od : launch_MRAWS_olive_rail_F
                {
                    displayName = "[ALPHA] MAAWS Mod 0 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_hedp"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 185.4;
                    };
                };
                class 4thmd_w_ld_lhrM0_hedp_od_loaded : 4thmd_w_ld_lhrM0_hedp_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 185.5;
                    };
                };
                class 4thmd_w_ld_lhrM0_hedp_od_used : 4thmd_w_ld_lhrM0_hedp_od
                {
                    displayName = "MAAWS Mod 0 Disposable (Empty)";
                    //baseWeapon = "4thmd_w_ld_lhrM0_hedp_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_sd : 4thmd_w_ld_lhrM0_hedp_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_sd_loaded : 4thmd_w_ld_lhrM0_hedp_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_sd_used : 4thmd_w_ld_lhrM0_hedp_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_dg : 4thmd_w_ld_lhrM0_hedp_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_dg_loaded : 4thmd_w_ld_lhrM0_hedp_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_hedp_dg_used : 4thmd_w_ld_lhrM0_hedp_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_hedp_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

        //ASM 509
            // Mod 1
                class 4thmd_w_ld_lhrM1_asm5_od : launch_MRAWS_olive_F
                {
                    displayName = "[ALPHA] MAAWS Mod 1 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_asm5"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 195.4;
                    };
                };
                class 4thmd_w_ld_lhrM1_asm5_od_loaded : 4thmd_w_ld_lhrM1_asm5_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 195.5;
                    };
                };
                class 4thmd_w_ld_lhrM1_asm5_od_used : 4thmd_w_ld_lhrM1_asm5_od
                {
                    displayName = "MAAWS Mod 1 Disposable (Empty)";
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_sd : 4thmd_w_ld_lhrM1_asm5_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_sd_loaded : 4thmd_w_ld_lhrM1_asm5_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_sd_used : 4thmd_w_ld_lhrM1_asm5_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_dg : 4thmd_w_ld_lhrM1_asm5_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_dg_loaded : 4thmd_w_ld_lhrM1_asm5_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_asm5_dg_used : 4thmd_w_ld_lhrM1_asm5_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_asm5_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };
            // Mod 0
                class 4thmd_w_ld_lhrM0_asm5_od : launch_MRAWS_olive_rail_F
                {
                    displayName = "[ALPHA] MAAWS Mod 0 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_asm5"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 195.4;
                    };
                };
                class 4thmd_w_ld_lhrM0_asm5_od_loaded : 4thmd_w_ld_lhrM0_asm5_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 195.5;
                    };
                };
                class 4thmd_w_ld_lhrM0_asm5_od_used : 4thmd_w_ld_lhrM0_asm5_od
                {
                    displayName = "MAAWS Mod 0 Disposable (Empty)";
                    //baseWeapon = "4thmd_w_ld_lhrM0_asm5_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_sd : 4thmd_w_ld_lhrM0_asm5_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_sd_loaded : 4thmd_w_ld_lhrM0_asm5_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_sd_used : 4thmd_w_ld_lhrM0_asm5_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_dg : 4thmd_w_ld_lhrM0_asm5_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_dg_loaded : 4thmd_w_ld_lhrM0_asm5_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_asm5_dg_used : 4thmd_w_ld_lhrM0_asm5_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_asm5_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

        //GMM MT 756
            // Mod 1
                class 4thmd_w_ld_lhrM1_atgm_od : launch_MRAWS_olive_F
                {
                    displayName = "[ALPHA] MAAWS Mod 1 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_atgm"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 245.4;
                    };
                };
                class 4thmd_w_ld_lhrM1_atgm_od_loaded : 4thmd_w_ld_lhrM1_atgm_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 245.5;
                    };
                };
                class 4thmd_w_ld_lhrM1_atgm_od_used : 4thmd_w_ld_lhrM1_atgm_od
                {
                    displayName = "MAAWS Mod 1 Disposable (Empty)";
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_sd : 4thmd_w_ld_lhrM1_atgm_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_sd_loaded : 4thmd_w_ld_lhrM1_atgm_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_sd_used : 4thmd_w_ld_lhrM1_atgm_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_dg : 4thmd_w_ld_lhrM1_atgm_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_dg_loaded : 4thmd_w_ld_lhrM1_atgm_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM1_atgm_dg_used : 4thmd_w_ld_lhrM1_atgm_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM1_atgm_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
                    };
                };
            // Mod 0
                class 4thmd_w_ld_lhrM0_atgm_od : launch_MRAWS_olive_rail_F
                {
                    displayName = "[ALPHA] MAAWS Mod 0 Disposable";
                    //descriptionshort = "Surface-to-Surface Rocket<br/>Light Anti-Vehicle";
                    //author = "Darknessvoid99";

                    scope = 1;
                    scopeArsenal = 1;
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_od_loaded";

                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_od1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };

                    magazines[] = {"4thot_m_lhrM_d_atgm"};
                    magazineWell[] = {};
                    magazineReloadTime = 0.1;
                    reloadMagazineSound[] = {"",1,1};

                    class EventHandlers
                    {
                        fired = "_this call CBA_fnc_firedDisposable";
                    };

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 245.4;
                    };
                };
                class 4thmd_w_ld_lhrM0_atgm_od_loaded : 4thmd_w_ld_lhrM0_atgm_od
                {
                    scope = 2;
                    scopeArsenal = 2;
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 245.5;
                    };
                };
                class 4thmd_w_ld_lhrM0_atgm_od_used : 4thmd_w_ld_lhrM0_atgm_od
                {
                    displayName = "MAAWS Mod 0 Disposable (Empty)";
                    //baseWeapon = "4thmd_w_ld_lhrM0_atgm_od_used";
                    magazines[] = {"CBA_FakeLauncherMagazine"};

                    class WeaponSlotsInfo : WeaponSlotsInfo
                    {
                        mass = 145.5;
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_sd : 4thmd_w_ld_lhrM0_atgm_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_sd_loaded : 4thmd_w_ld_lhrM0_atgm_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_sd_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_sd_used : 4thmd_w_ld_lhrM0_atgm_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_sd_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_sd1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_dg : 4thmd_w_ld_lhrM0_atgm_od
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_dg_loaded : 4thmd_w_ld_lhrM0_atgm_od_loaded
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_dg_loaded";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };

                class 4thmd_w_ld_lhrM0_atgm_dg_used : 4thmd_w_ld_lhrM0_atgm_od_used
                {
                    baseWeapon = "4thmd_w_ld_lhrM0_atgm_dg_used";
                    hiddenSelectionsTextures[] = 
                    {
                        "darkmod_4thmd_core\data\lhrM\lhrM_alpha_dg1.paa",
                        "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
                    };
                };
};

class CBA_DisposableLaunchers
{
	4thmd_w_ld_lhrM1_hedp_od[]=
	{
		"4thmd_w_ld_lhrM1_hedp_od_loaded",
		"4thmd_w_ld_lhrM1_hedp_od_used"
	};

    4thmd_w_ld_lhrM1_hedp_sd[]=
	{
		"4thmd_w_ld_lhrM1_hedp_sd_loaded",
		"4thmd_w_ld_lhrM1_hedp_sd_used"
	};

    4thmd_w_ld_lhrM1_hedp_dg[]=
	{
		"4thmd_w_ld_lhrM1_hedp_dg_loaded",
		"4thmd_w_ld_lhrM1_hedp_dg_used"
	};

    4thmd_w_ld_lhrM0_hedp_od[]=
	{
		"4thmd_w_ld_lhrM0_hedp_od_loaded",
		"4thmd_w_ld_lhrM0_hedp_od_used"
	};

    4thmd_w_ld_lhrM0_hedp_sd[]=
	{
		"4thmd_w_ld_lhrM0_hedp_sd_loaded",
		"4thmd_w_ld_lhrM0_hedp_sd_used"
	};

    4thmd_w_ld_lhrM0_hedp_dg[]=
	{
		"4thmd_w_ld_lhrM0_hedp_dg_loaded",
		"4thmd_w_ld_lhrM0_hedp_dg_used"
	};

    4thmd_w_ld_lhrM1_asm5_od[]=
	{
		"4thmd_w_ld_lhrM1_asm5_od_loaded",
		"4thmd_w_ld_lhrM1_asm5_od_used"
	};

    4thmd_w_ld_lhrM1_asm5_sd[]=
	{
		"4thmd_w_ld_lhrM1_asm5_sd_loaded",
		"4thmd_w_ld_lhrM1_asm5_sd_used"
	};

    4thmd_w_ld_lhrM1_asm5_dg[]=
	{
		"4thmd_w_ld_lhrM1_asm5_dg_loaded",
		"4thmd_w_ld_lhrM1_asm5_dg_used"
	};

    4thmd_w_ld_lhrM0_asm5_od[]=
	{
		"4thmd_w_ld_lhrM0_asm5_od_loaded",
		"4thmd_w_ld_lhrM0_asm5_od_used"
	};

    4thmd_w_ld_lhrM0_asm5_sd[]=
	{
		"4thmd_w_ld_lhrM0_asm5_sd_loaded",
		"4thmd_w_ld_lhrM0_asm5_sd_used"
	};

    4thmd_w_ld_lhrM0_asm5_dg[]=
	{
		"4thmd_w_ld_lhrM0_asm5_dg_loaded",
		"4thmd_w_ld_lhrM0_asm5_dg_used"
	};

    4thmd_w_ld_lhrM1_atgm_od[]=
	{
		"4thmd_w_ld_lhrM1_atgm_od_loaded",
		"4thmd_w_ld_lhrM1_atgm_od_used"
	};

    4thmd_w_ld_lhrM1_atgm_sd[]=
	{
		"4thmd_w_ld_lhrM1_atgm_sd_loaded",
		"4thmd_w_ld_lhrM1_atgm_sd_used"
	};

    4thmd_w_ld_lhrM1_atgm_dg[]=
	{
		"4thmd_w_ld_lhrM1_atgm_dg_loaded",
		"4thmd_w_ld_lhrM1_atgm_dg_used"
	};

    4thmd_w_ld_lhrM0_atgm_od[]=
	{
		"4thmd_w_ld_lhrM0_atgm_od_loaded",
		"4thmd_w_ld_lhrM0_atgm_od_used"
	};

    4thmd_w_ld_lhrM0_atgm_sd[]=
	{
		"4thmd_w_ld_lhrM0_atgm_sd_loaded",
		"4thmd_w_ld_lhrM0_atgm_sd_used"
	};

    4thmd_w_ld_lhrM0_atgm_dg[]=
	{
		"4thmd_w_ld_lhrM0_atgm_dg_loaded",
		"4thmd_w_ld_lhrM0_atgm_dg_used"
	};
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //Alpha's Disposiable MAAWS
            //HEDP 502
                class 4thmd_w_ld_lhrM1_hedp_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM1_hedp_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM1_hedp_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "SND";
                };
                
                class 4thmd_w_ld_lhrM0_hedp_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM0_hedp_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM0_hedp_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_hedp";
                    4thmd_color = "SND";
                };

            //ASM 509
                class 4thmd_w_ld_lhrM1_asm5_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM1_asm5_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM1_asm5_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "SND";
                };

                class 4thmd_w_ld_lhrM0_asm5_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM0_asm5_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM0_asm5_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_asm5";
                    4thmd_color = "SND";
                };
            
            //GMM MT 756
                class 4thmd_w_ld_lhrM1_atgm_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM1_atgm_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM1_atgm_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod1";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "SND";
                };

                class 4thmd_w_ld_lhrM0_atgm_od_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "GRN";
                };

                class 4thmd_w_ld_lhrM0_atgm_dg_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "OLI";
                };

                class 4thmd_w_ld_lhrM0_atgm_sd_loaded
                {
                    Model = "4thmd_w_ld_lhrM";
                    4thmd_type = "4thmd_t_mod0";
                    4thmd_ammo = "4thmd_a_atgm";
                    4thmd_color = "SND";
                };
    };
};