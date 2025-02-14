class CfgPatches
{
    class darkmod_4thmd_ammo
	{
        weapons[] =
        {
            "greenmag_ammo_9x19_basic_15Rnd",
            "greenmag_ammo_762x51_basic_100Rnd"
        };
        units[] = {};
        magazines[] = 
        {
            "4thmd_m_901x19_sig15_hpy_nt",
            "4thmd_m_901x19_sig15_sby_nt",
            "4thmd_m_901x19_sig15_sub_nt",

            "4thmd_m_901x19_mp30_hpy_nt",
            "4thmd_m_901x19_mp30_sby_nt",
            "4thmd_m_901x19_mp30_sub_nt",

            "4thmd_m_556x45_m30_sttan_sby_t3",
            "4thmd_m_556x45_m30_sttan_sby_nt",
            "4thmd_m_556x45_m30_sttan_sby_t",
            "4thmd_m_556x45_m30_sttan_apy_t5",
            "4thmd_m_556x45_m30_sttan_apy_nt",
            "4thmd_m_556x45_m30_sttan_lry_nt",
            "4thmd_m_556x45_m50_xmag_sby_t3",
            "4thmd_m_556x45_m50_xmag_sby_nt",
            "4thmd_m_556x45_m50_xmag_sby_t",
            "4thmd_m_556x45_m100_cmag_sby_t3",
            "4thmd_m_556x45_m100_cmag_sby_t",

            "4thmd_m_556x45_b100_sptan_sby_t3",
            "4thmd_m_556x45_b100_sptan_sby_t",
            "4thmd_m_556x45_b200_sptan_sby_t3",
            "4thmd_m_556x45_b200_sptan_sby_t",
            "4thmd_m_556x45_b100_sptan_apy_t5",
            "4thmd_m_556x45_b100_sptan_sby_t3",
            "4thmd_m_556x45_b100_sptan_sby_t",
            "4thmd_m_556x45_b100_sptan_sby_nt",
            "4thmd_m_556x45_b100_sptan_apy_t5",
            "4thmd_m_556x45_b100_sptan_apy_nt",
            "4thmd_m_556x45_b200_sptan_sby_t3",
            "4thmd_m_556x45_b200_sptan_sby_t",
            "4thmd_m_556x45_b200_sptan_sby_nt",

            "4thmd_m_762x51_20scr_stblk_sby_t3",
            "4thmd_m_762x51_20scr_stblk_sby_nt",
            "4thmd_m_762x51_20scr_stblk_sby_t",
            "4thmd_m_762x51_20scr_stblk_apy_t4",
            "4thmd_m_762x51_20scr_stblk_apy_nt",
            "4thmd_m_762x51_20scr_stblk_lry_nt",
            "4thmd_m_762x51_20scr_stblk_slr_nt",

            "4thmd_m_762x51_dm50_drum_sby_t3",
            "4thmd_m_762x51_dm50_drum_sby_t",
            "4thmd_m_762x51_dm50_drum_sby_nt",
            "4thmd_m_762x51_dm50_drum_apy_t6",
            "4thmd_m_762x51_dm50_drum_apy_nt",
            "4thmd_m_762x51_dm50_drum_lry_t6",
            "4thmd_m_762x51_dm50_drum_lry_nt",
            "4thmd_m_762x51_dm100_gbox_sby_t3",
            "4thmd_m_762x51_dm100_gbox_sby_t",
            "4thmd_m_762x51_dm100_gbox_sby_nt",
            "4thmd_m_762x51_dm200_gbox_sby_t3",
            "4thmd_m_762x51_dm200_gbox_sby_t",
            "4thmd_m_762x51_dm200_gbox_sby_nt",
            
            "4thmd_m_762x51_b75_smabx_sby_t3",
            "4thmd_m_762x51_b75_smabx_sby_t",
            "4thmd_m_762x51_b75_smabx_sby_nt",
            "4thmd_m_762x51_b75_smabx_apy_t6",
            "4thmd_m_762x51_b75_smabx_apy_nt",
            "4thmd_m_762x51_b75_smabx_lry_t6",
            "4thmd_m_762x51_b75_smabx_lry_nt",
            "4thmd_m_762x51_b150_lrgbx_sby_t3",
            "4thmd_m_762x51_b150_lrgbx_sby_t",
            "4thmd_m_762x51_b150_lrgbx_sby_nt"
        };
        requiredAddons[] = 
        {   
            "A3_Weapons_F_Exp",
            "ace_common",
            "ace_smallarms",
            "ace_ballistics",
            "hlcweapons_core",
            "hlcweapons_SCAR",
            "hlcweapons_MG3s",
            "niaweapons_226",
            "rhsusf_weapons",
            "rhsusf_weapons2",
            "rhsusf_weapons3",
            "UK3CB_BAF_Weapons"
        };
        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgAmmo
{
    //9x19mm
        class HLC_9x19_Ball;
        class 4thmd_a_901x19_jhp_y : HLC_9x19_Ball
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2.5;
        };

        class HLC_9x19_JHP;
        class 4thmd_a_901x19_fmj_y : HLC_9x19_JHP
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2.5;
        };

    //5.56x45mm
        class B_556x45_Ball;   //Standard
        class 4thmd_a_556x45_epr_y : B_556x45_Ball
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 1.6;
        };

        class 4thmd_a_556x45_epr_ir : 4thmd_a_556x45_epr_y
        {
            nvgOnly = 1;
        };

        class ACE_556x45_Ball_M995_AP;  //Armor Piercing
        class 4thmd_a_556x45_ap_y : ACE_556x45_Ball_M995_AP
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 1.6;
        };

        class ACE_556x45_Ball_Mk262;   //Special Ballistic Long Range
        class 4thmd_a_556x45_sblr_y : ACE_556x45_Ball_Mk262
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 1.6;
        };

        class ACE_556x45_Ball_Mk318;   //Special Operations Science and Technology
        class 4thmd_a_556x45_sost_y : ACE_556x45_Ball_Mk318
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 1.6;
        };

    //7.62x35mm / .300AAC / .300BO (Black Out)
        class HLC_300Blackout_Ball;
        class 4thmd_a_762x35_ball_y : HLC_300Blackout_Ball
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
        };

        class 4thmd_a_762x35_ball_ir : 4thmd_a_762x35_ball_y
        {
            nvgOnly = 1;
        };

        class HLC_300Blackout_RNBT : HLC_300Blackout_Ball   //Subsonic Yellow Tracer
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
        };

        class HLC_300Blackout_SMK : HLC_300Blackout_Ball    //Subsonic IR Tracer
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
            nvgOnly = 1;
        };

    //7.62x51mm
        class B_762x51_Ball;
        class 4thmd_a_762x51_epr_y : B_762x51_Ball
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
        };

        class 4thmd_a_762x51_epr_ir : 4thmd_a_762x51_epr_y
        {
            nvgOnly = 1;
        };

        class ACE_762x51_Ball_M993_AP;
        class 4thmd_a_762x51_ap_y : ACE_762x51_Ball_M993_AP
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
        };

        class ACE_762x51_Ball_M118LR;
        class 4thmd_a_762x51_lr_y : ACE_762x51_Ball_M118LR
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2;
        };

    //8.58x70mm / .338LM (Lapua Magnum)
        class B_338_Ball;
        class 4thmd_a_858x70_epr_y : B_338_Ball
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2.4;
        };

        class 4thmd_a_858x70_epr_ir : 4thmd_a_858x70_epr_y
        {
            nvgOnly = 1;
        };

        class ACE_338_Ball_API526;
        class 4thmd_a_858x70_api_y : ACE_338_Ball_API526
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 2.4;
        };

    //12.7x99mm / .50BMG
        class B_127x99_Ball_Tracer_Yellow;
        class 4thmd_a_127x99_ball_y : B_127x99_Ball_Tracer_Yellow
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 3;
        };

        class 4thmd_a_127x99_ball_ir : 4thmd_a_127x99_ball_y
        {
            nvgOnly = 1;
        };
        
        class ACE_127x99_API;
        class 4thmd_a_127x99_api_y : ACE_127x99_API
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 3;
        };

        class rhsusf_ammo_127x99_mk211;
        class 4thmd_a_127x99_heiap_y : rhsusf_ammo_127x99_mk211
        {
            model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
            tracerScale = 3;
        };

        //class ACE_127x99_Ball_AMAX;   //SBLR

};

