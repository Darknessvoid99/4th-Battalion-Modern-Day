class CfgPatches {
    class darkmod_4thmd
	{
        weapons[] = 
        {
            " ",
        };
        units[] = 
        {
            " ",
        };
        magazines[] = {};
        requiredAddons[] = 
            {   
            "darkmod_4thmd",
			"darkmod_4thmd_ilbe",
			"darkmod_4thmd_mgp",
            "darkmod_4thmd_veh"
            };

        author = "Darknessvoid99";
        version = "1.0.0";
    };
};
#define DEBUG 2 // 1 = OFF, 2 = ON

class CfgVehicleIcons
{
    iconMan2ic = "darkmod_4thmd_faction\data\iconMan2ic_ca.paa";
};

class CfgEditorSubcategories
{
    class 4thmd_esc_rec
    {
        displayName = "Men (Recon)"
    };

    class 4thmd_esc_rec_g
    {
        displayName = "Men (Recon/Ghillie)"
    };

    class 4thmd_esc_air
    {
        displayName = "Men (Airborne)"
    };

    class 4thmd_esc_sf
    {
        displayName = "Men (Spec Ops)"
    };

    class 4thmd_esc_sf_g
    {
        displayName = "Men (Spec Ops/Ghillie)"
    };

    class 4thmd_esc_sf_d
    {
        displayName = "Men (Spec Ops/Diver)"
    };
};

class CfgWeapons
{
    class hlc_wp_SCARL_STD;
    class 4thmd_w_scar_556_m_a4 : hlc_wp_SCARL_STD          //Standard + RCO
    {
        scope = DEBUG;
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};

            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "uk3cb_baf_llm_flashlight_black";
			};

			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_snds_rotex3p";
			};
		};
    };

    class 4thmd_w_scar_556_m_a4_t : 4thmd_w_scar_556_m_a4      //Standard + RCO(tan)
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco";
			};
		};
    };

    class 4thmd_w_scar_556_m_h3 : 4thmd_w_scar_556_m_a4       //Standard + XPS3+3x
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3";
			};
			
			class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "hlc_grip_pmvfg_black";
            };
		};
    };

    class 4thmd_w_scar_556_m_h3_t : 4thmd_w_scar_556_m_h3     //Standard + XPS3+3x (Tan)
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3_tan";
			};
		};
    };

    class 4thmd_w_scar_556_m_t3 : 4thmd_w_scar_556_m_h3      //Standard + T1+3x
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_t1";
			};
		};
    };

    class hlc_WP_SCARL_CQC;
    class 4thmd_w_scar_556_s_h1                             //Standard + XPS3
    {
        scope = DEBUG;
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_holosight_blk_f";
			};

            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "uk3cb_baf_llm_flashlight_black";
			};

			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_snds_rotex3p";
			};

            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "hlc_grip_pmvfg_black";
            };
		};
    };

    class 4thmd_w_scar_556_s_h1_t : 4thmd_w_scar_556_s_h1   //Short Std + XPS3 (Tan)
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_holosight";
			};
		};
    };

    class 4thmd_w_scar_556_s_t1 : 4thmd_w_scar_556_s_h1   //Short Std + T1
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_t1_high";
			};
		};
    };

    class 4thmd_w_scar_556_s_c1 : 4thmd_w_scar_556_s_h1   //Short Std + compM4
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
		};
    };

    class hlc_pistol_P226R_Combat;
    class 4thmd_w_p226r_90119_r1 : hlc_pistol_P226R_Combat
    {
        scope = DEBUG;
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_romeo1_rx";
			};
		};
    };

    class 4thmd_w_p226r_90119_r1x : 4thmd_w_p226r_90119_r1
    {
        scope = DEBUG;
        class LinkedItems : LinkedItems
		{
            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "hlc_acc_dbalpl_fl";
			};

			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_tirant9";
			};
		};
    };

