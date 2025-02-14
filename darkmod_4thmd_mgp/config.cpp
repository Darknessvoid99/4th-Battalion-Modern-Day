class CfgPatches
{
    class darkmod_4thmd_mgp
	{
        weapons[] = 
        {
            "4thmd_v_mgv2_rm_ar0",
            "4thmd_v_mgv2_gr_ar0",
            "4thmd_v_mgv2_mg_ar0",
            "4thmd_v_mgv2_lt_ar0",
            "4thmd_v_mgv2_mr_ar0",
            "4thmd_v_mgv2_me_ar0",
            "4thmd_v_mgv2_en_ar0",
            "4thmd_v_mgv2_tl_ar0",
            "4thmd_v_mgv2_rm_ar0_b",
            "4thmd_v_mgv2_gr_ar0_b",
            "4thmd_v_mgv2_mg_ar0_b",
            "4thmd_v_mgv2_mr_ar0_b",
            "4thmd_v_mgv2_me_ar0_b",
            "4thmd_v_mgv2_en_ar0_b",
            "4thmd_v_mgv2_tl_ar0_b",
            "4thmd_v_mgbb_rm_ar0",
            "4thmd_v_mgbb_mg_ar0",
            "4thmd_h_mgh1_1_ar0",
            "4thmd_h_mgh1_1_ar0_g",
            "4thmd_h_mgh1_2_ar0",
            "4thmd_h_mgh1_2_ar0_g",
            "4thmd_h_mgh1_3_ar0",
            "4thmd_h_mgh1_3_ar0_g",
            "4thmd_h_mgh1_4_ar0",
            "4thmd_h_mgh1_4_ar0_g",
            "4thmd_h_mgh1_5_ar0",
            "4thmd_h_mgh1_5_ar0_g",
            "4thmd_h_mgh1_6_ar0",
            "4thmd_h_mgh1_6_ar0_g",
            "4thmd_h_mgh2_1_ar0",
            "4thmd_h_mgh2_1_ar0_g",
            "4thmd_h_mgh2_2_ar0",
            "4thmd_h_mgh2_2_ar0_g",
            "4thmd_h_mgh2_3_ar0",
            "4thmd_h_mgh2_3_ar0_g",
            "4thmd_h_mgh2_4_ar0",
            "4thmd_h_mgh2_4_ar0_g",
            "4thmd_h_mgh2_5_ar0",
            "4thmd_h_mgh2_5_ar0_g",
            "4thmd_h_mgh2_6_ar0",
            "4thmd_h_mgh2_6_ar0_g",

            "4thmd_v_mgv2_rm_wd1",
            "4thmd_v_mgv2_gr_wd1",
            "4thmd_v_mgv2_mg_wd1",
            "4thmd_v_mgv2_lt_wd1",
            "4thmd_v_mgv2_mr_wd1",
            "4thmd_v_mgv2_me_wd1",
            "4thmd_v_mgv2_en_wd1",
            "4thmd_v_mgv2_tl_wd1",
            "4thmd_v_mgv2_rm_wd1_b",
            "4thmd_v_mgv2_gr_wd1_b",
            "4thmd_v_mgv2_mg_wd1_b",
            "4thmd_v_mgv2_mr_wd1_b",
            "4thmd_v_mgv2_me_wd1_b",
            "4thmd_v_mgv2_en_wd1_b",
            "4thmd_v_mgv2_tl_wd1_b",
            "4thmd_v_mgbb_rm_wd1",
            "4thmd_v_mgbb_mg_wd1",
            "4thmd_h_mgh1_1_wd1",
            "4thmd_h_mgh1_1_wd1_g",
            "4thmd_h_mgh1_2_wd1",
            "4thmd_h_mgh1_2_wd1_g",
            "4thmd_h_mgh1_3_wd1",
            "4thmd_h_mgh1_3_wd1_g",
            "4thmd_h_mgh1_4_wd1",
            "4thmd_h_mgh1_4_wd1_g",
            "4thmd_h_mgh1_5_wd1",
            "4thmd_h_mgh1_5_wd1_g",
            "4thmd_h_mgh1_6_wd1",
            "4thmd_h_mgh1_6_wd1_g",
            "4thmd_h_mgh2_1_wd1",
            "4thmd_h_mgh2_1_wd1_g",
            "4thmd_h_mgh2_2_wd1",
            "4thmd_h_mgh2_2_wd1_g",
            "4thmd_h_mgh2_3_wd1",
            "4thmd_h_mgh2_3_wd1_g",
            "4thmd_h_mgh2_4_wd1",
            "4thmd_h_mgh2_4_wd1_g",
            "4thmd_h_mgh2_5_wd1",
            "4thmd_h_mgh2_5_wd1_g",
            "4thmd_h_mgh2_6_wd1",
            "4thmd_h_mgh2_6_wd1_g"
        };
        units[] = 
        {
            "4thmd_b_pac4_ar0",
            "4thmd_b_mgb1_ar0",
            "4thmd_b_mgb2_ar0",
            "4thmd_b_mgb3_ar0",
            "4thmd_b_mgb4_ar0",

            "4thmd_b_pac4_wd1",
            "4thmd_b_mgb1_wd1",
            "4thmd_b_mgb2_wd1",
            "4thmd_b_mgb3_wd1",
            "4thmd_b_mgb4_wd1"
        };
        magazines[] = {};
        requiredAddons[] = 
            {   
                "darkmod_4thmd",
                "milgp_data",
                "milgp_headgear",
                "milgp_headgear_cfg",
                "milgp_uniforms",
                "milgp_uniforms_cfg",
                "milgp_vests",
                "milgp_vests_cfg"
            };
        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.0.2402120156";
    };
};