/*
    class CfgAmmo
    {
        //9.01x19mm
            class 4thmd_a_901x19_jhp_y;         //JHP-Y
            class 4thmd_a_901x19_fmj_y;         //FMJ-Y

        //5.56x45mm
            class 4thmd_a_556x45_epr_y;         // EPR-Y
            class 4thmd_a_556x45_epr_ir;        // EPR-IR
            class 4thmd_a_556x45_ap_y;          // AP-Y
            class 4thmd_a_556x45_sblr_y;        // SBLR
            class 4thmd_a_556x45_sost_y;        // SOST

        //7.62x35mm
            class 4thmd_a_762x35_ball_y;         //Ball-Y
            class 4thmd_a_762x35_ball_ir;        //Ball-IR
            class HLC_300Blackout_RNBT;         //SUB-Y
            class HLC_300Blackout_SMK;          //SUB-IR

        //7.62x51mm
            class 4thmd_a_762x51_epr_y;         //EPR-Y
            class 4thmd_a_762x51_epr_ir;        //EPR-IR
            class 4thmd_a_762x51_ap_y;          //AP-Y
            class 4thmd_a_762x51_lr_y;          //LRR-Y  - M118
            class ACE_762x51_Ball_Mk316_Mod_0;  //SBLR - Mk316 
            class ACE_762x51_Ball_Mk319_Mod_0;  //SOST
            class ACE_762x51_Ball_Subsonic;     //SUB

        //8.58x70mm
            class 4thmd_a_858x70_ball_y;        //Ball-Y
            class 4thmd_a_858x70_ball_ir;       //Ball-IR
            class 4thmd_a_858x70_api_y;         //API-Y
            class ACE_338_Ball;                 //SMK   :   300gr Serria MatchKing
            class UK3CB_BAF_338_Ball;           //VLD   :   250gr LockBase B408

        //12.7x99mm
            class 4thmd_a_127x99_ball_y         //Ball-Y
            class 4thmd_a_127x99_ball_ir        //Ball-IR
            class 4thmd_a_127x99_api_y          //AP-Y
            class 4thmd_a_127x99_api_ir         //AP-Y
            class 4thmd_a_127x99_heiap_y;       //RFS-Y     //T: Mk30/NM160 S:Mk211/NM140
            class 4thmd_a_127x99_heiap_ir;      //RFS-Y     //NM263
            class ACE_127x99_Ball_AMAX;         //SBLR
    };

    class CfgMagazines
    {
        //15rnd SIG22X Magazine
            hlc_15Rnd_9x19_B_P226
        //30rnd MP5 Magazine
            hlc_30Rnd_9x19_B_MP5

        //30rnd PMAG Black
            class rhs_mag_30Rnd_556x45_M855_PMAG;
        //30rnd PMAG Tan
            class rhs_mag_30Rnd_556x45_M855_PMAG_Tan;
        //30rnd STANAG Black
            class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red;
        //30rnd STANAG Tan
            class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull;
        //50rnd X-MAG Black (X-15)
            class hlc_50rnd_556x45_EPR;
        //100rnd C-MAG Black
            class 150Rnd_556x45_Drum_Mag_F;
        //100rnd C-MAG Black Tan
            class 150Rnd_556x45_Drum_Sand_Mag_F;
        //100rnd C-MAG Black Green
            class 150Rnd_556x45_Drum_Green_Mag_F;
        //100rnd Small Belt Pouch (Coyote)
            class rhsusf_100Rnd_556x45_soft_pouch_coyote;
        //200rnd Large Belt Pouch (Coyote)
            class rhsusf_200Rnd_556x45_soft_pouch_coyote;
        //20rnd 7.62-STANAG Black
            class hlc_20Rnd_762x51_B_SCARH_MW2;
        //20rnd 7.62-SCARMAG Blk
            class hlc_20Rnd_762x51_B_SCARH;
        //20rnd 7.62-SCARMAG Tan
            class hlc_20Rnd_762x51_B_SCARH_Tan;
    };
*/

