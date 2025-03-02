/*      //Base classes
    class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull;
    class 150Rnd_556x45_Drum_Sand_Mag_F;
    class 150Rnd_556x45_Drum_Green_Mag_F;
*/

/*      //CfgMagazines = 
    "4thmd_m_556x45_m30_sttan_sby_t3",
    "4thmd_m_556x45_m30_sttan_sby_nt",
    "4thmd_m_556x45_m30_sttan_sby_t",
    "4thmd_m_556x45_m30_sttan_sbir_t3",
    "4thmd_m_556x45_m30_sttan_sbir_t",
    "4thmd_m_556x45_m30_sttan_apy_t5",
    "4thmd_m_556x45_m30_sttan_apy_nt",
    "4thmd_m_556x45_m30_sttan_lry_nt",
    "4thmd_m_556x45_m100_cmtan_sby_t3",
    "4thmd_m_556x45_m100_cmtan_sby_t",
    "4thmd_m_556x45_m100_cmtan_sbir_t3",
    "4thmd_m_556x45_m100_cmtan_sbir_t",
    "4thmd_m_556x45_m100_cmgre_sby_t3",
    "4thmd_m_556x45_m100_cmgre_sby_t",
    "4thmd_m_556x45_m100_cmgre_sbir_t3",
    "4thmd_m_556x45_m100_cmgre_sbir_t",

    "4thmd_m_762x35_m30_sttan_sby_t3",
    "4thmd_m_762x35_m30_sttan_sby_nt",
    "4thmd_m_762x35_m30_sttan_sby_t",
    "4thmd_m_762x35_m30_sttan_sbir_t3",
    "4thmd_m_762x35_m30_sttan_sbir_t",
    "4thmd_m_762x35_m30_sttan_suby_t3",
    "4thmd_m_762x35_m30_sttan_suby_nt",
    "4thmd_m_762x35_m30_sttan_suby_t",
    "4thmd_m_762x35_m30_sttan_subir_t3",
    "4thmd_m_762x35_m30_sttan_subir_t",
*/
    
    //5.56x45mm 30rnd Magazines
        class 4thmd_m_556x45_m30_sttan_sby_t3 : rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull
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

        class 4thmd_m_556x45_m30_sttan_sby_nt : 4thmd_m_556x45_m30_sttan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR";
            displayNameShort = "EPR NT";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_556x45_m30_sttan_sby_t : 4thmd_m_556x45_m30_sttan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m30_sttan_sbir_t3 : 4thmd_m_556x45_m30_sttan_sby_t3
        {
            displayName = "5.56mm 30rnd EPR-IR(T3E3)";
            displayNameShort = "EPR-IR T3E3";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_556x45_epr_ir";
        };

        class 4thmd_m_556x45_m30_sttan_sbir_t : 4thmd_m_556x45_m30_sttan_sbir_t3
        {
            displayName = "5.56mm 30rnd EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M856A1B Infra-Red Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m30_sttan_apy_t5 : 4thmd_m_556x45_m30_sttan_sby_t3
        {
            displayName = "5.56mm 30rnd AP-Y(T5E3)";
            displayNameShort = "AP-Y T5E3";
            descriptionShort = "M995 Armor-Piercing Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "4thmd_a_556x45_ap_y";
            tracersEvery = 5;
        };

        class 4thmd_m_556x45_m30_sttan_apy_nt : 4thmd_m_556x45_m30_sttan_apy_t5
        {
            displayName = "5.56mm 30rnd AP";
            displayNameShort = "AP NT";
            descriptionShort = "M995 Armor-Piercing Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_556x45_m30_sttan_lry_nt : 4thmd_m_556x45_m30_sttan_sby_t3
        {
            displayName = "5.56mm 30rnd SBLR(Mk262 77gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk262 77gr Special Ballistic Long Range Rounds<br/>No Tracers";
            ammo = "4thmd_a_556x45_sblr_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //5.56x45mm 100rnd C-MAG Drum (TAN)
        class 4thmd_m_556x45_m100_cmtan_sby_t3 : 150Rnd_556x45_Drum_Sand_Mag_F
        {
            displayName = "5.56mm 100rnd EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_556x45_epr_y";
            mass = 50;
            count = 100;
            lastRoundsTracer = 5;
            tracersEvery = 3;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_556x45_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_556x45_basic_1Rnd";
        };
        class 4thmd_m_556x45_m100_cmtan_sby_t : 4thmd_m_556x45_m100_cmtan_sby_t3
        {
            displayName = "5.56mm 100rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m100_cmtan_sbir_t3 : 4thmd_m_556x45_m100_cmtan_sby_t3
        {
            displayName = "5.56mm 100rnd EPR-IR(T3E5)";
            displayNameShort = "EPR-IR T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_556x45_epr_ir";
        };
        class 4thmd_m_556x45_m100_cmtan_sbir_t : 4thmd_m_556x45_m100_cmtan_sbir_t3
        {
            displayName = "5.56mm 100rnd EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M856A1B Infra-Red Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

    //5.56x45mm 100rnd C-MAG Drum (Green)
        class 4thmd_m_556x45_m100_cmgre_sby_t3 : 150Rnd_556x45_Drum_Green_Mag_F
        {
            displayName = "5.56mm 100rnd EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_556x45_epr_y";
            mass = 50;
            count = 100;
            lastRoundsTracer = 5;
            tracersEvery = 3;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_556x45_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_556x45_basic_1Rnd";
        };
        class 4thmd_m_556x45_m100_cmgre_sby_t : 4thmd_m_556x45_m100_cmgre_sby_t3
        {
            displayName = "5.56mm 100rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_m100_cmgre_sbir_t3 : 4thmd_m_556x45_m100_cmgre_sby_t3
        {
            displayName = "5.56mm 100rnd EPR-IR(T3E5)";
            displayNameShort = "EPR-IR T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1B Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";

            ammo = "4thmd_a_556x45_epr_ir";
        };
        class 4thmd_m_556x45_m100_cmgre_sbir_t : 4thmd_m_556x45_m100_cmgre_sbir_t3
        {
            displayName = "5.56mm 100rnd EPR-IR(T)";
            displayNameShort = "EPR-IR T";
            descriptionShort = "M856A1B Infra-Red Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

    //7.62x35mm 30rnd Magazines / .300AAC / .300BO (Black Out)
        class 4thmd_m_762x35_m30_sttan_sby_t3 : rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull
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

        class 4thmd_m_762x35_m30_sttan_sby_nt : 4thmd_m_762x35_m30_sttan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball";
            displayNameShort = "Ball NT";
            descriptionShort = "M855/M80 Old Stock Conversion Ball Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x35_m30_sttan_sby_t : 4thmd_m_762x35_m30_sttan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball-Y(T)";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M856/M62 Old Stock Conversion Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x35_m30_sttan_sbir_t3 : 4thmd_m_762x35_m30_sttan_sby_t3
        {
            displayName = ".300AAC 30rnd Ball-IR(T3E3)";
            displayNameShort = "Ball-IR T3E3";
            descriptionShort = "M855/M80 Old Stock Conversion Ball Rounds<br/>M856/M62 Mod-B OSC Infra-Red Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
            ammo = "4thmd_a_762x35_ball_ir";
        };

        class 4thmd_m_762x35_m30_sttan_sbir_t : 4thmd_m_762x35_m30_sttan_sbir_t3
        {
            displayName = ".300AAC 30rnd Ball-IR(T)";
            displayNameShort = "Ball-IR T";
            descriptionShort = "M856/M62 Mod-B OSC Infra-Red Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x35_m30_sttan_suby_t3 : 4thmd_m_762x35_m30_sttan_sby_t3
        {
            displayName = ".300AAC 30rnd SUB-Y(T3E3)";
            displayNameShort = "SUB-Y T3E3";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>SMK220/T Subsonic JHP Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "HLC_300Blackout_RNBT";
            tracersEvery = 3;
            lastRoundsTracer = 3;
        };

        class 4thmd_m_762x35_m30_sttan_suby_nt : 4thmd_m_762x35_m30_sttan_suby_t3
        {
            displayName = ".300AAC 30rnd Subsonic";
            displayNameShort = "SUB NT";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 0;
            lastRoundsTracer = 0;
        };

        class 4thmd_m_762x35_m30_sttan_suby_t : 4thmd_m_762x35_m30_sttan_suby_t3
        {
            displayName = ".300AAC 30rnd SUB-Y(T)";
            displayNameShort = "SUB-Y T";
            descriptionShort = "SMK220/T Subsonic JHP Tracer Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 1;
            lastRoundsTracer = 1;
        };

        class 4thmd_m_762x35_m30_sttan_subir_t3 : 4thmd_m_762x35_m30_sttan_suby_t3
        {
            displayName = ".300AAC 30rnd SUB-IR(T3E3)";
            displayNameShort = "SUB-IR T3E3";
            descriptionShort = "SMK220 Subsonic Jacketed Hollow Point Rounds<br/>SMK220/TB SUB-JHP Infra-Red Tracer Rounds<br/>Tracer every 5, 3 End Tracers";

            ammo = "HLC_300Blackout_SMK";
        };

        class 4thmd_m_762x35_m30_sttan_subir_t : 4thmd_m_762x35_m30_sttan_subir_t3
        {
            displayName = ".300AAC 30rnd SUB-IR(T)";
            displayNameShort = "SUB-IR T";
            descriptionShort = "SMK220/TB SUB-JHP Infra-Red Tracer Rounds<br/>Tracer every 5, 3 End Tracers";
            tracersEvery = 1;
            lastRoundsTracer = 1;
        };