class CfgWeapons
{
    //MarCiras Vests (mgv2)
        //Standard
            class milgp_v_marciras_assaulter_khk;
            class 4thmd_v_mgv2_rmn_ar0 : milgp_v_marciras_assaulter_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar1 : 4thmd_v_mgv2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar2 : 4thmd_v_mgv2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar3 : 4thmd_v_mgv2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_medic_khk;
            class 4thmd_v_mgv2_med_ar0 : milgp_v_marciras_medic_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar1 : 4thmd_v_mgv2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar2 : 4thmd_v_mgv2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar3 : 4thmd_v_mgv2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar0 : 4thmd_v_mgv2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar1 : 4thmd_v_mgv2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar2 : 4thmd_v_mgv2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar3 : 4thmd_v_mgv2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar0 : 4thmd_v_mgv2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar1 : 4thmd_v_mgv2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar2 : 4thmd_v_mgv2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar3 : 4thmd_v_mgv2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_teamleader_KHK;
            class 4thmd_v_mgv2_ldr_ar0 : milgp_v_marciras_teamleader_KHK
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar1 : 4thmd_v_mgv2_ldr_ar0
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar2 : 4thmd_v_mgv2_ldr_ar0
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar3 : 4thmd_v_mgv2_ldr_ar0
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_grenadier_khk;
            class 4thmd_v_mgv2_gdr_ar0 : milgp_v_marciras_grenadier_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar1 : 4thmd_v_mgv2_gdr_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar2 : 4thmd_v_mgv2_gdr_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar3 : 4thmd_v_mgv2_gdr_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_hgunner_khk;
            class 4thmd_v_mgv2_mgs_ar0 : milgp_v_marciras_hgunner_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar1 : 4thmd_v_mgv2_mgs_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar2 : 4thmd_v_mgv2_mgs_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar3 : 4thmd_v_mgv2_mgs_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_marksman_khk;
            class 4thmd_v_mgv2_mkn_ar0 : milgp_v_marciras_marksman_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar1 : 4thmd_v_mgv2_mkn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar2 : 4thmd_v_mgv2_mkn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar3 : 4thmd_v_mgv2_mkn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_light_khk;
            class 4thmd_v_mgv2_lgt_ar0 : milgp_v_marciras_light_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa"
                };
            };

            class 4thmd_v_mgv2_lgt_ar1 : 4thmd_v_mgv2_lgt_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa"
                };
            };

            class 4thmd_v_mgv2_lgt_ar2 : 4thmd_v_mgv2_lgt_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa"
                };
            };

            class 4thmd_v_mgv2_lgt_ar3 : 4thmd_v_mgv2_lgt_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa"
                };
            };

        // Belted
            class milgp_v_marciras_assaulter_belt_khk;
            class 4thmd_v_mgv2_rmn_ar0_b : milgp_v_marciras_assaulter_belt_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar1_b : 4thmd_v_mgv2_rmn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar2_b : 4thmd_v_mgv2_rmn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_rmn_ar3_b : 4thmd_v_mgv2_rmn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_medic_belt_khk;
            class 4thmd_v_mgv2_med_ar0_b : milgp_v_marciras_medic_belt_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar1_b : 4thmd_v_mgv2_med_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar2_b : 4thmd_v_mgv2_med_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_med_ar3_b : 4thmd_v_mgv2_med_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_m_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar0_b : 4thmd_v_mgv2_rmn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar1_b : 4thmd_v_mgv2_eng_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar2_b : 4thmd_v_mgv2_eng_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eng_ar3_b : 4thmd_v_mgv2_eng_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_e_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar0_b : 4thmd_v_mgv2_med_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar1_b : 4thmd_v_mgv2_eos_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar2_b : 4thmd_v_mgv2_eos_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_eos_ar3_b : 4thmd_v_mgv2_eos_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_teamleader_belt_KHK;
            class 4thmd_v_mgv2_ldr_ar0_b : milgp_v_marciras_teamleader_belt_KHK
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar1_b : 4thmd_v_mgv2_ldr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar2_b : 4thmd_v_mgv2_ldr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_ldr_ar3_b : 4thmd_v_mgv2_ldr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_grenadier_belt_khk;
            class 4thmd_v_mgv2_gdr_ar0_b : milgp_v_marciras_grenadier_belt_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar1_b : 4thmd_v_mgv2_gdr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar2_b : 4thmd_v_mgv2_gdr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_gdr_ar3_b : 4thmd_v_mgv2_gdr_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_hgunner_belt_khk;
            class 4thmd_v_mgv2_mgs_ar0_b : milgp_v_marciras_hgunner_belt_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar1_b : 4thmd_v_mgv2_mgs_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar2_b : 4thmd_v_mgv2_mgs_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mgs_ar3_b : 4thmd_v_mgv2_mgs_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class milgp_v_marciras_marksman_belt_khk;
            class 4thmd_v_mgv2_mkn_ar0_b : milgp_v_marciras_marksman_belt_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] MarCiras Vest";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar1_b : 4thmd_v_mgv2_mkn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar2_b : 4thmd_v_mgv2_mkn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

            class 4thmd_v_mgv2_mkn_ar3_b : 4thmd_v_mgv2_mkn_ar0_b
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgv2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                    "milgp_vests\textures\v_gear_02_co.paa"
                };
            };

    //Battle Belt (mgbb)
        class milgp_v_battle_belt_assaulter_KHK;
        class 4thmd_v_mgbb_rmn_ar0 : milgp_v_battle_belt_assaulter_KHK
        {
            scope = 2;
            author = "Darknesvoid99";
            displayName = "[ARMCO] Battle Belt";
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_rmn_ar1 : 4thmd_v_mgbb_rmn_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_rmn_ar2 : 4thmd_v_mgbb_rmn_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_rmn_ar3 : 4thmd_v_mgbb_rmn_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class milgp_v_battle_belt_hgunner_KHK;
        class 4thmd_v_mgbb_mgs_ar0 : milgp_v_battle_belt_hgunner_KHK
        {
            scope = 2;
            author = "Darknesvoid99";
            displayName = "[ARMCO] Battle Belt";
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar0.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_mgs_ar1 : 4thmd_v_mgbb_mgs_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar1.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar1.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_mgs_ar2 : 4thmd_v_mgbb_mgs_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar2.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar2.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

        class 4thmd_v_mgbb_mgs_ar3 : 4thmd_v_mgbb_mgs_ar0
        {
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd_mgp\data\arid\mgbb_ar3.paa",
                "darkmod_4thmd_mgp\data\arid\mvg1_b_ar3.paa",
                "milgp_vests\textures\v_gear_02_co.paa"
            };
        };

    //Opscore Helmet (mgh1)
        //Standard
            class ItemCore;
            class milgp_h_opscore_01_khk : ItemCore
            {
                class ItemInfo;
            };
            class 4thmd_h_mgh1_a_ar0 : milgp_h_opscore_01_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Opscore Helmet";

                TFAR_ExternalIntercomWirelessCapable = 1;
                ace_hearing_hasEHP = 1;
                ace_hearing_lowerVolume = 0;
                ace_hearing_protection = 0.75;

                hiddenSelections[] =
                {
                    "camo",
                    "camo2",
                    "_Camera",
                    "_Chemlights"
                    "_CW",
                    "_ESS",
                    "_IR_Strobe",
                    "_Surefire",
                    "_Manta_Back",
                    "_Manta_Top",
                    "_Vlite_Green",
                    "_Vlite_Red"
                };
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar0.paa"
                };

                class ItemInfo : ItemInfo
                {
                    mass = 20;

                    class HitpointsProtectionInfo
                    {
                        class Head
                        {
                            armor = 6;
                            hitPointName = "HitHead";
                            passThrough = 0.5;
                        };
                    };
                };
            };

            class 4thmd_h_mgh1_a_ar1 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_a_ar2 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_a_ar3 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar0 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_Camera","_Chemlights","_CW","_ESS","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh1_b_ar1 : 4thmd_h_mgh1_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar2 : 4thmd_h_mgh1_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar3 : 4thmd_h_mgh1_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar0 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_ESS","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh1_c_ar1 : 4thmd_h_mgh1_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar2 : 4thmd_h_mgh1_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar3 : 4thmd_h_mgh1_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar0 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_Chemlights","_ESS","_Manta_Back","_Manta_Top"};
            };

            class 4thmd_h_mgh1_d_ar1 : 4thmd_h_mgh1_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar2 : 4thmd_h_mgh1_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar3 : 4thmd_h_mgh1_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar0 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_Camera","_Chemlights","_ESS","_IR_Strobe","_Manta_Top"};
            };

            class 4thmd_h_mgh1_e_ar1 : 4thmd_h_mgh1_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar2 : 4thmd_h_mgh1_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar3 : 4thmd_h_mgh1_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar0 : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_Chemlights","_ESS","_IR_Strobe","_Manta_Back"};
            };

            class 4thmd_h_mgh1_f_ar1 : 4thmd_h_mgh1_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar2 : 4thmd_h_mgh1_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar3 : 4thmd_h_mgh1_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

        //Goggles
            class 4thmd_h_mgh1_a_ar0_g : 4thmd_h_mgh1_a_ar0
            {
                hiddenSelections[] = {"camo","camo2","_Camera","_Chemlights","_CW","_IR_Strobe","_Surefire","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh1_a_ar1_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_a_ar2_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_a_ar3_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar0_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo2","_Camera","_Chemlights","_CW","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh1_b_ar1_g : 4thmd_h_mgh1_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar2_g : 4thmd_h_mgh1_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_b_ar3_g : 4thmd_h_mgh1_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar0_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo2","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh1_c_ar1_g : 4thmd_h_mgh1_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar2_g : 4thmd_h_mgh1_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_c_ar3_g : 4thmd_h_mgh1_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar0_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo2","_Chemlights","_Manta_Back","_Manta_Top"};
            };

            class 4thmd_h_mgh1_d_ar1_g : 4thmd_h_mgh1_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar2_g : 4thmd_h_mgh1_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_d_ar3_g : 4thmd_h_mgh1_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar0_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo2","_Camera","_Chemlights","_IR_Strobe","_Manta_Top"};
            };

            class 4thmd_h_mgh1_e_ar1_g : 4thmd_h_mgh1_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar2_g : 4thmd_h_mgh1_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_e_ar3_g : 4thmd_h_mgh1_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar0_g : 4thmd_h_mgh1_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo2","_Chemlights","_IR_Strobe","_Manta_Back"};
            };

            class 4thmd_h_mgh1_f_ar1_g : 4thmd_h_mgh1_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar2_g : 4thmd_h_mgh1_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh1_f_ar3_g : 4thmd_h_mgh1_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

    //Airframe Helmet (mgh2)
        //Standard
            class milgp_h_airframe_01_khk : ItemCore
            {
                class ItemInfo;
            };

            class 4thmd_h_mgh2_a_ar0 : milgp_h_airframe_01_khk
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Opscore Helmet";

                TFAR_ExternalIntercomWirelessCapable = 1;
                ace_hearing_hasEHP = 1;
                ace_hearing_lowerVolume = 0;
                ace_hearing_protection = 0.75;

                hiddenSelections[] =
                {
                    "camo",
                    "camo1",
                    "camo2",
                    "_Camera",
                    "_Chemlights",
                    "_CW",
                    "_ESS",
                    "_IR_Strobe",
                    "_Surefire",
                    "_Manta_Back",
                    "_Manta_Top",
                    "_Vlite_Green",
                    "_Vlite_Red"
                };
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar0.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar0.paa"
                };

                class ItemInfo : ItemInfo
                {
                    mass = 50;

                    class HitpointsProtectionInfo
                    {
                        class Head
                        {
                            armor = 12;
                            hitPointName = "HitHead";
                            passThrough = 0.5;
                        };
                    };
                };
            };

            class 4thmd_h_mgh2_a_ar1 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_a_ar2 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_a_ar3 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar0 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Camera","_Chemlights","_CW","_ESS","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh2_b_ar1 : 4thmd_h_mgh2_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar2 : 4thmd_h_mgh2_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar3 : 4thmd_h_mgh2_b_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar0 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] = {"camo","camo1","camo2","_ESS","_Manta_Top","_Manta_Back","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh2_c_ar1 : 4thmd_h_mgh2_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar2 : 4thmd_h_mgh2_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar3 : 4thmd_h_mgh2_c_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar0 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Chemlights","_ESS","_Manta_Back","_Manta_Top"};
            };

            class 4thmd_h_mgh2_d_ar1 : 4thmd_h_mgh2_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar2 : 4thmd_h_mgh2_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar3 : 4thmd_h_mgh2_d_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar0 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Camera","_Chemlights","_ESS","_IR_Strobe","_Manta_Back"};
            };

            class 4thmd_h_mgh2_e_ar1 : 4thmd_h_mgh2_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar2 : 4thmd_h_mgh2_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar3 : 4thmd_h_mgh2_e_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar0 : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Chemlights","_ESS","_IR_Strobe","_Manta_Top"};
            };

            class 4thmd_h_mgh2_f_ar1 : 4thmd_h_mgh2_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar2 : 4thmd_h_mgh2_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar3 : 4thmd_h_mgh2_f_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

        //Goggles
            class 4thmd_h_mgh2_a_ar0_g : 4thmd_h_mgh2_a_ar0
            {
                hiddenSelections[] =
                {
                    "camo",
                    "camo1",
                    "camo2",
                    "_Camera",
                    "_Chemlights",
                    "_CW",
                    "_IR_Strobe",
                    "_Surefire",
                    "_Manta_Back",
                    "_Manta_Top",
                    "_Vlite_Green",
                    "_Vlite_Red"
                };
            };

            class 4thmd_h_mgh2_a_ar1_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_a_ar2_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_a_ar3_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar0_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Camera","_Chemlights","_CW","_Manta_Back","_Manta_Top","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh2_b_ar1_g : 4thmd_h_mgh2_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar2_g : 4thmd_h_mgh2_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_b_ar3_g : 4thmd_h_mgh2_b_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar0_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Manta_Top","_Manta_Back","_Vlite_Green","_Vlite_Red"};
            };

            class 4thmd_h_mgh2_c_ar1_g : 4thmd_h_mgh2_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar2_g : 4thmd_h_mgh2_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_c_ar3_g : 4thmd_h_mgh2_c_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar0_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Chemlights","_Manta_Back","_Manta_Top"};
            };

            class 4thmd_h_mgh2_d_ar1_g : 4thmd_h_mgh2_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar2_g : 4thmd_h_mgh2_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_d_ar3_g : 4thmd_h_mgh2_d_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar0_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Camera","_Chemlights","_IR_Strobe","_Manta_Back"};
            };

            class 4thmd_h_mgh2_e_ar1_g : 4thmd_h_mgh2_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar2_g : 4thmd_h_mgh2_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_e_ar3_g : 4thmd_h_mgh2_e_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar0_g : 4thmd_h_mgh2_a_ar0_g
            {
                hiddenSelections[] = {"camo","camo1","camo2","_Chemlights","_IR_Strobe","_Manta_Top"};
            };

            class 4thmd_h_mgh2_f_ar1_g : 4thmd_h_mgh2_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar1.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar1.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar2_g : 4thmd_h_mgh2_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar2.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar2.paa"
                };
            };

            class 4thmd_h_mgh2_f_ar3_g : 4thmd_h_mgh2_f_ar0_g
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd_mgp\data\arid\mgh2_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mgh1_ar3.paa",
                    "darkmod_4thmd_mgp\data\arid\mhg1_ar3.paa"
                };
            };

    //Include Other Patterns 
    /*
    #include "wood\CfgW_equ.hpp"
    #include "dest\CfgW_equ.hpp"
    #include "jung\CfgW_equ.hpp"
    #include "borl\CfgW_equ.hpp"
    #include "snbl\CfgW_equ.hpp"
    #include "artc\CfgW_equ.hpp"
    #include "navy\CfgW_equ.hpp"
    */
};