/*
    #include "CfgW_weap_wd.hpp"
    #include "CfgW_weap_de.hpp"
    #include "CfgW_weap_bl.hpp"
    #include "CfgW_weap_ac.hpp"
    #include "CfgW_weap_ju.hpp"
*/
};

class CfgAmmo
{
//5.56x45mm
    class rhs_ammo_556x45_M855A1_Ball_Orange;   //Standard/Orange
    class 4thmd_a_55645_m855a1_o : rhs_ammo_556x45_M855A1_Ball_Orange
	{
		tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 1.6;
	};

    class rhs_ammo_556x45_M995_AP;  //Armor Piercing/Orange
    class 4thmd_a_55645_m995_o : rhs_ammo_556x45_M995_AP
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
        tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 1.6;
    };

    class rhs_ammo_556x45_Mk262_Ball;   //Special Ballistic Long Range/Orange
    class 4thmd_a_55645_mk262_o : rhs_ammo_556x45_M995_AP
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
        tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 1.6;
    };

//7.62x51mm
    class rhs_ammo_762x51_M80A1EPR_Ball;
    class 4thmd_a_76251_m80a1_o : rhs_ammo_762x51_M80A1EPR_Ball
    {
        tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 2;
    };

    class rhs_ammo_762x51_M61_AP;
    class 4thmd_a_76251_m61_o : rhs_ammo_762x51_M61_AP
    {
        tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 2;
    };

    class rhs_ammo_762x51_M118_Special_Ball;
    class 4thmd_a_76251_m118_o : rhs_ammo_762x51_M118_Special_Ball
    {
        tracerColor[] = {1,0.9,0.5,0.1};
        tracerColorR[] = {1,0.9,0.5,0.1};
		tracerScale = 2;
    };
};

class CfgMagazines
{
        //4thmd_Magazine_5.56x45mm_Magazine/30rnds_SCar/ARid/Puller_Standard/Orange_Tracer every 3
//SCAR 30rnd Magazine
    class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull;
    class 4thmd_m_55645_m30_scarp_so_t3 : rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull
    {
        displayName = "30rnd 5.56x45mm Ball-O(T3E3) SCARMAG";
		displayNameShort = "Ball-O T3E3";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m855a1_o";
		mass = 10;
		lastRoundsTracer = 3;
		tracersEvery = 3;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_545x45_tracer_1Rnd";
		greenmag_basicammo="greenmag_ammo_545x45_basic_1Rnd";
    };

    class 4thmd_m_55645_m30_scarp_s_nt : 4thmd_m_55645_m30_scarp_so_t3
    {
        displayName = "30rnd 5.56x45mm Ball SCARMAG";
		displayNameShort = "Ball NT";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers";
		lastRoundsTracer = 0;
		tracersEvery = 0;
    };

    class 4thmd_m_55645_m30_scarp_so_t : 4thmd_m_55645_m30_scarp_so_t3
    {
        displayName = "30rnd 5.56x45mm Ball-O(T) SCARMAG";
		displayNameShort = "Ball-O T";
		descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
		lastRoundsTracer = 1;
		tracersEvery = 1;
    };

    class 4thmd_m_55645_m30_scarp_apo_t3 : 4thmd_m_55645_m30_scarp_so_t3
    {
        displayName = "30rnd 5.56x45mm AP-O(T3E3) SCARMAG";
		displayNameShort = "AP-O T3E3";
		descriptionShort = "M995 Armor-Piercing Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m995_o";
    };

    class 4thmd_m_55645_m30_scarp_ap_nt : 4thmd_m_55645_m30_scarp_apo_t3
    {
        displayName = "30rnd 5.56x45mm AP SCARMAG";
		displayNameShort = "AP NT";
		descriptionShort = "M995 Armor-Piercing Rounds<br/>No Tracers";
		lastRoundsTracer = 0;
		tracersEvery = 0;
    };