class CfgMagazines
{
    //9x19mm 15rnd P22X Magazines
        class hlc_15Rnd_9x19_B_P226;
        class 4thmd_m_901x19_sig15_hpy_nt : hlc_15Rnd_9x19_B_P226
        {
            displayName = "15rnd 9x19mm JHP(NT)";
            displayNameShort = "JHP NT";
            descriptionShort = "CenAuth Jacketed Hollow Points<br/>No Tracers";

            mass = 3.5;
            ammo = "4thmd_a_901x19_jhp_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_9x19_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_9x19_basic_1Rnd";
        };

        class 4thmd_m_901x19_sig15_sby_nt : 4thmd_m_901x19_sig15_hpy_nt
        {
            displayName = "9x19mm 15rnd FMJ(NT)";
            displayNameShort = "FMJ NT";
            descriptionShort = "NATO Full Metal Jacket<br/>No Tracers";

            ammo = "4thmd_a_901x19_fmj_y";
        };

        class 4thmd_m_901x19_sig15_sub_nt : 4thmd_m_901x19_sig15_hpy_nt
        {
            displayName = "9x19mm 15rnd SUB(NT)";
            displayNameShort = "SUB NT";
            descriptionShort = "Special Subsonic Rounds<br/>No Tracers";

            ammo = "HLC_9x19_Subsonic";
        };

    //9x19mm 30rnd MP5 Magazines
        class hlc_30Rnd_9x19_B_MP5;
        class 4thmd_m_901x19_mp30_hpy_nt : hlc_30Rnd_9x19_B_MP5
        {
            displayName = "9x19mm 30rnd JHP(NT)";
            displayNameShort = "JHP NT";
            descriptionShort = "CenAuth Jacketed Hollow Points<br/>No Tracers";

            mass = 8;
            ammo = "4thmd_a_901x19_jhp_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;

            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_9x19_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_9x19_basic_1Rnd";
        };

        class 4thmd_m_901x19_mp30_sby_nt : 4thmd_m_901x19_mp30_hpy_nt
        {
            displayName = "9x19mm 30rnd FMJ(NT)";
            displayNameShort = "FMJ NT";
            descriptionShort = "NATO Full Metal Jacket<br/>No Tracers";

            ammo = "4thmd_a_901x19_fmj_y";
        };

        class 4thmd_m_901x19_mp30_sub_nt : 4thmd_m_901x19_mp30_hpy_nt
        {
            displayName = "9x19mm 30rnd SUB(NT)";
            displayNameShort = "SUB NT";
            descriptionShort = "Special Subsonic Rounds<br/>No Tracers";

            ammo = "HLC_9x19_Subsonic";
        };

    //5.56x45mm 30rnd Magazines
        class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull;
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
            displayName = "5.56mm 30rnd SBLR";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk262 Special Ballistic Long Range Rounds<br/>No Tracers";
            ammo = "4thmd_a_556x45_sblr_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //5.56x45mm 50rnd X-MAG Drum (X-15)
        class hlc_50rnd_556x45_EPR;
        class 4thmd_m_556x45_m50_xmag_sby_t3 : hlc_50rnd_556x45_EPR
        {
            displayName = "5.56mm 50rnd EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 5 End Tracers";
            ammo = "4thmd_a_556x45_epr_y";
            mass = 20;
            count = 50;
            lastRoundsTracer = 5;
            tracersEvery = 3;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_556x45_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_556x45_basic_1Rnd";
        };

