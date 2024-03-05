/*

*/
    class 4thmd_u_crew_wd1 : 4thmd_u_crew_ar1
    {};

    class 4thmd_u_crew_h_wd1 : 4thmd_u_crew_h_ar1
    {};

    class 4thmd_u_crew_a_wd1 : 4thmd_u_crew_a_ar1
    {};

    class 4thmd_u_pilot_wd1 : 4thmd_u_pilot_ar1
    {};


    class 4thmd_v_mbt3_wd1 : 4thmd_v_mbt3_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mbt3_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt3_turret_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt3_extra_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_heli4_wd1 : 4thmd_v_heli4_ar1
    {
        crew = "4thmd_u_crew_h_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_heli4_body_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_heli4_body_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_bench_wd1 : 4thmd_s_pod4_bench_ar1
    {
        faction = "4thmd_wd_faction";
        editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_bench_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_transport_wd1 : 4thmd_s_pod4_transport_ar1
    {
        faction = "4thmd_wd_faction";
        editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_pod4_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_cargo_wd1 : 4thmd_s_pod4_cargo_ar1
    {
        faction = "4thmd_wd_faction";
        editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_pod4_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_ammo_wd1 : 4thmd_s_pod4_ammo_ar1
    {
        faction = "4thmd_wd_faction";
		editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_pod4_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_fuel_wd1 : 4thmd_s_pod4_fuel_ar1
    {
        faction = "4thmd_wd_faction";
		editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_fuel_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_medevac_wd1 : 4thmd_s_pod4_medevac_ar1
    {
        faction = "4thmd_wd_faction";
		editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_pod4_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_s_pod4_repair_wd1 : 4thmd_s_pod4_repair_ar1
    {
        faction = "4thmd_wd_faction";
		editorSubcategory="4thmd_wd_containers";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_pod4_a_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_pod4_b_wd1.paa",
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_lt1_ca_wd1 : 4thmd_v_lt1_ca_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_lt1_main_wd1.paa",      //Main
            "darkmod_4thmd_veh\data\woodland\dm_lt1_cannon_wd1.paa",    //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",    //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"           //Slat
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_lt1_at_wd1 : 4thmd_v_lt1_at_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_lt1_main_wd1.paa",      //Main
            "darkmod_4thmd_veh\data\woodland\dm_lt1_ataa_wd1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",    //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"           //Slat
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_lt1_aa_wd1 : 4thmd_v_lt1_aa_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_lt1_main_wd1.paa",      //Main
            "darkmod_4thmd_veh\data\woodland\dm_lt1_ataa_wd1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",    //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"           //Slat
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_lt1_rc_wd1 : 4thmd_v_lt1_rc_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_lt1_main_wd1.paa",        //Main
            "darkmod_4thmd_veh\data\woodland\dm_lt1_radar_wd1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",  //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"          //Slat
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_afv1_wd1 : 4thmd_v_afv1_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_afv1_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_turret_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_wheel_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_extra_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_afv1_up_wd1 : 4thmd_v_afv1_up_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_afv1_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_turret_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_wheel_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_extra_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_cmdt_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_afv1_extra_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc3w_wd1 : 4thmd_v_apc3w_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext1_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext2_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc3w_u_wd1 : 4thmd_v_apc3w_u_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_body_u_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext1_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext2_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc3w_m_wd1 : 4thmd_v_apc3w_m_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_body_m_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext1_m_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext2_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc3w_e_wd1 : 4thmd_v_apc3w_e_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_body_e_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext1_e_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc3w_ext2_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc2t_wd1 : 4thmd_v_apc2t_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc2t_u_wd1 : 4thmd_v_apc2t_u_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc2t_m_wd1 : 4thmd_v_apc2t_m_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_body_m_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc2t_e_wd1 : 4thmd_v_apc2t_e_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_body_e_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_ugv1_a_wd1 : 4thmd_v_ugv1_a_ar1
    {
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "",
            "",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_apc2t_aa_wd1 : 4thmd_v_apc2t_aa_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_apc2t_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_apcaa_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_heli2_wd1 : 4thmd_v_heli2_ar1
    {
        crew = "4thmd_u_crew_h_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_heli2a_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_heli2a_extra_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_jet4_wd1 : 4thmd_v_jet4_ar1 // ALPHA Texture
    {
        crew = "4thmd_u_pilot_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_jet4f_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_jet4f_extra_wd1.paa",
            "darkmod_4thmd_veh\data\jet4_pod\dm_jet4f_pods.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    }; 

    class 4thmd_v_mbt2_wd1 : 4thmd_v_mbt2_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_turret_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_extra_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_mbt2_rgun_wd1 : 4thmd_v_mbt2_rgun_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_turret_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_extra_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_mbt2_tart_wd1 : 4thmd_v_mbt2_tart_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_body_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_tart_wd1.paa",
            "darkmod_4thmd_veh\data\woodland\dm_mbt2_extra_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_wd1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_mrap3_wd1 : 4thmd_v_mrap3_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mrap3_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_mrap3_hmg_wd1 : 4thmd_v_mrap3_hmg_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mrap3_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };

    class 4thmd_v_mrap3_gmg_wd1 : 4thmd_v_mrap3_gmg_ar1
    {
        crew = "4thmd_u_crew_wd1";
        faction = "4thmd_wd_faction";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\woodland\dm_mrap3_wd1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_wd1.paa"
        };
        textureList[] = {"Woodland_4th",1,};
    };