    class 4thmd_m_55645_m30_scarp_slr_nt : 4thmd_m_55645_m30_scarp_so_t3
    {
        displayName = "30rnd 5.56x45mm SBLR SCARMAG";
		displayNameShort = "SBLR NT";
		descriptionShort = "M995 Special Ballistic Long Range Rounds<br/>No Tracers";
		ammo = "4thmd_a_55645_mk262_o";
        lastRoundsTracer = 0;
		tracersEvery = 0;
    };

//X-15 50rnd Drum
    class hlc_50rnd_556x45_EPR;
    class 4thmd_m_55645_m50_xar_so_t3 : hlc_50rnd_556x45_EPR
    {
        displayName = "50rnd 5.56x45mm Ball-O(T3E3) X-Mag";
		displayNameShort = "Ball-O T3E3";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m855a1_o";
		mass = 20;
		lastRoundsTracer = 3;
		tracersEvery = 3;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_545x45_tracer_1Rnd";
		greenmag_basicammo="greenmag_ammo_545x45_basic_1Rnd";
    };

    class 4thmd_m_55645_m50_xar_so_t : 4thmd_m_55645_m50_xar_so_t3
    {
        displayName = "50rnd 5.56x45mm Ball-O(T) X-MAG";
		displayNameShort = "Ball-O T";
		descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
        lastRoundsTracer = 1;
		tracersEvery = 1;
    };

//C-MAG 100rnd Drum
    class rhs_mag_100Rnd_556x45_M855A1_cmag;
    class 4thmd_m_55645_m100_car_so_t3 : rhs_mag_100Rnd_556x45_M855A1_cmag
    {
        displayName = "100rnd 5.56x45mm Ball-O(T3E3) C-MAG";
		displayNameShort = "Ball-O T3E3";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m855a1_o";
		mass = 40;
		lastRoundsTracer = 3;
		tracersEvery = 3;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_545x45_tracer_1Rnd";
		greenmag_basicammo="greenmag_ammo_545x45_basic_1Rnd";
    };
    class 4thmd_m_55645_m100_car_so_t : 4thmd_m_55645_m100_car_so_t3
    {
        displayName = "100rnd 5.56x45mm Ball-O(T) C-MAG";
		displayNameShort = "Ball-O T";
		descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
        lastRoundsTracer = 1;
		tracersEvery = 1;
    };
    class 4thmd_m_55645_m100_car_s_nt : 4thmd_m_55645_m100_car_so_t3
    {
        displayName = "100rnd 5.56x45mm Ball C-MAG";
		displayNameShort = "Ball NT";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>No Tracers";
		lastRoundsTracer = 0;
		tracersEvery = 0;
    };
//5.56x45mm 100rnd Box
    class rhsusf_100Rnd_556x45_soft_pouch_coyote;
    class 4thmd_m_55645_b100_bar_so_t3 : rhsusf_100Rnd_556x45_soft_pouch_coyote
    {
        displayName = "100rnd 5.56x45mm Ball-O(T3E3) Softpack";
		displayNameShort = "Ball-O T3E3";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m855a1_o";
		mass = 30;
		lastRoundsTracer = 3;
		tracersEvery = 3;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_545x45_tracer_1Rnd";
		greenmag_basicammo="greenmag_ammo_545x45_basic_1Rnd";
    };
    class 4thmd_m_55645_b100_bar_so_t : 4thmd_m_55645_b100_bar_so_t3
    {
        displayName = "100rnd 5.56x45mm Ball-O(T) Softpack";
		displayNameShort = "Ball-O T";
		descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
        lastRoundsTracer = 1;
		tracersEvery = 1;
    };
    class 4thmd_m_55645_b100_bar_apo_t3 : 4thmd_m_55645_b100_bar_so_t3
    {
        displayName = "100rnd 5.56x45mm Ball-O(T3E5) Softpack";
		displayNameShort = "AP-O T3E5";
		descriptionShort = "M995 Armor-Piercing Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m995_o";
        lastRoundsTracer = 5;
    };
//5.56x45mm 200rnd Box
    class rhsusf_200Rnd_556x45_soft_pouch_coyote;
    class 4thmd_m_55645_b200_bar_so_t3 : rhsusf_200Rnd_556x45_soft_pouch_coyote
    {
        displayName = "200rnd 5.56x45mm Ball-O(T3E3) Softpack";
		displayNameShort = "Ball-O T3E3";
		descriptionShort = "M855A1 Enhanced Preformance Rounds<br/>M856A1 Enhanced Tracer Rounds<br/>Tracer every 3, 3 End Tracers";
		ammo = "4thmd_a_55645_m855a1_o";
		mass = 55;
		lastRoundsTracer = 3;
		tracersEvery = 3;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_545x45_tracer_1Rnd";
		greenmag_basicammo="greenmag_ammo_545x45_basic_1Rnd";
    };
    class 4thmd_m_55645_b200_bar_so_t : 4thmd_m_55645_b200_bar_so_t3
    {
        displayName = "200rnd 5.56x45mm Ball-O(T) Softpack";
		displayNameShort = "Ball-O T";
		descriptionShort = "M856A1 Enhanced Tracer Rounds<br/>All Tracers";
        lastRoundsTracer = 1;
		tracersEvery = 1;
    };

//9x19mm
    class hlc_15Rnd_9x19_B_P226;
    class 4thmd_m_90119_m15_hkp_s_nt : hlc_15Rnd_9x19_B_P226
    {
        displayName = "15rnd 9x19mm Ball Magazine";
		displayNameShort = "Ball NT";
		descriptionShort = "M882 Full Metal Jacket Rounds<br/>No Tracers";
        mass = 3.5;
    };
};

