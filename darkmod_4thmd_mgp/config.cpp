class CfgPatches {
    class darkmod_4thmd_mgp
	{
        weapons[] = 
        {
            "4thmd_v_mgv2_rm_ar1",
            "4thmd_v_mgv2_gr_ar1",
            "4thmd_v_mgv2_mg_ar1",
            "4thmd_v_mgv2_lt_ar1",
            "4thmd_v_mgv2_mr_ar1",
            "4thmd_v_mgv2_me_ar1",
            "4thmd_v_mgv2_en_ar1",
            "4thmd_v_mgv2_tl_ar1",
            "4thmd_v_mgv2_rm_ar1_b",
            "4thmd_v_mgv2_gr_ar1_b",
            "4thmd_v_mgv2_mg_ar1_b",
            "4thmd_v_mgv2_mr_ar1_b",
            "4thmd_v_mgv2_me_ar1_b",
            "4thmd_v_mgv2_en_ar1_b",
            "4thmd_v_mgv2_tl_ar1_b",
            "4thmd_v_mgbb_rm_ar1",
            "4thmd_v_mgbb_mg_ar1",
            "4thmd_h_mgh1_1_ar1",
            "4thmd_h_mgh1_1_ar1_g",
            "4thmd_h_mgh1_2_ar1",
            "4thmd_h_mgh1_2_ar1_g",
            "4thmd_h_mgh1_3_ar1",
            "4thmd_h_mgh1_3_ar1_g",
            "4thmd_h_mgh1_4_ar1",
            "4thmd_h_mgh1_4_ar1_g",
            "4thmd_h_mgh1_5_ar1",
            "4thmd_h_mgh1_5_ar1_g",
            "4thmd_h_mgh1_6_ar1",
            "4thmd_h_mgh1_6_ar1_g",
            "4thmd_h_mgh2_1_ar1",
            "4thmd_h_mgh2_1_ar1_g",
            "4thmd_h_mgh2_2_ar1",
            "4thmd_h_mgh2_2_ar1_g",
            "4thmd_h_mgh2_3_ar1",
            "4thmd_h_mgh2_3_ar1_g",
            "4thmd_h_mgh2_4_ar1",
            "4thmd_h_mgh2_4_ar1_g",
            "4thmd_h_mgh2_5_ar1",
            "4thmd_h_mgh2_5_ar1_g",
            "4thmd_h_mgh2_6_ar1",
            "4thmd_h_mgh2_6_ar1_g",

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
            "4thmd_b_pac4_ar1",
            "4thmd_b_mgb1_ar1",
            "4thmd_b_mgb2_ar1",
            "4thmd_b_mgb3_ar1",
            "4thmd_b_mgb4_ar1",

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
    class milgp_v_marciras_assaulter_khk;
    class 4thmd_v_mgv2_rm_ar1 : milgp_v_marciras_assaulter_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Rifleman)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_grenadier_khk;
    class 4thmd_v_mgv2_gr_ar1 : milgp_v_marciras_grenadier_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Grenadier)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_hgunner_khk;
    class 4thmd_v_mgv2_mg_ar1 : milgp_v_marciras_hgunner_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Gunner)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_light_khk;
    class 4thmd_v_mgv2_lt_ar1 : milgp_v_marciras_light_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Light)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa"
        };
    };

    class milgp_v_marciras_marksman_khk;
    class 4thmd_v_mgv2_mr_ar1 : milgp_v_marciras_marksman_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Marksman)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_medic_khk;
    class 4thmd_v_mgv2_me_ar1 : milgp_v_marciras_medic_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Medic)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_m_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class 4thmd_v_mgv2_en_ar1 : 4thmd_v_mgv2_me_ar1
    {
        displayName = "4Bt. Arid MarCiras (Engineer)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_teamleader_KHK;
    class 4thmd_v_mgv2_tl_ar1 : milgp_v_marciras_teamleader_KHK
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Leader)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_assaulter_belt_khk;
    class 4thmd_v_mgv2_rm_ar1_b : milgp_v_marciras_assaulter_belt_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Rifleman) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_grenadier_belt_khk;
    class 4thmd_v_mgv2_gr_ar1_b : milgp_v_marciras_grenadier_belt_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Grenadier) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_hgunner_belt_khk;
    class 4thmd_v_mgv2_mg_ar1_b : milgp_v_marciras_hgunner_belt_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Gunner) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_marksman_belt_khk;
    class 4thmd_v_mgv2_mr_ar1_b : milgp_v_marciras_marksman_belt_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Marksman) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_medic_belt_khk;
    class 4thmd_v_mgv2_me_ar1_b : milgp_v_marciras_medic_belt_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Medic) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_m_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class 4thmd_v_mgv2_en_ar1_b : 4thmd_v_mgv2_me_ar1_b
    {
        displayName = "4Bt. Arid MarCiras (Engineer) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_marciras_teamleader_belt_KHK;
    class 4thmd_v_mgv2_tl_ar1_b : milgp_v_marciras_teamleader_belt_KHK
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid MarCiras (Leader) + Belt";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgv2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_battle_belt_assaulter_KHK;
    class 4thmd_v_mgbb_rm_ar1 : milgp_v_battle_belt_assaulter_KHK
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Battle Belt (Rifleman)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class milgp_v_battle_belt_hgunner_KHK;
    class 4thmd_v_mgbb_mg_ar1 : milgp_v_battle_belt_hgunner_KHK
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Battle Belt (Gunner)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgbb_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

//Helmets
    class milgp_h_opscore_01_khk;
    class 4thmd_h_mgh1_1_ar1 : milgp_h_opscore_01_khk
    {
        TFAR_ExternalIntercomWirelessCapable=1;
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 1";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_01_goggles_khk;
    class 4thmd_h_mgh1_1_ar1_g : milgp_h_opscore_01_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 1 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_02_khk;
    class 4thmd_h_mgh1_2_ar1 : milgp_h_opscore_02_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 2";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_02_goggles_khk;
    class 4thmd_h_mgh1_2_ar1_g : milgp_h_opscore_02_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 2 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_03_khk;
    class 4thmd_h_mgh1_3_ar1 : milgp_h_opscore_03_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 3";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_03_goggles_khk;
    class 4thmd_h_mgh1_3_ar1_g : milgp_h_opscore_03_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 3 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_04_khk;
    class 4thmd_h_mgh1_4_ar1 : milgp_h_opscore_04_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 4";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_04_goggles_khk;
    class 4thmd_h_mgh1_4_ar1_g : milgp_h_opscore_04_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 4 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_05_khk;
    class 4thmd_h_mgh1_5_ar1 : milgp_h_opscore_05_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 5";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_05_goggles_khk;
    class 4thmd_h_mgh1_5_ar1_g : milgp_h_opscore_05_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 5 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_06_khk;
    class 4thmd_h_mgh1_6_ar1 : milgp_h_opscore_06_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 6";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_opscore_06_goggles_khk;
    class 4thmd_h_mgh1_6_ar1_g : milgp_h_opscore_06_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Opscore 6 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_01_khk;
    class 4thmd_h_mgh2_1_ar1 : milgp_h_airframe_01_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 1";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_01_goggles_khk;
    class 4thmd_h_mgh2_1_ar1_g : milgp_h_airframe_01_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 1 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_02_khk;
    class 4thmd_h_mgh2_2_ar1 : milgp_h_airframe_02_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 2";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_02_goggles_khk;
    class 4thmd_h_mgh2_2_ar1_g : milgp_h_airframe_02_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 2 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_03_khk;
    class 4thmd_h_mgh2_3_ar1 : milgp_h_airframe_03_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 3";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_03_goggles_khk;
    class 4thmd_h_mgh2_3_ar1_g : milgp_h_airframe_03_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 3 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_04_khk;
    class 4thmd_h_mgh2_4_ar1 : milgp_h_airframe_04_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 4";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_04_goggles_khk;
    class 4thmd_h_mgh2_4_ar1_g : milgp_h_airframe_04_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 4 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_05_khk;
    class 4thmd_h_mgh2_5_ar1 : milgp_h_airframe_05_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 5";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_05_goggles_khk;
    class 4thmd_h_mgh2_5_ar1_g : milgp_h_airframe_05_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 5 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_06_khk;
    class 4thmd_h_mgh2_6_ar1 : milgp_h_airframe_06_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 6";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    class milgp_h_airframe_06_goggles_khk;
    class 4thmd_h_mgh2_6_ar1_g : milgp_h_airframe_06_goggles_khk
    {
        scope = 2;
        author = "Darknesvoid99";
        displayName = "4Bt. Arid Airframe 6 + Goggles";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mgh2_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgh1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mhg1_ar1.paa"
        };
    };

    #include "CfgW_equ_wd.hpp"
/*
    #include "CfgW_equ_de.hpp"
    #include "CfgW_equ_bl.hpp"
    #include "CfgW_equ_ac.hpp"
    #include "CfgW_equ_ju.hpp"
*/
};

