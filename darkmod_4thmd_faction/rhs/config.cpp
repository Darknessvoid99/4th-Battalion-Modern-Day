class CfgPatches {
    class darkmod_4thmd_fact_rhs
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {   
            "darkmod_4thmd",
            "darkmod_4thmd_ilbe",
            "darkmod_4thmd_mgp",
            "darkmod_4thmd_veh",
            "hlcweapons_SCAR",
            "niaweapons_226",
            "ace_ballistics",
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
/*
class CfgWeapons
{
    class hlc_wp_SCARL_STD;
    class 4thmd_w_r_55645_scar_st_mb_a_4x : hlc_wp_SCARL_STD
    {
        class LinkedItems;
    };

    class 4thmd_w_r_55645_scar_st_mb_a_1x : 4thmd_w_r_55645_scar_st_mb_a_4x       //Standard + XPS3+3x
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3_flip";
			};
		};
    };

    class 4thmd_w_r_55645_scar_st_mb_a_1xt : 4thmd_w_r_55645_scar_st_mb_a_1x     //Standard + XPS3+3x (Tan)
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3_tan_flip";
			};
		};
    };

    class hlc_WP_SCARL_CQC;
    class 4thmd_w_r_55645_scar_st_sb_a_1x : hlc_WP_SCARL_CQC
    {
        class LinkedItems;
    };

    class 4thmd_w_r_55645_scar_st_sb_a_2x : 4thmd_w_r_55645_scar_st_sb_a_1x   //Short Std + T1
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

    class 4thmd_w_r_55645_scar_st_sb_a_1xc : 4thmd_w_r_55645_scar_st_sb_a_2x   //Short Std + compM4
    {
		class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
		};
    };

    class hlc_wp_SCARL_STD_SRX;
    class 4thmd_w_r_55645_scar_st_srx_a_1x : hlc_wp_SCARL_STD_SRX       //Standard + XPS3+3x
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3_flip";
			};
		};
    };

    class hlc_wp_SCAR_PDW;
    class 4thmd_w_rc_55645_scar_st_a_1x : hlc_wp_SCAR_PDW
    {
        class LinkedItems;
    };
    class 4thmd_w_rc_55645_scar_st_a_2x : 4thmd_w_rc_55645_scar_st_a_1x
    {
        class LinkedItems : LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3_tan";
			};

			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_rotex5_tan";
			};
		};
    };
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
        linkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"4thmd_h_mgh2_3_ar1","4thmd_v_mgv2_rm_ar1_b","ItemMap","ItemCompass","TFAR_microdagr","ItemRadio","rhsusf_ANPVS_14"};
    };

    class 4thmd_u_rifleman_ar1;
    class 4thmd_u_rifleman_at_ar1 : 4thmd_u_rifleman_ar1
    {
        weapons[] = {"4thmd_w_r_55645_scar_st_mb_a_1x","4thmd_w_p_90119_p226r_a_1x","rhs_weap_M136_hp","Throw","Put"};
		respawnWeapons[] = {"4thmd_w_r_55645_scar_st_mb_a_1x","4thmd_w_p_90119_p226r_a_1x","rhs_weap_M136_hp","Throw","Put"};
    };

    class 4thmd_u_specialist_haa_ar1 : 4thmd_u_rifleman_at_ar1
    {
        weapons[] = {"4thmd_w_r_55645_scar_st_sb_a_1xc","4thmd_w_p_90119_p226r_a_1x","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"4thmd_w_r_55645_scar_st_sb_a_1xc","4thmd_w_p_90119_p226r_a_1x","rhs_weap_fim92","Throw","Put"};
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

    class 4thmd_u_crew_ar1;
    class 4thmd_u_crew_h_ar1 : 4thmd_u_crew_ar1
    {
        linkedItems[] = {"rhsusf_hgu56p_visor_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"rhsusf_hgu56p_visor_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
    };

    class 4thmd_u_crew_a_ar1 : 4thmd_u_crew_ar1
    {
        linkedItems[] = {"rhsusf_hgu56p_visor_mask_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsusf_hgu56p_visor_mask_green","4thmd_v_mgv2_lt_ar1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
};
*/