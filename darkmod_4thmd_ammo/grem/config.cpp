class CfgPatches
{
    class darkmod_4thmd_ammo_grem
	{
        weapons[] = 
        {
            "greenmag_ammo_9x19_basic_15Rnd",
            "greenmag_ammo_556x45_basic_100Rnd",
            "greenmag_ammo_762x51_basic_100Rnd"
        };
        units[] = {};
        magazines[] = 
        {
            "4thmd_m_762x51_dm50_drum_sby_t3_rb",
            "4thmd_m_762x51_dm50_drum_sby_t_rb",
            "4thmd_m_762x51_dm50_drum_sby_nt_rb",
            "4thmd_m_762x51_dm50_drum_sbir_t3_rb",
            "4thmd_m_762x51_dm50_drum_sbir_t_rb",
            "4thmd_m_762x51_dm50_drum_apy_t6_rb",
            "4thmd_m_762x51_dm50_drum_apy_nt_rb",
            "4thmd_m_762x51_dm50_drum_lry_t6_rb",
            "4thmd_m_762x51_dm50_drum_lry_nt_rb",
            "4thmd_m_762x51_dm100_gbox_sby_t3_rb",
            "4thmd_m_762x51_dm100_gbox_sby_t_rb",
            "4thmd_m_762x51_dm100_gbox_sby_nt_rb",
            "4thmd_m_762x51_dm100_gbox_sbir_t3_rb",
            "4thmd_m_762x51_dm100_gbox_sbir_t_rb",
            "4thmd_m_762x51_dm200_gbox_sby_t3_rb",
            "4thmd_m_762x51_dm200_gbox_sby_t_rb",
            "4thmd_m_762x51_dm200_gbox_sby_nt_rb",
            "4thmd_m_762x51_dm200_gbox_sbir_t3_rb",
            "4thmd_m_762x51_dm200_gbox_sbir_t_rb"
        };
        requiredAddons[] = 
        {   
            "hlcweapons_core",
            "hlcweapons_MG3s",
            "greenmag_main",
            "UK3CB_BAF_Weapons"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
    };
};


/*                      1     | 10    | 15    | 20    | 30    | 50    |  60    |100    |
    9x19mm--------------------|-------|-------|-------|-------|-------|--------|-------|
        30x :  8        0.26~ | 2     | 3     | 4     | 6     |10     | 12     |20     |
    5.56x45mm-----------------|-------|-------|-------|-------|-------|--------|-------|
        30x : 10        0.33~ | 2.5   | 3.75  | 5     | 7.5   |12.5   | 15     |25     |
    7.62x35mm-----------------|-------|-------|-------|-------|-------|--------|-------|
        30x : 12        0.4   | 3     | 4.5   | 6     | 9     |15     | 18     |30     |
    7.62x51mm-----------------|-------|-------|-------|-------|-------|--------|-------|
        20x : 12        0.6   | 4.5   | 6.75  | 9     |13.5   |22.5   | 27     |45     |
    8.58x70mm-----------------|-------|-------|-------|-------|-------|--------|-------|
        10x : 14        1.4   |10.5   |15.75  |21     |31.5   |52.5   | 63     |       |
    12.7x99mm-----------------|-------|-------|-------|-------|-------|--------|-------|
         5x : 15        3     |22.5   |33.75  |45     |67.5   |       |135     |       |
        10x : 32
    7.62x67mmB
        10x : 12    (1.2)
*/

class CfgWeapons
{
    class greenmag_core;
    class greenmag_core_1Rnd : greenmag_core
    {
        class ItemInfo;
    };
    class greenmag_core_box;
    class greenmag_core_10Rnd : greenmag_core_box
    {
        class ItemInfo;
    };
    class greenmag_core_20Rnd : greenmag_core_box
    {
        class ItemInfo;
    };
    class greenmag_core_30Rnd : greenmag_core_box
    {
        class ItemInfo;
    };
    class greenmag_core_50Rnd : greenmag_core_box
    {
        class ItemInfo;
    };
    class greenmag_core_60Rnd : greenmag_core_box
    {
        class ItemInfo;
    };
    class greenmag_CoreBelt_556x45_basic;
    class greenmag_CoreBelt_762x51_basic;
    class CBA_MiscItem_ItemInfo;

// 9x19mm Boxes / 9.01x19mm Boxes / 901x19
    class greenmag_ammo_9x19_basic_1Rnd : greenmag_core_1Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 0.16;
        };
    };

    class greenmag_ammo_9x19_basic_15Rnd : greenmag_core_10Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "9x19mm - 15 Rnd";
        greenmag_bullets = 15;
        greenmag_ammotype = "greenmag_ammo_9x19_basic_1Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 3;
        };
    };

    class greenmag_ammo_9x19_basic_30Rnd : greenmag_core_30Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 6;
        };
    };

    class greenmag_ammo_9x19_basic_60Rnd : greenmag_core_60Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 12;
        };
    };

