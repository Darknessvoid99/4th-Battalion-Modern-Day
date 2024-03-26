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

class CfgMagazineWells
{
    class CBA_40mm_EGLM
    {
        bafdoyourjob[] =
        {
            "UK3CB_BAF_1Rnd_HE_Grenade_Shell",
            "UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
            "UK3CB_BAF_1Rnd_Blank_Grenade_Shell",
            "UK3CB_BAF_UGL_FlareWhite_F",
            "UK3CB_BAF_UGL_FlareRed_F",
            "UK3CB_BAF_UGL_FlareGreen_F",
            "UK3CB_BAF_UGL_FlareYellow_F",
            "UK3CB_BAF_UGL_FlareCIR_F",
            "UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell",
            "UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell"
        };
    };
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}

#define tx_2(a) a, a
#define tx_3(a) a, a, a
#define tx_4(a) a, a, a, a
#define tx_5(a) a, a, a, a, a
#define tx_6(a) a, a, a, a, a, a
#define tx_10(a) a, a, a, a, a, a, a, a, a, a

#define stdmag  "4thmd_m_90119_m15_psm_s_nt",    \
                "4thmd_m_90119_m15_psm_s_nt"

class CfgVehicles
{
    class 4thmd_b_mgb3_ar1;
    class 4thmd_b_mgb4_ar1;

    class 4thmd_b_pac1_ar1;
    class 4thmd_b_pac3_ar1;

    class 4thmd_rad1_blade_ar1;

    class 4thmd_b_pac1_ar1_gr : 4thmd_b_pac1_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell,5);
        };
    };

    class 4thmd_b_pac1_ar1_grtl : 4thmd_b_pac1_ar1_gr
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

    class 4thmd_b_mgb4_ar1_ch : 4thmd_b_mgb3_ar1
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

    class 4thmd_b_rad1_blade_ar1_grsl : 4thmd_rad1_blade_ar1
    {
        class TransportMagazines
        {
            mag_xx(UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell,5);
        };
    };

	class 4thmd_u_base_run_ar1;
    class 4thmd_u_rifleman_ar1 : 4thmd_u_base_run_ar1
	{
		magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_3("4thmd_m_55645_m30_scarp_apo_t5"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_3("4thmd_m_55645_m30_scarp_apo_t5"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_rifleman_vet_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,tx_10("4thmd_m_76251_m20_scarp_so_t3"),tx_5("4thmd_m_76251_m20_scarp_apo_t4"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_76251_m20_scarp_so_t3"),tx_5("4thmd_m_76251_m20_scarp_apo_t4"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_agunner_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,"4thmd_m_55645_m100_car_so_t3",tx_5("4thmd_m_55645_m50_xar_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,"4thmd_m_55645_m100_car_so_t3",tx_5("4thmd_m_55645_m50_xar_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_mgunner_ar1 : 4thmd_u_base_run_ar1
	{
		magazines[] = {stdmag,tx_2("4thmd_m_76251_b100_bb_so_t3"),tx_2("4thmd_m_76251_b50_ad_apo_t6_rb"),tx_2("4thmd_m_90119_m15_psm_s_nt"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_2("4thmd_m_76251_b100_bb_so_t3"),tx_2("4thmd_m_76251_b50_ad_apo_t6_rb"),tx_2("4thmd_m_90119_m15_psm_s_nt"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_lgunner_ar1 : 4thmd_u_mgunner_ar1
	{
		magazines[] = {stdmag,tx_3("4thmd_m_55645_b200_bar_so_t3"),"4thmd_m_55645_b100_bar_apo_t5","4thmd_m_55645_b100_bar_so_t","HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_3("4thmd_m_55645_b200_bar_so_t3"),"4thmd_m_55645_b100_bar_apo_t5","4thmd_m_55645_b100_bar_so_t","HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_tleader_ar1 : 4thmd_u_rifleman_ar1
	{
        magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("HandGrenade"),tx_2("SmokeShellBlue"),tx_2("UK3CB_BAF_SmokeShellYellow")};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("HandGrenade"),tx_2("SmokeShellBlue"),tx_2("UK3CB_BAF_SmokeShellYellow")};
	};

    class 4thmd_u_tleader_gl_ar1 : 4thmd_u_tleader_ar1
	{
        magazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),"UK3CB_BAF_SmokeShellYellow",tx_5("1Rnd_HE_Grenade_shell")};
		respawnMagazines[] = {stdmag,tx_10("4thmd_m_55645_m30_scarp_so_t3"),tx_5("4thmd_m_55645_m30_scarp_so_t"),"UK3CB_BAF_SmokeShellYellow",tx_5("1Rnd_HE_Grenade_shell")};
	};

    class 4thmd_u_marksman_ar1 : 4thmd_u_rifleman_ar1
	{
		magazines[] = {stdmag,tx_5("4thmd_m_76251_m20_scarp_lro_nt"),tx_5("4thmd_m_76251_m20_scarp_apo_nt"),tx_5("4thmd_m_76251_m20_scarp_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
		respawnMagazines[] = {stdmag,tx_5("4thmd_m_76251_m20_scarp_lro_nt"),tx_5("4thmd_m_76251_m20_scarp_apo_nt"),tx_5("4thmd_m_76251_m20_scarp_so_t3"),"HandGrenade","UK3CB_BAF_SmokeShellYellow"};
	};

    class 4thmd_u_crew_a_ar1;
    class 4thmd_u_crew_ar1 : 4thmd_u_crew_a_ar1
    {
		magazines[] = {stdmag,tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("UK3CB_BAF_SmokeShellYellow")};
		respawnMagazines[] = {stdmag,tx_5("4thmd_m_55645_m30_scarp_so_t"),tx_2("UK3CB_BAF_SmokeShellYellow")};
    };
};