class CfgMagazineWells
{
    class CBA_556x45_STANAG
    {
        4thmd_mags[] = {"4thmd_m_55645_m30_scarp_so_t3","4thmd_m_55645_m30_scarp_s_nt","4thmd_m_55645_m30_scarp_so_t","4thmd_m_55645_m30_scarp_apo_t3","4thmd_m_55645_m30_scarp_ap_nt","4thmd_m_55645_m30_scarp_slr_nt","4thmd_m_55645_m50_xar_so_t3","4thmd_m_55645_m50_xar_so_t","4thmd_m_55645_m100_car_so_t3","4thmd_m_55645_m100_car_so_t","4thmd_m_55645_m100_car_s_nt"};
    };
    
    class CBA_556x45_MINIMI
    {
        4thmd_mags[] = {"4thmd_m_55645_b100_bar_so_t3","4thmd_m_55645_b100_bar_so_t","4thmd_m_55645_b200_bar_so_t3","4thmd_m_55645_b200_bar_so_t","4thmd_m_55645_b100_bar_apo_t3"};
    };

    class CBA_9x19_P226
    {
        4thmd_mags[] = {"4thmd_m_90119_m15_hkp_s_nt"};
    };
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define tx_11(a) a, a, a, a, a, a, a, a, a, a, a
#define stditem "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","kat_IV_16","ACE_morphine","ACE_salineIV_250","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_MapTools","ACE_Chemlight_Shield_White","ACE_EntrenchingTool","ACE_Canteen"

class CfgVehicles
{
    class 4thmd_b_mgb2_ar1;
    class 4thmd_b_mgb2_ar1_std : 4thmd_b_mgb2_ar1
    {
        scope = DEBUG;
        class TransportMagazines
        {
            mag_xx(HandGrenade,1);
        };
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,4);
        };
    };

    class 4thmd_b_pac2_ar1;
    class 4thmd_b_pac2_ar1_med : 4thmd_b_pac2_ar1
    {
        scope = DEBUG;
        class TransportMagazines
        {
            mag_xx(kat_Painkiller,5);
            mag_xx(UK3CB_BAF_SmokeShellYellow,2);
        };
        class TransportItems
        {
            item_xx(ACE_elasticBandage,15);
            item_xx(ACE_epinephrine,9);
            item_xx(ACE_morphine,7);
            item_xx(kat_naloxone,2);
            item_xx(ACE_splint,4);
            item_xx(ACE_tourniquet,4);
            item_xx(kat_IO_FAST,2);
            item_xx(kat_IV_16,10);
            item_xx(KAT_Empty_bloodIV_500,3);
            item_xx(kat_chestSeal,2);
            item_xx(kat_ncdKit,1);
            item_xx(ACE_salineIV,1);
            item_xx(kat_bloodIV_O_N_500,1);
            item_xx(kat_bloodIV_B_N_250,1);
            item_xx(kat_bloodIV_A_N_500,1);
            item_xx(kat_bloodIV_O_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_A_500,1);
            item_xx(kat_Pulseoximeter,1);
            item_xx(ACE_surgicalKit,1);
        };
    };

    class 4thmd_b_pac3_ar1;
    class 4thmd_b_pac3_ar1_med : 4thmd_b_pac3_ar1
    {
        scope = DEBUG;
        class TransportMagazines
        {
            mag_xx(SmokeShellPurple,1);
        };
        class TransportItems
        {
            item_xx(ACE_elasticBandage,10);
            item_xx(ACE_epinephrine,5);
            item_xx(kat_naloxone,2);
            item_xx(ACE_splint,2);
            item_xx(ACE_tourniquet,4);
            item_xx(kat_IO_FAST,4);
            item_xx(kat_IV_16,6);
            item_xx(KAT_Empty_bloodIV_500,1);
            item_xx(kat_chestSeal,3);
            item_xx(kat_ncdKit,2);
            item_xx(kat_aatKit,2);
            item_xx(kat_fentanyl,4);
            item_xx(kat_lidocaine,8);
            item_xx(kat_nitroglycerin,2);
            item_xx(kat_norepinephrine,2);
            item_xx(kat_plate,3);
            item_xx(kat_scalpel,5);
            item_xx(kat_etomidate,3);
            item_xx(kat_EACA,1);
            item_xx(kat_clamp,1);
            item_xx(kat_flumazenil,2);
            item_xx(kat_retractor,1);
            item_xx(kat_X_AED,1);
            item_xx(ACE_salineIV_250,4);
            item_xx(ACE_salineIV_500,1);
            item_xx(kat_bloodIV_A_N_250,1);
            item_xx(kat_bloodIV_A_N_500,1);
            item_xx(kat_bloodIV_B_N_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_B_500,1);
            item_xx(kat_bloodIV_A_250,1);
            item_xx(kat_bloodIV_O_250,1);
            item_xx(kat_bloodIV_AB_N_500,1);
            item_xx(kat_Pulseoximeter,1);
            item_xx(ACE_surgicalKit,1);
        };
    };

    class 4thmd_rad1_blade_ar1;
    class 4thmd_rad1_blade_ar1_med : 4thmd_rad1_blade_ar1
    {
        scope = DEBUG;
        class TransportMagazines
        {
            mag_xx(SmokeShellBlue,1);
            mag_xx(SmokeShellPurple,1);
        };
        class TransportItems
        {
            item_xx(ACE_elasticBandage,5);
            item_xx(ACE_epinephrine,5);
            item_xx(kat_naloxone,2);
            item_xx(ACE_splint,1);
            item_xx(ACE_tourniquet,2);
            item_xx(kat_IO_FAST,2);
            item_xx(kat_IV_16,3);
            item_xx(kat_chestSeal,1);
            item_xx(kat_aatKit,1);
            item_xx(kat_fentanyl,2);
            item_xx(kat_lidocaine,5);
            item_xx(kat_norepinephrine,1);
            item_xx(kat_plate,7);
            item_xx(kat_scalpel,9);
            item_xx(kat_lorazepam,1);
            item_xx(kat_etomidate,8);
            item_xx(kat_EACA,3);
            item_xx(kat_clamp,1);
            item_xx(kat_flumazenil,3);
            item_xx(kat_retractor,1);
            item_xx(kat_X_AED,1);
            item_xx(ACE_salineIV_250,6);
            item_xx(kat_bloodIV_O_N_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_B_N_250,1);
            item_xx(kat_bloodIV_A_250,1);
            item_xx(kat_bloodIV_O_250,1);
            item_xx(kat_bloodIV_AB_N_500,1);
            item_xx(kat_Pulseoximeter,1);
            item_xx(ACE_surgicalKit,1);
            item_xx(kat_vacuum,1);
        };
    };

    class B_Soldier_F;
    class 4thmd_u_rifleman_ar1 : B_Soldier_F
	{
		side = 1;
		author = "Darknessvoid99";
		displayName = "Rifleman";
		icon = "iconMan";
		faction = "4thmd_ar_faction";
		editorSubcategory = "EdSubcat_Personnel";
        uniformClass = "4thmd_u_unif1_ar1";
        backpack = "4thmd_b_mgb2_ar1_std";
		weapons[] = {"4thmd_w_scar_556_m_h3","4thmd_w_p226r_90119_r1","Throw","Put"};
		respawnWeapons[] = {"4thmd_w_scar_556_m_h3","4thmd_w_p226r_90119_r1","Throw","Put"};
        Items[] = {stditem};
		RespawnItems[] = {stditem};
		magazines[] = {"kat_Painkiller",tx_11("4thmd_m_55645_m30_scarp_so_t3"),"4thmd_m_55645_m30_scarp_ap_nt","4thmd_m_55645_m30_scarp_ap_nt","4thmd_m_90119_m15_hkp_s_nt","4thmd_m_90119_m15_hkp_s_nt","HandGrenade","UK3CB_BAF_SmokeShellYellow","UK3CB_BAF_SmokeShellYellow","SmokeShellRed","ACE_Chemlight_IR"};
		respawnMagazines[] = {"kat_Painkiller",tx_11("4thmd_m_55645_m30_scarp_so_t3"),"4thmd_m_55645_m30_scarp_ap_nt","4thmd_m_55645_m30_scarp_ap_nt","4thmd_m_90119_m15_hkp_s_nt","4thmd_m_90119_m15_hkp_s_nt","HandGrenade","UK3CB_BAF_SmokeShellYellow","UK3CB_BAF_SmokeShellYellow","SmokeShellRed","ACE_Chemlight_IR"};
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","TFAR_rf7800str","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","TFAR_rf7800str","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_rifleman_at_ar1 : 4thmd_u_rifleman_ar1
    {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        weapons[] = {"4thmd_w_scar_556_m_h3","4thmd_w_p226r_90119_r1","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"4thmd_w_scar_556_m_h3","4thmd_w_p226r_90119_r1","rhs_weap_M136","Throw","Put"};
    };

    class 4thmd_u_rifleman_vet_ar1 : 4thmd_u_rifleman_at_ar1
    {
        displayName = "Rifleman (Veteran)";
        weapons[] = {"4thmd_w_scar_556_m_a4","4thmd_w_p226r_90119_r1","rhs_weap_M136_hp","Throw","Put"};
		respawnWeapons[] = {"4thmd_w_scar_556_m_a4","4thmd_w_p226r_90119_r1","rhs_weap_M136_hp","Throw","Put"};
    };

    class 4thmd_u_corpsman_ar1 : 4thmd_u_rifleman_ar1
    {
        displayName = "Corpsman";
        icon = "iconManMedic";
        attendant = 1;
        uniformClass = "4thmd_u_unif1_ar1_ss";
        backpack = "4thmd_b_pac2_ar1_med";
        linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_me_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","TFAR_rf7800str","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_me_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","TFAR_rf7800str","rhsusf_ANPVS_14"};
    };


/*
    #include "CfgV_men_wd.hpp"
    #include "CfgV_men_de.hpp"
    #include "CfgV_men_bl.hpp"
    #include "CfgV_men_ac.hpp"
    #include "CfgV_men_ju.hpp"
*/
};