// 5.56x45mm Boxes / 556x45
    class greenmag_ammo_556x45_basic_1Rnd : greenmag_core_1Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 0.2;
        };
    };

    class greenmag_ammo_556x45_basic_30Rnd : greenmag_core_30Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 7.5;
        };
    };

    class greenmag_ammo_556x45_basic_50Rnd : greenmag_core_50Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        class ItemInfo : ItemInfo
        {
            mass = 12.5;
        };
    };

    class greenmag_ammo_556x45_basic_60Rnd : greenmag_core_60Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 15;
        };
    };

    class greenmag_ammo_556x45_basic_100Rnd : greenmag_core_60Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "5.56x45mm - 100 Rnd";
        greenmag_bullets = 100;
        greenmag_ammotype = "greenmag_ammo_556x45_basic_1Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 25;
        };
    };

// 7.62x35mm Boxes / 762x35 / .300 AAC Black Out / 300BO
    class greenmag_ammo_300BO_basic_1Rnd : greenmag_core_1Rnd
    {
        displayName = ".300AAC Blackout - 1Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 0.24;
        };
    };

    class greenmag_ammo_300BO_basic_30Rnd : greenmag_core_30Rnd
    {
        displayName = ".300AAC Blackout - 30Rnd";
        class ItemInfo : ItemInfo
        {
            mass = 9;
        };
    };

    class greenmag_ammo_300BO_basic_50Rnd : greenmag_core_50Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = ".300AAC Blackout - 50Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 15;
        };
    };

    class greenmag_ammo_300BO_basic_60Rnd : greenmag_core_60Rnd
    {
        displayName = ".300AAC Blackout - 60Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 18;
        };
    };

// 7.62x51mm Boxes / 762x51
    class greenmag_ammo_762x51_basic_1Rnd : greenmag_core_1Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 0.36;
        };
    };

    class greenmag_ammo_762x51_basic_20Rnd : greenmag_core_20Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        class ItemInfo : ItemInfo
        {
            mass = 9;
        };
    };

    class greenmag_ammo_762x51_basic_30Rnd : greenmag_core_30Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 13.5;
        };
    };

    class greenmag_ammo_762x51_basic_50Rnd : greenmag_core_50Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        class ItemInfo : ItemInfo
        {
            mass = 22.5;
        };
    };

    class greenmag_ammo_762x51_basic_60Rnd : greenmag_core_60Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 27;
        };
    };

    class greenmag_ammo_762x51_basic_100Rnd : greenmag_core_60Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "7.62x51mm - 100 Rnd";
        greenmag_bullets = 100;
        greenmag_ammotype = "greenmag_ammo_762x51_basic_1Rnd";

        class ItemInfo : ItemInfo
        {
            mass = 45;
        };
    };

// 8.58x70mm Boxes / 858x70 / .338 Lapua Magnum / 338LM
    class greenmag_ammo_338_basic_1Rnd : greenmag_core_1Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 0.84;
        };
    };

    class greenmag_ammo_338_basic_10Rnd : greenmag_core_10Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        class ItemInfo : ItemInfo
        {
            mass = 10.5;
        };
    };

    class greenmag_ammo_338_basic_30Rnd : greenmag_core_30Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 31.5;
        };
    };

    class greenmag_ammo_338_basic_60Rnd : greenmag_core_60Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 63;
        };
    };

// 12.7x99mm Boxes / 127x99 / 50BMG
    class greenmag_ammo_127x99_basic_1Rnd : greenmag_core_1Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 1.8;
        };
    };

    class greenmag_ammo_127x99_basic_10Rnd : greenmag_core_10Rnd
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        class ItemInfo : ItemInfo
        {
            mass = 22.5;
        };
    };

    class greenmag_ammo_127x99_basic_30Rnd : greenmag_core_30Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 67.5;
        };
    };

    class greenmag_ammo_127x99_basic_60Rnd : greenmag_core_60Rnd
    {
        class ItemInfo : ItemInfo
        {
            mass = 135;
        };
    };

