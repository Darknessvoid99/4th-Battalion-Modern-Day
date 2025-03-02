/*      //Base classes
    class rhs_mag_30Rnd_556x45_M855_PMAG_Tan;
    class hlc_20Rnd_762x51_B_SCARH_Tan;
*/

/*      //CfgMagazines = 
    "4thmd_m_556x45_m30_pmtan_sby_t3",
    "4thmd_m_556x45_m30_pmtan_sby_nt",
    "4thmd_m_556x45_m30_pmtan_sby_t",
    "4thmd_m_556x45_m30_pmtan_sbir_t3",
    "4thmd_m_556x45_m30_pmtan_sbir_t",
    "4thmd_m_556x45_m30_pmtan_apy_t5",
    "4thmd_m_556x45_m30_pmtan_apy_nt",
    "4thmd_m_556x45_m30_pmtan_lry_nt",

    "4thmd_m_762x35_m30_pmtan_sby_t3",
    "4thmd_m_762x35_m30_pmtan_sby_nt",
    "4thmd_m_762x35_m30_pmtan_sby_t",
    "4thmd_m_762x35_m30_pmtan_sbir_t3",
    "4thmd_m_762x35_m30_pmtan_sbir_t",
    "4thmd_m_762x35_m30_pmtan_suby_t3",
    "4thmd_m_762x35_m30_pmtan_suby_nt",
    "4thmd_m_762x35_m30_pmtan_suby_t",
    "4thmd_m_762x35_m30_pmtan_subir_t3",
    "4thmd_m_762x35_m30_pmtan_subir_t",

    "4thmd_m_762x51_20scr_pmtan_sby_t3",
    "4thmd_m_762x51_20scr_pmtan_sby_nt",
    "4thmd_m_762x51_20scr_pmtan_sby_t",
    "4thmd_m_762x51_20scr_pmtan_sbir_t3",
    "4thmd_m_762x51_20scr_pmtan_sbir_t",
    "4thmd_m_762x51_20scr_pmtan_apy_t4",
    "4thmd_m_762x51_20scr_pmtan_apy_nt",
    "4thmd_m_762x51_20scr_pmtan_lry_nt",
    "4thmd_m_762x51_20scr_pmtan_slr_nt",
*/
    
    //5.56x45mm 30rnd Magazines
        class 4thmd_m_556x45_m30_pmtan_sby_t3 : rhs_mag_30Rnd_556x45_M855_PMAG_Tan
        {
            displayName = "5.56mm 30rnd EPR-Y(T3E3)";
            displayNameShort = "EPR-Y T3E3";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_556x45_epr_y";
            mass = 10;
            count = 30;
            lastRoundsTracer = 3;
            tracersEvery = 3;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_556x45_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_556x45_basic_1Rnd";
        };

        class 4thmd_m_556x45_m30_pmtan_sby_nt : 4thmd_m_556x45_m30_pmtan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR";
            displayNameShort = "EPR NT";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_556x45_m30_pmtan_sby_t : 4thmd_m_556x45_m30_pmtan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m30_pmtan_sbir_t3 : 4thmd_m_556x45_m30_pmtan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR-IR(T3E3)";
            displayNameShort = "EPR-IR T3E3";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_556x45_epr_ir";
        };

        class 4thmd_m_556x45_m30_pmtan_sbir_t : 4thmd_m_556x45_m30_pmtan_sbir_t3
        {
            displayName = "5.56mm 30rnd EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M856A1B Infra-Red Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m30_pmtan_apy_t5 : 4thmd_m_556x45_m30_pmtan_sby_t3
        {
            displayName = "5.56mm 30rnd AP-Y(T5E3)";
            displayNameShort = "AP-Y T5E3";
            descriptionShort = "M995 Armor-Piercing Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "4thmd_a_556x45_ap_y";
            tracersEvery = 5;
        };

        class 4thmd_m_556x45_m30_pmtan_apy_nt : 4thmd_m_556x45_m30_pmtan_apy_t5
        {
            displayName = "5.56mm 30rnd AP";
            displayNameShort = "AP NT";
            descriptionShort = "M995 Armor-Piercing Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_556x45_m30_pmtan_lry_nt : 4thmd_m_556x45_m30_pmtan_sby_t3
        {
            displayName = "5.56mm 30rnd SBLR(Mk262 77gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk262 77gr Special Ballistic Long Range Rounds<br/>No Tracers";
            ammo = "4thmd_a_556x45_sblr_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //7.62x35mm 30rnd Magazines / .300AAC / .300BO (Black Out)
        class 4thmd_m_762x35_m30_pmtan_sby_t3 : rhs_mag_30Rnd_556x45_M855_PMAG_Tan
        {
            displayName = ".300AAC 30rnd Ball-Y(T3E3)";
            displayNameShort = "Ball-Y T3E3";
            descriptionShort = "M855/M80 Old Stock Conversion Ball Rounds<br/>M856/M62 Old Stock Conversion Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_762x35_ball_y";
            mass = 12;
            count = 30;
            lastRoundsTracer = 3;
            tracersEvery = 3;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_300BO_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_300BO_basic_1Rnd";
        };

        class 4thmd_m_762x35_m30_pmtan_sby_nt : 4thmd_m_762x35_m30_pmtan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball";
            displayNameShort = "Ball NT";
            descriptionShort = "M855/M80 Old Stock Conversion Ball Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x35_m30_pmtan_sby_t : 4thmd_m_762x35_m30_pmtan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball-Y(T)";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M856/M62 Old Stock Conversion Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x35_m30_pmtan_sbir_t3 : 4thmd_m_762x35_m30_pmtan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball-IR(T3E3)";
            displayNameShort = "Ball-IR T3E3";
            descriptionShort = "M855/M80 Old Stock Conversion Ball Rounds<br/>M856/M62 Mod-B OSC Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_762x35_ball_ir";
        };

        class 4thmd_m_762x35_m30_pmtan_sbir_t : 4thmd_m_762x35_m30_pmtan_sbir_t3
        {
            displayName = ".300AAC 30rnd Ball-IR(T)";
            displayNameShort = "Ball-IR T";
            descriptionShort = "M856/M62 Mod-B OSC Infra-Red Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x35_m30_pmtan_suby_t3 : 4thmd_m_762x35_m30_pmtan_sby_t3
        {
            displayName = ".300AAC 30rnd SUB-Y(T3E3)";
            displayNameShort = "SUB-Y T3E3";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>SMK220/T Subsonic JHP Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "HLC_300Blackout_RNBT";
            tracersEvery = 3;
            lastRoundsTracer = 3;
        };

        class 4thmd_m_762x35_m30_pmtan_suby_nt : 4thmd_m_762x35_m30_pmtan_suby_t3
        {
            displayName = ".300AAC 30rnd Subsonic";
            displayNameShort = "SUB NT";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 0;
            lastRoundsTracer = 0;
        };

        class 4thmd_m_762x35_m30_pmtan_suby_t : 4thmd_m_762x35_m30_pmtan_suby_t3
        {
            displayName = ".300AAC 30rnd SUB-Y(T)";
            displayNameShort = "SUB-Y T";
            descriptionShort = "SMK220/T Subsonic JHP Tracer Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 1;
            lastRoundsTracer = 1;
        };

        class 4thmd_m_762x35_m30_pmtan_subir_t3 : 4thmd_m_762x35_m30_pmtan_suby_t3
        {
            displayName = ".300AAC 30rnd SUB-IR(T3E3)";
            displayNameShort = "SUB-IR T3E3";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>SMK220/TB SUB-JHP Infra-Red Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "HLC_300Blackout_SMK";
        };

        class 4thmd_m_762x35_m30_pmtan_subir_t : 4thmd_m_762x35_m30_pmtan_subir_t3
        {
            displayName = ".300AAC 30rnd SUB-IR(T)";
            displayNameShort = "SUB-IR T";
            descriptionShort = "SMK220/TB SUB-JHP Infra-Red Tracer Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 1;
            lastRoundsTracer = 1;
        };

    //7.62x51mm 20rnd
        class 4thmd_m_762x51_20scr_pmtan_sby_t3 : hlc_20Rnd_762x51_B_SCARH_Tan
        {
            displayName = "7.62mm 20rnd EPR-Y(T3E3)";
            displayNameShort = "EPR-Y T3E3";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 12;
            lastRoundsTracer = 3;
            tracersEvery = 3;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_762x51_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_762x51_basic_1Rnd";
        };

        class 4thmd_m_762x51_20scr_pmtan_sby_nt : 4thmd_m_762x51_20scr_pmtan_sby_t3
        {
            displayName = "7.62mm 20rnd EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_pmtan_sby_t : 4thmd_m_762x51_20scr_pmtan_sby_t3
        {
            displayName = "7.62mm 20rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_20scr_pmtan_sbir_t3 : 4thmd_m_762x51_20scr_pmtan_sby_t3
        {
            displayName = "7.62mm 20rnd EPR-IR(T3E3)";
            displayNameShort = "EPR-IR T3E3";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_762x51_epr_ir";
        };

        class 4thmd_m_762x51_20scr_pmtan_sbir_t : 4thmd_m_762x51_20scr_pmtan_sbir_t3
        {
            displayName = "7.62mm 20rnd EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M62A1B Infra-Red Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_20scr_pmtan_apy_t4 : 4thmd_m_762x51_20scr_pmtan_sby_t3
        {
            displayName = "7.62mm 20rnd AP-Y(T4E2)";
            displayNameShort = "AP-Y T4E2";
            descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 4, 2 End Tracers";

            ammo = "4thmd_a_762x51_ap_y";
            lastRoundsTracer = 2;
            tracersEvery = 4;
        };

        class 4thmd_m_762x51_20scr_pmtan_apy_nt : 4thmd_m_762x51_20scr_pmtan_apy_t4
        {
            displayName = "7.62mm 20rnd AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M61 Armor Piercing Rounds<br/>No Tracers";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_pmtan_lry_nt : 4thmd_m_762x51_20scr_pmtan_sby_t3
        {
            displayName = "7.62mm 20rnd LRR(M118 175gr)";
            displayNameShort = "LRR NT";
            descriptionShort = "M118 175gr Long Range Preformance Rounds<br/>No Tracers";

            ammo = "4thmd_a_762x51_lr_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_pmtan_slr_nt : 4thmd_m_762x51_20scr_pmtan_lry_nt
        {
            displayName = "7.62mm 20rnd SBLR(Mk316 175gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk316 175gr Special Ballistics Long Range Rounds<br/>No Tracers";

            ammo = "ACE_762x51_Ball_Mk316_Mod_0";
        };