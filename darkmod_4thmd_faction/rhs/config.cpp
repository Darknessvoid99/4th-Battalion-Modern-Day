class CfgPatches {
    class darkmod_4thmd_fact_rhs
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {   
                "darkmod_4thmd_faction",
                "rhsusf_weapons",
                "rhsusf_weapons2",
                "rhsusf_weapons3",
                "rhsusf_scopes"
            };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "1.0.0";
    };
};

class CfgMagazines
{
    class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull;
    class 4thmd_m_55645_m30_scarp_so_t3 : rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull {};

    class rhs_mag_100Rnd_556x45_M855A1_cmag;
    class 4thmd_m_55645_m100_car_so_t3 : rhs_mag_100Rnd_556x45_M855A1_cmag {};

    class rhsusf_100Rnd_556x45_soft_pouch_coyote;
    class 4thmd_m_55645_b100_bar_so_t3 : rhsusf_100Rnd_556x45_soft_pouch_coyote {};

    class rhsusf_200Rnd_556x45_soft_pouch_coyote;
    class 4thmd_m_55645_b200_bar_so_t3 : rhsusf_200Rnd_556x45_soft_pouch_coyote {};
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}

class CfgVehicles
{
    class 4thmd_b_pac1_ar1;
    class 4thmd_b_pac1_ar1_gr_baf : 4thmd_b_pac1_ar1
    {
        class TransportMagazines
        {
            mag_xx(rhs_mag_M433_HEDP,5);
        };
    };

    class B_Soldier_F;
    class 4thmd_u_base_ar1 : B_Soldier_F
    {
        class EventHandlers;

        linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","rhsusf_ANPVS_14"};
    };
    class 4thmd_u_base_run_ar1;

    class 4thmd_u_rifleman_ar1;
    class 4thmd_u_rifleman_at_ar1 : 4thmd_u_rifleman_ar1
    {
        weapons[] = {"hlc_wp_SCARL_STD","4thmd_w_p_90119_p226r_a_1x","rhs_weap_M136_hp","Throw","Put"};
		respawnWeapons[] = {"hlc_wp_SCARL_STD","4thmd_w_p_90119_p226r_a_1x","rhs_weap_M136_hp","Throw","Put"};
    };

    class 4thmd_u_specialist_haa_ar1 : 4thmd_u_rifleman_at_ar1
    {
        weapons[] = {"hlc_WP_SCARL_CQC","4thmd_w_p_90119_p226r_a_1x","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"hlc_WP_SCARL_CQC","4thmd_w_p_90119_p226r_a_1x","rhs_weap_fim92","Throw","Put"};
    };

    class 4thmd_u_medic_ar1 : 4thmd_u_rifleman_ar1
    {
        linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_me_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_me_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
    };

    class 4thmd_u_lgunner_ar1 : 4thmd_u_rifleman_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mg_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mg_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_mgunner_ar1 : 4thmd_u_base_run_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mg_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mg_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_grenadier_ar1 : 4thmd_u_rifleman_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_gr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_gr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_tleader_ar1 : 4thmd_u_rifleman_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_tl_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_tl_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_tleader_gl_ar1 : 4thmd_u_tleader_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_gr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_gr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_sleader_ar1;
    class 4thmd_u_pleader_ar1 : 4thmd_u_sleader_ar1
	{
        linkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_4_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_marksman_ar1 : 4thmd_u_rifleman_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_sniper_ar1 : 4thmd_u_base_run_ar1
	{
		linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_mr_ar1_b","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
	};

    class 4thmd_u_crew_a_ar1 : 4thmd_u_base_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_helmrun
            {
                init = "_unit = _this select 0;_helm = ['rhsusf_hgu56p_green','rhsusf_hgu56p_visor_green','rhsusf_hgu56p_visor_mask_green'];_helmrnd = _helm call BIS_fnc_selectRandom;_unit addHeadgear _helmrnd;";
            };
        };

        linkedItems[] = {"rhsusf_hgu56p_visor_mask_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_hgu56p_visor_mask_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };

    class 4thmd_u_crew_h_ar1 : 4thmd_u_crew_a_ar1
    {
        linkedItems[] = {"rhsusf_hgu56p_visor_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_hgu56p_visor_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
    };
};