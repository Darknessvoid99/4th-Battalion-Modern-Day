class CfgPatches {
    class darkmod_4thmd_fact_bafw
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {   
            "darkmod_4thmd_faction",
            "RKSL_Attachments_core",
            "UK3CB_BAF_Weapons_Accessories"
            };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "1.0.0";
    };
};

class CfgWeapons
{
    class hlc_wp_SCARL_STD;
    class hlc_WP_SCARH_CQC;

    class 4thmd_w_r_55645_scar_st_mb_a_4x : hlc_wp_SCARL_STD
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};

            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "uk3cb_baf_llm_flashlight_black";
			};
		};
    };

    class 4thmd_w_r_55645_scar_st_mb_a_4xt : 4thmd_w_r_55645_scar_st_mb_a_4x
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS_C";
			};
		};
    };

    class 4thmd_w_r_76251_scar_st_sb_a_4x : hlc_WP_SCARH_CQC          //Standard + RCO
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};

            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "uk3cb_baf_llm_flashlight_black";
			};
		};
    };

    class hlc_lmg_MG3KWS_b;
    class 4thmd_w_p_76251_mg3_bk_a_4x : hlc_lmg_MG3KWS_b
    {
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};
		};
    };

    class 4thmd_w_p_76251_mg3_bk_a_6x : 4thmd_w_p_76251_mg3_bk_a_4x
    {
        class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "UK3CB_BAF_TA648_308";
			};
		};
    };

    class hlc_wp_SCARL_STD_EGLM;
    class 4thmd_w_r_55645_scar_st_mb_gl_a_4x : hlc_wp_SCARL_STD_EGLM          //Standard + RCO
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS_C";
			};

            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
    };

    class hlc_wp_SCARL_CQC_EGLM;
    class 4thmd_w_r_55645_scar_st_sb_gl_a_4x : hlc_wp_SCARL_CQC_EGLM          //Standard + RCO
    {
		class LinkedItems
		{
            class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
    };
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}

#define tx_2(a) a, a
#define tx_3(a) a, a, a
#define tx_4(a) a, a, a, a
#define tx_5(a) a, a, a, a, a
#define tx_10(a) a, a, a, a, a, a, a, a, a, a

#define stdmag  "4thmd_m_90119_m15_hkp_s_nt",    \
                "4thmd_m_90119_m15_hkp_s_nt"

class CfgVehicles
{
    class 4thmd_b_mgb3_ar1;
    class 4thmd_b_mgb4_ar1;

    class 4thmd_b_pac1_ar1;
    class 4thmd_b_pac3_ar1;

    class 4thmd_b_mgb2_ar1_gr_baf : 4thmd_b_pac1_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell,5);
        };
    };

	class 4thmd_b_mgb3_ar1_rmv : 4thmd_b_mgb3_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_SmokeShellYellow,2);
        };
    };

    class 4thmd_b_mgb3_ar1_rmvat : 4thmd_b_mgb3_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_SmokeShellYellow,2);
        };
    };

    class 4thmd_b_mgb4_ar1_ch_baf : 4thmd_b_mgb4_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_SmokeShellYellow,2);
        };
    };

    class 4thmd_b_pac3_ar1_ab : 4thmd_b_pac3_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_SmokeShellYellow,2);
        };
    };

	class 4thmd_u_base_ar1;
    class 4thmd_u_rifleman_ar1 : 4thmd_u_base_ar1
	{
		magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_3("4thmd_m_55645_m30_scarp_apo_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_3("4thmd_m_55645_m30_scarp_apo_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_rifleman_vet_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,tx_10("4thmd_m_76251_m20_scarp_so_t3"),tx_5("4thmd_m_76251_m20_scarp_apo_t4"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_76251_m20_scarp_so_t3"),tx_5("4thmd_m_76251_m20_scarp_apo_t4"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_lgunner_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,"4thmd_m_55645_m100_car_so_t3",tx_5("4thmd_m_55645_m50_xar_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,"4thmd_m_55645_m100_car_so_t3",tx_5("4thmd_m_55645_m50_xar_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_mgunner_ar1 : 4thmd_u_lgunner_ar1
	{
		magazines[] = {stdmag,tx_2("4thmd_m_76251_b100_bb_so_t3"),tx_2("4thmd_m_76251_b50_ad_apo_t6_rb"),tx_2("4thmd_m_90119_m15_hkp_s_nt"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_2("4thmd_m_76251_b100_bb_so_t3"),tx_2("4thmd_m_76251_b50_ad_apo_t6_rb"),tx_2("4thmd_m_90119_m15_hkp_s_nt"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_grenadier_ar1 : 4thmd_u_rifleman_ar1
	{
        backpack = "4thmd_b_mgb2_ar1_gr_baf";
	};

    class 4thmd_u_tleader_ar1 : 4thmd_u_rifleman_ar1
	{
        magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("HandGrenade"),tx_2("SmokeShellBlue"),tx_2("UK3CB_BAF_SmokeShellYellow")};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("HandGrenade"),tx_2("SmokeShellBlue"),tx_2("UK3CB_BAF_SmokeShellYellow")};
	};

    class 4thmd_u_tleader_gl_ar1 : 4thmd_u_tleader_ar1
	{
        backpack = "4thmd_b_pac1_ar1_grtl_baf";
        magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),"UK3CB_BAF_SmokeShellYellow",tx_5("1Rnd_HE_Grenade_shell")};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),"UK3CB_BAF_SmokeShellYellow",tx_5("1Rnd_HE_Grenade_shell")};
	};

    class 4thmd_u_marksman_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,tx_5("4thmd_m_76251_m20_scarp_lro_nt"),tx_5("4thmd_m_76251_m20_scarp_apo_nt"),tx_5("4thmd_m_76251_m20_scarp_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_5("4thmd_m_76251_m20_scarp_lro_nt"),tx_5("4thmd_m_76251_m20_scarp_apo_nt"),tx_5("4thmd_m_76251_m20_scarp_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_crew_ar1 : 4thmd_u_base_ar1
    {
		magazines[] = {stdmag,tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("UK3CB_BAF_SmokeShellYellow")};
		respawnMagazines[] = {stdmag,tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("UK3CB_BAF_SmokeShellYellow")};
    };

    class 4thmd_u_crew_h_ar1 : 4thmd_u_crew_ar1
    {
        backpack = "4thmd_b_mgb4_ar1_ch_baf";
    };
};