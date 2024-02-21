/*

*/

    class 4thmd_u_unif1_wd1_f : 4thmd_u_unif1_ar1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Uniform";
        faction = "4thmd_wd_faction";
        uniformClass = "4thmd_u_unif1_wd1";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_unif1_wd1.paa"
        };
    };

    class 4thmd_u_unif1_wd1_ss_f : 4thmd_u_unif1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Uniform (Rolled-Up)";
        uniformClass = "4thmd_u_unif1_wd1_ss";
        model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_unif1_wd1.paa"
        };
    };

    class 4thmd_u_unif1_wd1_tt_f : 4thmd_u_unif1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Uniform (Tank Top)";
        uniformClass = "4thmd_u_unif1_wd1_tt";
        model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
        hiddenSelections[] = 
        {
            "camo1", 
            "camo2", 
            "camo3", 
            "insignia"
        };
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_unif1_tt_wd1.paa",
			"darkmod_4thmd\data\woodland\dm_unif1_wd1.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
        };
    };

    class 4thmd_u_unif1_wd1_sw_f : 4thmd_u_unif1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Uniform (Sweater)";
        uniformClass = "4thmd_u_unif1_wd1_sw";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_unif1_sw_wd1.paa"
        };
    };

    class 4thmd_u_unif1_wd1_gh_f : 4thmd_u_unif1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Uniform (Ghillie)";
        uniformClass = "4thmd_u_unif1_wd1_gh";
        model="A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_unif1_wd1.paa"
        };
    };

    class 4thmd_u_ghil1_wd1_f : 4thmd_u_unif1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Ghillie (Semi-Woodland)";
        uniformClass = "4thmd_u_ghil1_wd1";
        model="\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";

        hiddenSelections[] = 
        {"camo",
        "camo3",
        "camo4"
        };

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_ghil1_wd1.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"
        };
    };

    class 4thmd_u_ghil1_wd1_b_f : 4thmd_u_ghil1_wd1_f
    {
        displayName = "[DEBUG] 4Bt. Woodland Ghillie (Woodland)";
        uniformClass = "4thmd_u_ghil1_wd1_b";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_ghil1_wd1.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa",
			"\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"
        };
    };

    class 4thmd_b_pac1_wd1 : 4thmd_b_pac1_ar1
    {
        displayName = "4Bt. Woodland Assault Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_pac1_wd1.paa"
        };
    };

    class 4thmd_b_pac2_wd1 : 4thmd_b_pac2_ar1
    {
        displayName = "4Bt. Woodland Field Pack";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_pac2_wd1.paa"
        };
    };

    class 4thmd_b_pac3_wd1 : 4thmd_b_pac3_ar1
    {
        displayName = "4Bt. Woodland Kitbag";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_pac3_wd1.paa"
        };
    };

    class 4thmd_b_pac5_wd1 : 4thmd_b_pac5_ar1
    {
        displayName = "4Bt. Woodland Carryall";
        author = "Darknesvoid99";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd\data\woodland\dm_pac5_wd1.paa"
        };
    };