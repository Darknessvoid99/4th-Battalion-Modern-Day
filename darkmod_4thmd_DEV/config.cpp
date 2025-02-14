class CfgPatches 
{
    class darkmod_4thmd_DEV
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "darkmod_4thmd_veh"
        };
        author = "Darknessvoid99";
        version = "0.1.0.2402120315";
    };
};

class CfgVehicles
{
    class 4thmd_v_lt1_ca_ar1;
    class 4thmd_v_lt1_ca_e_ar1 : 4thmd_v_lt1_ca_ar1
    {
        scope = 2;
    };

    class 4thmd_v_lt1_ca_es_ar1 : 4thmd_v_lt1_ca_e_ar1
    {
        scope = 2;
    };

    class 4thmd_v_lt1_rc_ar1;
    class 4thmd_v_lt1_rc_ar1_c : 4thmd_v_lt1_rc_ar1
    {
        scope = 2;
    };

    class 4thmd_v_lt1_rc_ar1_c_wcc : 4thmd_v_lt1_rc_ar1_c
    {
        scope = 2;
    };

    class 4thmd_v_lt1_rc_ar1_c_tcc : 4thmd_v_lt1_rc_ar1_c
    {
        scope = 2;
    };

    class 4thmd_v_apc3w_u_ar1;
    class 4thmd_v_apc3w_e_ar1 : 4thmd_v_apc3w_u_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc3w_es_ar1 : 4thmd_v_apc3w_e_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc3w_c_ar1 : 4thmd_v_apc3w_u_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc3w_cs_ar1 : 4thmd_v_apc3w_c_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc3w_ua_ar1 : 4thmd_v_apc3w_u_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc2t_u_ar1;
    class 4thmd_v_apc2t_e_ar1 : 4thmd_v_apc2t_u_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc2t_es_ar1 : 4thmd_v_apc2t_e_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc2t_c_ar1 : 4thmd_v_apc2t_u_ar1
    {
        scope = 2;
    };

    class 4thmd_v_apc2t_cs_ar1 : 4thmd_v_apc2t_c_ar1
    {
        scope = 2;
    };

    class 4thmd_v_ugv1_a_ar1;
    class 4thmd_v_ugv1_a_ar1_t : 4thmd_v_ugv1_a_ar1
    {
        scope = 2;
    };

    class 4thmd_s_ft1_forest;
    class 4thmd_s_ft1_apc3w_ar1 : 4thmd_s_ft1_forest
    {
        scope = 2;
        scopeCurator = 2;
    };
};