        class 4thmd_m_556x45_m50_xmag_sby_nt : 4thmd_m_556x45_m50_xmag_sby_t3
        {
            displayName = "5.56mm 50rnd EPR";
            displayNameShort = "EPR NT";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_556x45_m50_xmag_sby_t : 4thmd_m_556x45_m50_xmag_sby_t3
        {
            displayName = "5.56mm 50rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

    //5.56x45mm 100rnd C-MAG Drum
        class 150Rnd_556x45_Drum_Mag_F;
        class 4thmd_m_556x45_m100_cmag_sby_t3 : 150Rnd_556x45_Drum_Mag_F
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
        class 4thmd_m_556x45_m100_cmag_sby_t : 4thmd_m_556x45_m100_cmag_sby_t3
        {
            displayName = "5.56mm 100rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

    //5.56mm 100rnd Box
        class rhsusf_100Rnd_556x45_soft_pouch_coyote;
        class 4thmd_m_556x45_b100_sptan_sby_t3 : rhsusf_100Rnd_556x45_soft_pouch_coyote
        {
            displayName = "5.56mm 100rnd M27 EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 5 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_556x45_epr_y";
            mass = 30;
            lastRoundsTracer = 5;
            tracersEvery = 3;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_556x45_basic";
            greenmag_basicammo = "greenmag_beltlinked_556x45_basic";
        };
        
        class 4thmd_m_556x45_b100_sptan_sby_t : 4thmd_m_556x45_b100_sptan_sby_t3
        {
            displayName = "5.56mm 100rnd M27 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_b100_sptan_sby_nt : 4thmd_m_556x45_b100_sptan_sby_t3
        {
            displayName = "5.56mm 100rnd M27 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_b100_sptan_apy_t5 : 4thmd_m_556x45_b100_sptan_sby_t3
        {
            displayName = "5.56mm 100rnd M27 AP-Y(T5E5)";
            displayNameShort = "AP-Y T5E5";
            descriptionShort = "M995 Armor-Piercing Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 5, 5 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_556x45_ap_y";
            lastRoundsTracer = 5;
        };

        class 4thmd_m_556x45_b100_sptan_apy_nt : 4thmd_m_556x45_b100_sptan_apy_t5
        {
            displayName = "5.56mm 100rnd M27 AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };
    //5.56mm 200rnd Box
        class rhsusf_200Rnd_556x45_soft_pouch_coyote;

        class 4thmd_m_556x45_b200_sptan_sby_t3 : rhsusf_200Rnd_556x45_soft_pouch_coyote
        {
            displayName = "5.56mm 200rnd M27 EPR-Y(T3E10)";
            displayNameShort = "EPR-Y T3E10";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_556x45_epr_y";
            mass = 60;
            lastRoundsTracer = 10;
            tracersEvery = 3;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_556x45_basic";
            greenmag_basicammo = "greenmag_beltlinked_556x45_basic";
        };

        class 4thmd_m_556x45_b200_sptan_sby_t : 4thmd_m_556x45_b200_sptan_sby_t3
        {
            displayName = "5.56mm 200rnd M27 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Disentegrating, Non-Reloadable Belt";
            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_556x45_b200_sptan_sby_nt : 4thmd_m_556x45_b200_sptan_sby_t3
        {
            displayName = "5.56mm 200rnd M27 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";
            lastRoundsTracer = 0;
            tracersEvery = 0;
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

    //7.62x35mm 50rnd X-MAG Drum / .300AAC / .300BO (Black Out) (X-15)
        class 4thmd_m_762x35_m50_xmblk_sby_t3 : hlc_50rnd_556x45_EPR
        {
            displayName = ".300AAC 50rnd Ball-Y(T3E5)";
            displayNameShort = "Ball-Y T3E5";
            descriptionShort = "M855/M80 Ball Rounds<br/>M856/M62 Tracer Rounds<br/>Tracer every 3, 5 End Tracers";
            ammo = "4thmd_a_762x35_ball_y";
            mass = 24;
            count = 50;
            tracersEvery = 3;
            lastRoundsTracer = 5;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_300BO_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_300BO_basic_1Rnd";
        };

        class 4thmd_m_762x35_m50_xmblk_sby_nt : 4thmd_m_762x35_m50_xmblk_sby_t3
        {
            displayName = ".300AAC 50rnd Ball";
            displayNameShort = "Ball NT";
            descriptionShort = "M855/M80 Ball Rounds<br/>Tracer every 3, 5 End Tracers";
            tracersEvery = 0;
            lastRoundsTracer = 0;
        };

        class 4thmd_m_762x35_m50_xmblk_sby_t : 4thmd_m_762x35_m50_xmblk_sby_t3
        {
            displayName = ".300AAC 50rnd Ball-Y(T)";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M856/M62 Tracer Rounds<br/>Tracer every 3, 5 End Tracers";
            tracersEvery = 1;
            lastRoundsTracer = 1;
        };

    //7.62x51mm 20rnd
        class hlc_20Rnd_762x51_B_SCARH_MW2;
        class 4thmd_m_762x51_20scr_stblk_sby_t3 : hlc_20Rnd_762x51_B_SCARH_MW2
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

        class 4thmd_m_762x51_20scr_stblk_sby_nt : 4thmd_m_762x51_20scr_stblk_sby_t3
        {
            displayName = "7.62mm 20rnd EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_stblk_sby_t : 4thmd_m_762x51_20scr_stblk_sby_t3
        {
            displayName = "7.62mm 20rnd EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_20scr_stblk_apy_t4 : 4thmd_m_762x51_20scr_stblk_sby_t3
        {
            displayName = "7.62mm 20rnd AP-Y(T4E2)";
            displayNameShort = "AP-Y T4E2";
            descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 4, 2 End Tracers";

            ammo = "4thmd_a_762x51_ap_y";
            lastRoundsTracer = 2;
            tracersEvery = 4;
        };

        class 4thmd_m_762x51_20scr_stblk_apy_nt : 4thmd_m_762x51_20scr_stblk_apy_t4
        {
            displayName = "7.62mm 20rnd AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_stblk_lry_nt : 4thmd_m_762x51_20scr_stblk_sby_t3
        {
            displayName = "7.62mm 20rnd LRR(NT)";
            displayNameShort = "LRR NT";
            descriptionShort = "M118 Long Range Preformance Rounds<br/>No Tracers";

            ammo = "4thmd_a_762x51_lr_y";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_20scr_stblk_slr_nt : 4thmd_m_762x51_20scr_stblk_lry_nt
        {
            displayName = "7.62mm 20rnd SBLR(NT)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk316 Special Ballistics Long Range Rounds<br/>No Tracers";

            ammo = "ACE_762x51_Ball_Mk316_Mod_0";
        };

    //7.62x51mm 50rnd DM6-Belt
        class hlc_50Rnd_762x51_B_MG3;
        class 4thmd_m_762x51_dm50_drum_sby_t3 : hlc_50Rnd_762x51_B_MG3
        {
            displayName = "7.62mm 50rnd DM6 EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 5 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 25;
            lastRoundsTracer = 5;
            tracersEvery = 3;
            count = 50;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_762x51_basic";
            greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
        };

        class 4thmd_m_762x51_dm50_drum_sby_t : 4thmd_m_762x51_dm50_drum_sby_t3
        {
            displayName = "7.62mm 50rnd DM6 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm50_drum_sby_nt : 4thmd_m_762x51_dm50_drum_sby_t3
        {
            displayName = "7.62mm 50rnd DM6 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm50_drum_apy_t6 : 4thmd_m_762x51_dm50_drum_sby_t3
        {
            displayName = "7.62mm 50rnd DM6 AP-Y(T6E5)";
            displayNameShort = "AP-Y T6E5";
            descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            ammo = "4thmd_a_762x51_ap_y";
            lastRoundsTracer = 5;
            tracersEvery = 6;
        };

        class 4thmd_m_762x51_dm50_drum_apy_nt : 4thmd_m_762x51_dm50_drum_apy_t6
        {
            displayName = "7.62mm 50rnd DM6 AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M61 Armor Piercing Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_dm50_drum_lry_t6 : 4thmd_m_762x51_dm50_drum_apy_t6
        {
            displayName = "7.62mm 50rnd DM6 LRR-Y(T6E5)";
            displayNameShort = "LRR-Y T6E5";
            descriptionShort = "M118 Long Range Preformance Rounds<br/>M62E3 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            ammo = "4thmd_a_762x51_lr_y";
        };

        class 4thmd_m_762x51_dm50_drum_lry_nt : 4thmd_m_762x51_dm50_drum_lry_t6
        {
            displayName = "7.62mm 50rnd DM6 LRR(NT)";
            displayNameShort = "LRR NT";
            descriptionShort = "M118 Long Range Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //7.62x51mm 100rnd DM6-Belt
        class 150Rnd_762x51_Box;
        class 4thmd_m_762x51_dm100_gbox_sby_t3 : 150Rnd_762x51_Box
        {
            displayName = "7.62mm 100rnd DM6 EPR-Y(T3E10)";
            displayNameShort = "EPR-Y T3E10";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 50;
            lastRoundsTracer = 10;
            tracersEvery = 3;
            count = 100;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_762x51_basic";
            greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
        };

        class 4thmd_m_762x51_dm100_gbox_sby_t : 4thmd_m_762x51_dm100_gbox_sby_t3
        {
            displayName = "7.62mm 100rnd DM6 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm100_gbox_sby_nt : 4thmd_m_762x51_dm100_gbox_sby_t3
        {
            displayName = "7.62mm 100rnd DM6 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //7.62x51mm 200rnd DM6-Belt
        class 4thmd_m_762x51_dm200_gbox_sby_t3 : 150Rnd_762x51_Box
        {
            displayName = "7.62mm 200rnd DM6 EPR-Y(T3E10)";
            displayNameShort = "EPR-Y T3E10";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Replacable Belt";

            picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\data\gear_magazine_762_box_ca.paa";
            model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\uk3cb_L7_ammobox.p3d";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 100;
            lastRoundsTracer = 10;
            tracersEvery = 3;
            count = 200;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_762x51_basic";
            greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
        };

        class 4thmd_m_762x51_dm200_gbox_sby_t : 4thmd_m_762x51_dm200_gbox_sby_t3
        {
            displayName = "7.62mm 200rnd DM6 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_dm200_gbox_sby_nt : 4thmd_m_762x51_dm200_gbox_sby_t3
        {
            displayName = "7.62mm 200rnd DM6 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //7.62x51mm 75rd M13-Belt
        class hlc_100Rnd_762x51_B_M60E4;
        class 4thmd_m_762x51_b75_smabx_sby_t3 : hlc_100Rnd_762x51_B_M60E4
        {
            displayName = "7.62mm 75rnd M13 EPR-Y(T3E5)";
            displayNameShort = "EPR-Y T3E5";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 5 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 37.5;
            lastRoundsTracer = 5;
            tracersEvery = 3;
            count = 75;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_762x51_basic";
            greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
        };

        class 4thmd_m_762x51_b75_smabx_sby_t : 4thmd_m_762x51_b75_smabx_sby_t3
        {
            displayName = "7.62mm 75rnd M13 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_b75_smabx_sby_nt : 4thmd_m_762x51_b75_smabx_sby_t3
        {
            displayName = "7.62mm 75rnd M13 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_b75_smabx_apy_t6 : 4thmd_m_762x51_b75_smabx_sby_t3
        {
            displayName = "7.62mm 75rnd M13 AP-Y(T6E5)";
            displayNameShort = "AP-Y T6E5";
            descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_762x51_ap_y";
            lastRoundsTracer = 5;
            tracersEvery = 6;
        };

        class 4thmd_m_762x51_b75_smabx_apy_nt : 4thmd_m_762x51_b75_smabx_apy_t6
        {
            displayName = "7.62mm 75rnd M13 AP(NT)";
            displayNameShort = "AP NT";
            descriptionShort = "M61 Armor Piercing Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_762x51_b75_smabx_lry_t6 : 4thmd_m_762x51_b75_smabx_apy_t6
        {
            displayName = "7.62mm 75rnd M13 LRP-Y(T6E5)";
            displayNameShort = "LRP-Y T6E5";
            descriptionShort = "M118 Long Range Preformance Rounds<br/>M62E3 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_762x51_lr_y";
        };

        class 4thmd_m_762x51_b75_smabx_lry_nt : 4thmd_m_762x51_b75_smabx_lry_t6
        {
            displayName = "7.62mm 75rnd M13 LRP(NT)";
            displayNameShort = "LRP NT";
            descriptionShort = "M118 Long Range Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };


    //7.62x51mm 150rnd M13-Belt
        class rhsusf_100Rnd_762x51;
        class 4thmd_m_762x51_b150_lrgbx_sby_t3 : rhsusf_100Rnd_762x51
        {
            displayName = "7.62mm 150rnd M13 EPR-Y(T3E10)";
            displayNameShort = "EPR-Y T3E10";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Disentegrating, Non-Reloadable Belt";

            ammo = "4thmd_a_762x51_epr_y";
            mass = 75;
            lastRoundsTracer = 10;
            tracersEvery = 3;
            count = 150;

            greenmag_canSpeedload = 0;
            greenmag_needBelt = 1;
            greenmag_ammo = "greenmag_beltlinked_762x51_basic";
            greenmag_basicammo = "greenmag_beltlinked_762x51_basic";
        };

        class 4thmd_m_762x51_b150_lrgbx_sby_t : 4thmd_m_762x51_b150_lrgbx_sby_t3
        {
            displayName = "7.62mm 150rnd M13 EPR-Y(T)";
            displayNameShort = "EPR-Y T";
            descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 1;
            tracersEvery = 1;
        };

        class 4thmd_m_762x51_b150_lrgbx_sby_nt : 4thmd_m_762x51_b150_lrgbx_sby_t3
        {
            displayName = "7.62mm 150rnd M13 EPR(NT)";
            displayNameShort = "EPR NT";
            descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Disentegrating, Non-Reloadable Belt";

            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

    //8.58x70mm 10rnd Magazines / .338LM (Lapua Magnum)
        class 10Rnd_338_Mag;

        class 4thmd_m_858x70_m10_ulr_sby_t : 10Rnd_338_Mag
        {
            displayName = ".338LM 10rnd Ball-Y(T)";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M859 Long-Range Tracer Rounds<br/>All Tracers";
            ammo = "4thmd_a_858x70_ball_y";
            mass = 14;
            count = 10;
            lastRoundsTracer = 1;
            tracersEvery = 1;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_338_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_338_basic_1Rnd";
        };

        class 4thmd_m_858x70_m10_ulr_sby_nt : 4thmd_m_858x70_m10_ulr_sby_t
        {
            displayName = ".338LM 10rnd Ball";
            displayNameShort = "Ball NT";
            descriptionShort = "M858 Long-Range Ball Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_858x70_m10_ulr_apy_nt : 4thmd_m_858x70_m10_ulr_sby_nt
        {
            displayName = ".338LM 10rnd AP";
            displayNameShort = "AP NT";
            descriptionShort = "Mk446 Armor Piercing Rounds<br/>No Tracers";
            ammo = "4thmd_a_858x70_api_y";
        };

        class 4thmd_m_858x70_m10_ulr_smk_nt : 4thmd_m_858x70_m10_ulr_sby_nt
        {
            displayName = ".338LM 10rnd SBLR(Sierra MatchKing 300gr)";
            displayNameShort = "SMK NT";
            descriptionShort = "Mk338 300gr Sierra Matchking Long Range Rounds<br/>No Tracers";
            ammo = "ACE_338_Ball";
        };

        class 4thmd_m_858x70_m10_ulr_vld_nt : 4thmd_m_858x70_m10_ulr_sby_nt
        {
            displayName = ".338LM 10rnd SBLR(LockBase B408 250gr)";
            displayNameShort = "VLD NT";
            descriptionShort = "Mk338B1 250gr LockBase B408 Very-Low-Drag Rounds<br/>No Tracers";
            ammo = "UK3CB_BAF_338_Ball";
        };

    //8.58x70mm 5rnd Magazines / .338LM (Lapua Magnum)
        class UK3CB_BAF_338_5Rnd;

        class 4thmd_m_858x70_m5_aim_sby_t : UK3CB_BAF_338_5Rnd
        {
            displayName = ".338LM 5rnd Ball-Y(T)";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M859 Long-Range Tracer Rounds<br/>All Tracers";
            ammo = "4thmd_a_858x70_ball_y";
            mass = 7;
            count = 5;
            lastRoundsTracer = 1;
            tracersEvery = 1;
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_338_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_338_basic_1Rnd";
        };

        class 4thmd_m_858x70_m5_aim_sby_nt : 4thmd_m_858x70_m5_aim_sby_t
        {
            displayName = ".338LM 5rnd Ball";
            displayNameShort = "Ball NT";
            descriptionShort = "M858 Long-Range Ball Rounds<br/>No Tracers";
            lastRoundsTracer = 0;
            tracersEvery = 0;
        };

        class 4thmd_m_858x70_m5_aim_apy_nt : 4thmd_m_858x70_m5_aim_sby_nt
        {
            displayName = ".338LM 5rnd API";
            displayNameShort = "API NT";
            descriptionShort = "Mk446 Armor Piercing Incendiary Rounds<br/>No Tracers";
            ammo = "4thmd_a_858x70_api_y";
        };

        class 4thmd_m_858x70_m5_aim_smk_nt : 4thmd_m_858x70_m5_aim_sby_nt
        {
            displayName = ".338LM 5rnd SBLR(Sierra MatchKing 300gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk338 300gr Sierra MatchKing Long Range Rounds<br/>No Tracers";
            ammo = "ACE_338_Ball";
        };

        class 4thmd_m_858x70_m5_aim_vld_nt : 4thmd_m_858x70_m5_aim_sby_nt
        {
            displayName = ".338LM 5rnd SBLR(LockBase B408 250gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Mk338+ 250gr LockBase B408 Very-Low-Drag Rounds<br/>No Tracers";
            ammo = "UK3CB_BAF_338_Ball";
        };

    //12.7x99mm 10rnd Magazines
        class rhsusf_mag_10Rnd_STD_50BMG_M33;

        class 4thmd_m_127x99_m10_brt_sby_t : rhsusf_mag_10Rnd_STD_50BMG_M33
        {
            displayName = "12.7mm 10rnd Ball-Y(T) Magazine";
            displayNameShort = "Ball-Y T";
            descriptionShort = "M17B2 Yellow Tracer Rounds<br/>All Tracers";

            ammo = "4thmd_a_127x99_ball_y";
            mass = 32;
            count = 10;
            tracersEvery = 1;
            lastRoundsTracer = 1;
            
            greenmag_canSpeedload = 1;
            greenmag_needBelt = 0;
            greenmag_ammo="greenmag_ammo_127x99_basic_1Rnd";
            greenmag_basicammo="greenmag_ammo_127x99_basic_1Rnd";
        };

        class 4thmd_m_127x99_m10_brt_sby_nt : 4thmd_m_127x99_m10_brt_sby_t
        {
            displayName = "12.7mm 10rnd Ball Magazine";
            displayNameShort = "Ball NT";
            descriptionShort = "M33 Standard Ball Rounds<br/>No Tracers";

            tracersEvery = 0;
            lastRoundsTracer = 0;
        };

        class 4thmd_m_127x99_m10_brt_apy_t : 4thmd_m_127x99_m10_brt_sby_t
        {
            displayName = "12.7mm 10rnd API-Y(T) Magazine";
            displayNameShort = "API-Y T";
            descriptionShort = "M8B2 Armor-Piercing Incendiary Yellow Tracer Rounds<br/>All Tracers";

            ammo = "4thmd_a_127x99_api_y";
        };

        class 4thmd_m_127x99_m10_brt_ap_nt : 4thmd_m_127x99_m10_brt_apy_t
        {
            displayName = "12.7mm 10rnd API Magazine";
            displayNameShort = "API NT";
            descriptionShort = "M8 Armor-Piercing Incendiary Rounds<br/>No Tracers";

            lastRoundsTracer = 0;
	    	tracersEvery = 0;
        };

        class 4thmd_m_127x99_m10_brt_rfsy_t : 4thmd_m_127x99_m10_brt_sby_t
        {
            displayName = "12.7mm 10rnd Raufoss-Y(T) Magazine";
            displayNameShort = "HEIAP-Y T";
            descriptionShort = "Raufoss Mk300 High Explosive Incendiary<br/>Armor-Piercing, Yellow Tracer Rounds<br/>All Tracers";

            ammo = "4thmd_a_127x99_heiap_y";
        };

        class 4thmd_m_127x99_m10_brt_rfsy_nt : 4thmd_m_127x99_m10_brt_rfsy_t
        {
            displayName = "12.7mm 10rnd Raufoss Magazine";
            displayNameShort = "HEIAP NT";
            descriptionShort = "Raufoss Mk211 High Explosive Incendiary<br/>Armor-Piercing Rounds, No Tracers";

            lastRoundsTracer = 0;
	    	tracersEvery = 0;
        };

        class 4thmd_m_127x99_m10_brt_amax_nt : 4thmd_m_127x99_m10_brt_sby_nt
        {
            displayName = "12.7mm 10rnd SBLR(AMAX 750gr)";
            displayNameShort = "SBLR NT";
            descriptionShort = "Hornady 750gr AMAX Match Long Range Rounds<br/>No Tracers";

            ammo = "ACE_127x99_Ball_AMAX";
        };

    //40mm Grenades
        class UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell;
        class UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell;

        class 1Rnd_SmokeBlue_Grenade_shell;
        class 1Rnd_SmokeGreen_Grenade_shell;
        class 1Rnd_SmokeOrange_Grenade_shell;
        class 1Rnd_SmokePurple_Grenade_shell;
        class 1Rnd_SmokeRed_Grenade_shell;

        class UGL_FlareGreen_F;
        class UGL_FlareCIR_F;
        class UGL_FlareRed_F;
        class UGL_FlareWhite_F;
        class UGL_FlareYellow_F;

        class ACE_40mm_Flare_white;
        class ACE_40mm_Flare_ir;

        class UK3CB_BAF_1Rnd_HE_Grenade_Shell;
        class UK3CB_BAF_1Rnd_HEDP_Grenade_Shell;

        class rhs_mag_m4009;    //Stun
        class rhs_mag_m576;     //Buckshot
        class ACE_HuntIR_M203;
        class ACE_40mm_Pike;
        class 1Rnd_RC40_HE_shell_RF;
        class 1Rnd_RC40_shell_RF;

        #include "40mm.hpp" //Temporary
    //40x46mm UGL Magazines / 40mmLV
    //40x51mm UGL Magazines / 40mmMV
    //40x46mm 6xMGL Magazines / 40mmLV
};

class CfgMagazineWells
{
    class CBA_9x19_P226
    {
        4thmd_mags[] =
        {
            "4thmd_m_901x19_sig15_hpy_nt",
            "4thmd_m_901x19_sig15_sby_nt",
            "4thmd_m_901x19_sig15_sub_nt"
        };
    };

    class CBA_9x19_MP5
    {
        4thmd_mags[] =
        {
            "4thmd_m_901x19_mp30_hpy_nt",
            "4thmd_m_901x19_mp30_sby_nt",
            "4thmd_m_901x19_mp30_sub_nt"
        };
    };

    class CBA_556x45_STANAG
    {
        4thmd_mags[] = 
        {
            "4thmd_m_556x45_m30_sttan_sby_t3",
            "4thmd_m_556x45_m30_sttan_sby_nt",
            "4thmd_m_556x45_m30_sttan_sby_t",
            "4thmd_m_556x45_m30_sttan_apy_t5",
            "4thmd_m_556x45_m30_sttan_apy_nt",
            "4thmd_m_556x45_m30_sttan_lry_nt",
            "4thmd_m_556x45_m50_xmag_sby_t3",
            "4thmd_m_556x45_m50_xmag_sby_nt",
            "4thmd_m_556x45_m50_xmag_sby_t",
            "4thmd_m_556x45_m100_cmag_sby_t3",
            "4thmd_m_556x45_m100_cmag_sby_t"
        };
    };

    class CBA_556x45_SCAR_EGLM
    {
        4thmd_mags[] = 
        {
            "4thmd_m_556x45_m30_sttan_sby_t3",
            "4thmd_m_556x45_m30_sttan_sby_nt",
            "4thmd_m_556x45_m30_sttan_sby_t",
            "4thmd_m_556x45_m30_sttan_apy_t5",
            "4thmd_m_556x45_m30_sttan_apy_nt",
            "4thmd_m_556x45_m30_sttan_lry_nt"
        };
    };
    
    class CBA_556x45_MINIMI
    {
        4thmd_mags[] =
        {
            "4thmd_m_556x45_b100_sptan_sby_t3",
            "4thmd_m_556x45_b100_sptan_sby_t",
            "4thmd_m_556x45_b100_sptan_sby_nt",
            "4thmd_m_556x45_b100_sptan_apy_t5",
            "4thmd_m_556x45_b100_sptan_apy_nt",
            "4thmd_m_556x45_b200_sptan_sby_t3",
            "4thmd_m_556x45_b200_sptan_sby_t",
            "4thmd_m_556x45_b200_sptan_sby_nt"
        };
    };

    class CBA_300BLK_STANAG
    {
        4thmd_mags[] =
        {
            "4thmd_m_762x35_m30_sttan_sby_t3",
            "4thmd_m_762x35_m30_sttan_sby_nt",
            "4thmd_m_762x35_m30_sttan_sby_t",
            "4thmd_m_762x35_m30_sttan_suby_t3",
            "4thmd_m_762x35_m30_sttan_suby_nt",
            "4thmd_m_762x35_m30_sttan_suby_t"
        };
    };

    class CBA_300BLK_STANAG_XL
    {
        4thmd_mags[] =
        {
            "4thmd_m_762x35_m50_xmblk_sby_t3",
            "4thmd_m_762x35_m50_xmblk_sby_nt",
            "4thmd_m_762x35_m50_xmblk_sby_t"
        };
    };

    class CBA_762x51_SCAR
    {
        4thmd_mags[] =
        {
            "4thmd_m_762x51_20scr_stblk_sby_t3",
            "4thmd_m_762x51_20scr_stblk_sby_nt",
            "4thmd_m_762x51_20scr_stblk_sby_t",
            "4thmd_m_762x51_20scr_stblk_apy_t4",
            "4thmd_m_762x51_20scr_stblk_apy_nt",
            "4thmd_m_762x51_20scr_stblk_lry_nt",
            "4thmd_m_762x51_20scr_stblk_slr_nt"
        };
    };

    class CBA_762x51_LINKS
    {
        4thmd_mags[] =
        {
            "4thmd_m_762x51_b75_smabx_sby_t3",
            "4thmd_m_762x51_b75_smabx_sby_t",
            "4thmd_m_762x51_b75_smabx_sby_nt",
            "4thmd_m_762x51_b75_smabx_apy_t6",
            "4thmd_m_762x51_b75_smabx_apy_nt",
            "4thmd_m_762x51_b75_smabx_lry_t6",
            "4thmd_m_762x51_b75_smabx_lry_nt",
            "4thmd_m_762x51_b150_lrgbx_sby_t3",
            "4thmd_m_762x51_b150_lrgbx_sby_t",
            "4thmd_m_762x51_b150_lrgbx_sby_nt"
        };
    };

    class CBA_762x51_MG3
    {
        4thmd_mags[] =
        {
            "4thmd_m_762x51_dm50_drum_sby_t3",
            "4thmd_m_762x51_dm50_drum_sby_t",
            "4thmd_m_762x51_dm50_drum_sby_nt",
            "4thmd_m_762x51_dm50_drum_apy_t6",
            "4thmd_m_762x51_dm50_drum_apy_nt",
            "4thmd_m_762x51_dm50_drum_lry_t6",
            "4thmd_m_762x51_dm50_drum_lry_nt",
            "4thmd_m_762x51_dm100_gbox_sby_t3",
            "4thmd_m_762x51_dm100_gbox_sby_t",
            "4thmd_m_762x51_dm100_gbox_sby_nt",
            "4thmd_m_762x51_dm200_gbox_sby_t3",
            "4thmd_m_762x51_dm200_gbox_sby_t",
            "4thmd_m_762x51_dm200_gbox_sby_nt"
        };
    };

    class DM_858x70_MAR10
    {
        4thmd_mags[] =
        {
            "4thmd_m_858x70_m10_ulr_sby_t",
            "4thmd_m_858x70_m10_ulr_sby_nt",
            "4thmd_m_858x70_m10_ulr_apy_nt",
            "4thmd_m_858x70_m10_ulr_smk_nt",
            "4thmd_m_858x70_m10_ulr_vld_nt"
        };
    };

    class MAR10_338
    {
        4thmd_mags[] =
        {
            "4thmd_m_858x70_m10_ulr_sby_t",
            "4thmd_m_858x70_m10_ulr_sby_nt",
            "4thmd_m_858x70_m10_ulr_apy_nt",
            "4thmd_m_858x70_m10_ulr_smk_nt",
            "4thmd_m_858x70_m10_ulr_vld_nt"
        };
    };

    class CBA_338LM_AI
    {
        4thmd_mags[] =
        {
            "4thmd_m_858x70_m5_aim_sby_t",
            "4thmd_m_858x70_m5_aim_sby_nt",
            "4thmd_m_858x70_m5_aim_apy_nt",
            "4thmd_m_858x70_m5_aim_smk_nt",
            "4thmd_m_858x70_m5_aim_vld_nt"
        };
    };

    class CBA_50BMG_M107
    {
        4thmd_mags[] =
        {
            "4thmd_m_127x99_m10_brt_sby_t",
            "4thmd_m_127x99_m10_brt_sby_nt",
            "4thmd_m_127x99_m10_brt_apy_t",
            "4thmd_m_127x99_m10_brt_ap_nt",
            "4thmd_m_127x99_m10_brt_rfsy_t",
            "4thmd_m_127x99_m10_brt_rfsy_nt",
            "4thmd_m_127x99_m10_brt_amax_nt"
        };
    };

    class CBA_40mm_M203
    {
        4thmd_mags[] =
        {
            "4thmd_u_40x46_1_hsmk_red",
            "4thmd_u_40x46_1_hsmk_ylw",
            "4thmd_u_40x46_1_smk_blu",
            "4thmd_u_40x46_1_smk_grn",
            "4thmd_u_40x46_1_smk_ong",
            "4thmd_u_40x46_1_smk_prp",
            "4thmd_u_40x46_1_smk_red",
            "4thmd_u_40x46_1_flr_grn",
            "4thmd_u_40x46_1_flr_ifr",
            "4thmd_u_40x46_1_flr_red",
            "4thmd_u_40x46_1_flr_wht",
            "4thmd_u_40x46_1_flr_ylw",
            "4thmd_u_40x46_1_ilm_wht",
            "4thmd_u_40x46_1_ilm_ifr",
            "4thmd_u_40x46_1_he",
            "4thmd_u_40x46_1_hedp",
            "4thmd_u_40x46_1_stun",
            "4thmd_u_40x46_1_buck",
            "4thmd_u_40x46_1_hunt",
            "4thmd_u_40x46_1_pike",
            "4thmd_u_40x46_1_drn_rc",
            "4thmd_u_40x46_1_drn_he"
        };
    };

    class CBA_40mm_M203_6rnds
    {
        4thmd_mags[] =
        {
            "4thmd_u_40x46_6_hsmk_ylw",
            "4thmd_u_40x46_6_ilm_wht",
            "4thmd_u_40x46_6_ilm_ifr",
            "4thmd_u_40x46_6_he",
            "4thmd_u_40x46_6_hedp",
            "4thmd_u_40x46_6_stun",
            "4thmd_u_40x46_6_buck"
        };
    };
};

class CfgWeapons
{
    class srifle_LRR_F;
    class UK3CB_BAF_L115_Base : srifle_LRR_F
    {
        magazineWell[] = {"CBA_338LM_AI"};
    };

    class Rifle_Base_F;
    class rhs_weap_m32_Base_F : Rifle_Base_F
    {
        magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM","CBA_40mm_M203_6rnds"};
    };
};