class CfgVehicles
{
    class milgp_b_patrol_01_khk;
    class 4thmd_b_pac5_ar0 : milgp_b_patrol_01_khk
    {
        displayName = "[ARMCO] Patrol Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\pac5_ar0.paa",
            "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa"
        };
    };

    class milgp_bp_Breacher_khk;
    class 4thmd_b_mgb1_ar0 : milgp_bp_Breacher_khk
    {
        displayName = "[ARMCO] Back Panel (Breacher)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
            "darkmod_4thmd_mgp\data\arid\mgcd_ar0.paa"
        };
    };

    class milgp_bp_hydration_khk;
    class 4thmd_b_mgb2_ar0 : milgp_bp_hydration_khk
    {
        displayName = "[ARMCO] Back Panel (Hydration)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa"
        };
    };

    class milgp_bp_Pointman_khk;
    class 4thmd_b_mgb3_ar0 : milgp_bp_Pointman_khk
    {
        displayName = "[ARMCO] Back Panel (Pointman)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa"
        };
    };

    class milgp_bp_Tomahawk_khk;
    class 4thmd_b_mgb4_ar0 : milgp_bp_Tomahawk_khk
    {
        displayName = "[ARMCO] Back Panel (Specialist)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\mvg1_b_ar0.paa",
            "darkmod_4thmd_mgp\data\arid\mgcd_ar0.paa"
        };
    };

    /*
    #include "wood\CfgV_equ.hpp"
    #include "dest\CfgV_equ.hpp"
    #include "jung\CfgV_equ.hpp"
    #include "borl\CfgV_equ.hpp"
    #include "snbl\CfgV_equ.hpp"
    #include "artc\CfgV_equ.hpp"
    #include "navy\CfgV_equ.hpp"
    */
};