class CfgVehicles
{
    class milgp_b_patrol_01_khk;
    class 4thmd_b_pac4_ar1 : milgp_b_patrol_01_khk
    {
        displayName = "4Bt. Arid Patrol Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_pac4_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa"
        };
    };

    class milgp_bp_Breacher_khk;
    class 4thmd_b_mgb1_ar1 : milgp_bp_Breacher_khk
    {
        displayName = "4Bt. Arid Panel (Breacher)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgcd_ar1.paa"
        };
    };

    class milgp_bp_hydration_khk;
    class 4thmd_b_mgb2_ar1 : milgp_bp_hydration_khk
    {
        displayName = "4Bt. Arid Panel (Hydration)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa"
        };
    };

    class milgp_bp_Pointman_khk;
    class 4thmd_b_mgb3_ar1 : milgp_bp_Pointman_khk
    {
        displayName = "4Bt. Arid Panel (Pointman)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa"
        };
    };

    class milgp_bp_Tomahawk_khk;
    class 4thmd_b_mgb4_ar1 : milgp_bp_Tomahawk_khk
    {
        displayName = "4Bt. Arid Panel (Specialist)";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_mgp\data\arid\dm_mvg1_ar1.paa",
            "darkmod_4thmd_mgp\data\arid\dm_mgcd_ar1.paa"
        };
    };

    #include "CfgV_pac_wd.hpp"
/*
    #include "CfgV_pac_de.hpp"
    #include "CfgV_pac_bl.hpp"
    #include "CfgV_pac_ac.hpp"
    #include "CfgV_pac_ju.hpp"
*/
};