// Beltlinked Ammunition
    #include "556x45_beltlinked.hpp"
    #include "762x51_beltlinked.hpp"
};

class CfgMagazines
{
    //7.62x51mm 50rnd DM6-Belt(RB)
        class hlc_50Rnd_762x51_B_MG3;
        class 4thmd_m_762x51_dm50_drum_sby_t3_rb : hlc_50Rnd_762x51_B_MG3
        {
            displayName = "7.62mm 50rnd DM6(RB) EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 5 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 25;
            lastRoundsTracer = 5;
            tracersEvery = 3;
            count = 50;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_dm50_drum_sby_t_rb : 4thmd_m_762x51_dm50_drum_sby_t3_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm50_drum_sby_nt_rb : 4thmd_m_762x51_dm50_drum_sby_t3_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm50_drum_sbir_t3_rb : 4thmd_m_762x51_dm50_drum_sby_t3_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) EPR-IR(T3E5)";
            displayNameShort = "EPR-IR T3E5";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 5 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_ir";
        };

        class 4thmd_m_762x51_dm50_drum_sbir_t_rb : 4thmd_m_762x51_dm50_drum_sbir_t3_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M62A1B Infra-Red Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm50_drum_apy_t6_rb : 4thmd_m_762x51_dm50_drum_sby_t3_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) AP-Y(T6E5)";
            displayNameShort = "AP-Y T6E5";
            descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_ap_y";
            lastRoundsTracer = 5;
            tracersEvery = 6;

            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_dm50_drum_apy_nt_rb : 4thmd_m_762x51_dm50_drum_apy_t6_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M61 Armor Piercing Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm50_drum_lry_t6_rb : 4thmd_m_762x51_dm50_drum_apy_t6_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) LRR-Y(T6E5)";
            displayNameShort = "LRR-Y T6E5";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>M62E3 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_lr_y";

            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_dm50_drum_lry_nt_rb : 4thmd_m_762x51_dm50_drum_lry_t6_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) LRR(NT)";
            displayNameShort = "LRR NT";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm50_drum_lrir_t6_rb : 4thmd_m_762x51_dm50_drum_lry_t6_rb
        {
            displayName = "7.62mm 50rnd DM6(RB) LRR-Y(T6E5)";
            displayNameShort = "LRR-Y T6E5";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>M118 Mod B Infra-Red Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            ammo = "4thmd_a_762x51_lr_ir";
        };

    //7.62x51mm 100rnd DM6-Belt
        class 150Rnd_762x51_Box;
        class 4thmd_m_762x51_dm100_gbox_sby_t3_rb : 150Rnd_762x51_Box
        {
            displayName = "7.62mm 100rnd DM6(RB) EPR-Y(T3E10)";
            displayNameShort = "EPR-Y T3E10";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 50;
            lastRoundsTracer = 10;
            tracersEvery = 3;
            count = 100;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_dm100_gbox_sby_t_rb : 4thmd_m_762x51_dm100_gbox_sby_t3_rb
        {
            displayName = "7.62mm 100rnd DM6(RB) EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm100_gbox_sby_nt_rb : 4thmd_m_762x51_dm100_gbox_sby_t3_rb
        {
            displayName = "7.62mm 100rnd DM6(RB) EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm100_gbox_sbir_t3_rb : 4thmd_m_762x51_dm100_gbox_sby_t3_rb
        {
            displayName = "7.62mm 100rnd DM6(RB) EPR-IR(T3E10)";
            displayNameShort = "EPR-IR T3E10";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_ir";
        };

        class 4thmd_m_762x51_dm100_gbox_sbir_t_rb : 4thmd_m_762x51_dm100_gbox_sbir_t3_rb
        {
            displayName = "7.62mm 100rnd DM6(RB) EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M62A1B Infra-Red Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm100_gbox_lry_t6_rb : 4thmd_m_762x51_dm100_gbox_sby_t3_rb
        {
            displayName = "7.62mm 100rnd DM6 LRR-Y(T6E10)";
            displayNameShort = "LRR-Y T6E10";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>M118 Mod A Yellow Tracer Rounds<br/>Tracer every 6, 10 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_lr_y";
            tracersEvery = 6;
        };

        class 4thmd_m_762x51_dm100_gbox_lry_nt_rb : 4thmd_m_762x51_dm100_gbox_lry_t6_rb
        {
            displayName = "7.62mm 100rnd DM6 LRR(NT)";
            displayNameShort = "LRR NT";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm100_gbox_lrir_t6_rb : 4thmd_m_762x51_dm100_gbox_lry_t6_rb
        {
            displayName = "7.62mm 100rnd DM6 LRR-Y(T6E10)";
            displayNameShort = "LRR-Y T6E10";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>M118 Mod B Infra-Red Tracer Rounds<br/>Tracer every 6, 10 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_lr_ir";
        };

    //7.62x51mm 200rnd DM6-Belt
        class 4thmd_m_762x51_dm200_gbox_sby_t3_rb : 150Rnd_762x51_Box
        {
            displayName = "7.62mm 200rnd DM6(RB) EPR-Y(T3E20)";
            displayNameShort = "EPR-Y T3E20";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 20 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\data\gear_magazine_762_box_ca.paa";
            model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\uk3cb_L7_ammobox.p3d";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 100;
            lastRoundsTracer = 20;
            tracersEvery = 3;
            count = 200;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_dm200_gbox_sby_t_rb : 4thmd_m_762x51_dm200_gbox_sby_t3_rb
        {
            displayName = "7.62mm 200rnd DM6(RB) EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm200_gbox_sby_nt_rb : 4thmd_m_762x51_dm200_gbox_sby_t3_rb
        {
            displayName = "7.62mm 200rnd DM6(RB) EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };
        
        class 4thmd_m_762x51_dm200_gbox_sbir_t3_rb : 4thmd_m_762x51_dm200_gbox_sby_t3_rb
        {
            displayName = "7.62mm 200rnd DM6(RB) EPR-IR(T3E20)";
            displayNameShort = "EPR-IR T3E20";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 20 End Tracers<br/>Non-Disentegrating, Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_ir";
        };

        class 4thmd_m_762x51_dm200_gbox_sbir_t_rb : 4thmd_m_762x51_dm200_gbox_sbir_t3_rb
        {
            displayName = "7.62mm 200rnd DM6(RB) EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M62A1B Infra-Red Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };
};

class CfgMagazineWells
{
    class CBA_762x51_MG3
    {
        4thmd_mags_rb[] =
        {
            "4thmd_m_762x51_dm50_drum_sby_t3_rb",
            "4thmd_m_762x51_dm50_drum_sby_t_rb",
            "4thmd_m_762x51_dm50_drum_sby_nt_rb",
            "4thmd_m_762x51_dm50_drum_sbir_t3_rb",
            "4thmd_m_762x51_dm50_drum_sbir_t_rb",
            "4thmd_m_762x51_dm50_drum_apy_t6_rb",
            "4thmd_m_762x51_dm50_drum_apy_nt_rb",
            "4thmd_m_762x51_dm50_drum_lry_t6_rb",
            "4thmd_m_762x51_dm50_drum_lry_nt_rb",
            "4thmd_m_762x51_dm50_drum_lrir_t6_rb",
            "4thmd_m_762x51_dm100_gbox_sby_t3_rb",
            "4thmd_m_762x51_dm100_gbox_sby_t_rb",
            "4thmd_m_762x51_dm100_gbox_sby_nt_rb",
            "4thmd_m_762x51_dm100_gbox_sbir_t3_rb",
            "4thmd_m_762x51_dm100_gbox_sbir_t_rb",
            "4thmd_m_762x51_dm100_gbox_lry_t6_rb",
            "4thmd_m_762x51_dm100_gbox_lry_nt_rb",
            "4thmd_m_762x51_dm100_gbox_lrir_t6_rb",
            "4thmd_m_762x51_dm200_gbox_sby_t3_rb",
            "4thmd_m_762x51_dm200_gbox_sby_t_rb",
            "4thmd_m_762x51_dm200_gbox_sby_nt_rb",
            "4thmd_m_762x51_dm200_gbox_sbir_t3_rb",
            "4thmd_m_762x51_dm200_gbox_sbir_t_rb"
        };
    };
};