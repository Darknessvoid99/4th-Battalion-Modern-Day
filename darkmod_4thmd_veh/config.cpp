class CfgPatches 
{
    class darkmod_4thmd_veh
	{
        weapons[] = {};
        units[] = 
        {
            "4thmd_v_mbt3_ar1",
            "4thmd_v_heli4_ar1",
            "4thmd_s_pod4_bench_ar1",
            "4thmd_s_pod4_transport_ar1",
            "4thmd_s_pod4_cargo_ar1",
            "4thmd_s_pod4_ammo_ar1",
            "4thmd_s_pod4_fuel_ar1",
            "4thmd_s_pod4_medevac_ar1",
            "4thmd_s_pod4_repair_ar1",
            "4thmd_v_lt1_ca_ar1",
            "4thmd_v_lt1_at_ar1",
            "4thmd_v_lt1_aa_ar1",
            "4thmd_v_lt1_rc_ar1",
            "4thmd_v_afv1_ar1",
            "4thmd_v_afv1_up_ar1",
            "4thmd_v_apc3w_ar1",
            "4thmd_v_apc3w_u_ar1",
            "4thmd_v_apc3w_m_ar1",
            "4thmd_v_apc3w_e_ar1",
            "4thmd_v_apc3w_es_ar1",
            "4thmd_v_apc3w_c_ar1",
            "4thmd_v_apc3w_cs_ar1",
            "4thmd_v_apc3w_ua_ar1",
            "4thmd_v_apc2t_ar1",
            "4thmd_v_apc2t_u_ar1",
            "4thmd_v_apc2t_m_ar1",
            "4thmd_v_apc2t_e_ar1",
            "4thmd_v_apc2t_es_ar1",
            "4thmd_v_apc2t_c_ar1",
            "4thmd_v_apc2t_cs_ar1",
            "4thmd_v_apc2t_ua_ar1",
            "4thmd_v_ugv1_a_ar1",
            "4thmd_v_apc2t_aa_ar1",
            "4thmd_v_heli2_ar1",
            "4thmd_v_jet4_ar1",
            "4thmd_v_mbt2_ar1",
            "4thmd_v_mbt2_rgun_ar1",
            "4thmd_v_mbt2_tart_ar1",
            "4thmd_v_mrap3_ar1",
            "4thmd_v_mrap3_hmg_ar1",
            "4thmd_v_mrap3_gmg_ar1",
            "4thmd_v_lt1_rc_ar1_c",
            "4thmd_v_ugv1_a_ar1_t",

            "4thmd_v_mbt3_wd1",
            "4thmd_v_heli4_wd1",
            "4thmd_s_pod4_bench_wd1",
            "4thmd_s_pod4_transport_wd1",
            "4thmd_s_pod4_cargo_wd1",
            "4thmd_s_pod4_ammo_wd1",
            "4thmd_s_pod4_fuel_wd1",
            "4thmd_s_pod4_medevac_wd1",
            "4thmd_s_pod4_repair_wd1",
            "4thmd_s_pod4_repair_ar1",
            "4thmd_v_lt1_ca_wd1",
            "4thmd_v_lt1_at_wd1",
            "4thmd_v_lt1_aa_wd1",
            "4thmd_v_lt1_rc_wd1",
            "4thmd_v_afv1_wd1",
            "4thmd_v_afv1_up_wd1",
            "4thmd_v_apc3w_wd1",
            "4thmd_v_apc3w_u_wd1",
            "4thmd_v_apc3w_m_wd1",
            "4thmd_v_apc3w_e_wd1",
            "4thmd_v_apc3w_es_wd1",
            "4thmd_v_apc3w_c_wd1",
            "4thmd_v_apc3w_cs_wd1",
            "4thmd_v_apc3w_ua_wd1",
            "4thmd_v_apc2t_wd1",
            "4thmd_v_apc2t_u_wd1",
            "4thmd_v_apc2t_m_wd1",
            "4thmd_v_apc2t_e_wd1",
            "4thmd_v_apc2t_es_wd1",
            "4thmd_v_apc2t_c_wd1",
            "4thmd_v_apc2t_cs_wd1",
            "4thmd_v_apc2t_ua_wd1",
            "4thmd_v_ugv1_a_wd1",
            "4thmd_v_apc2t_aa_wd1",
            "4thmd_v_heli2_wd1",
            "4thmd_v_jet4_wd1",
            "4thmd_v_mbt2_wd1",
            "4thmd_v_mbt2_rgun_wd1",
            "4thmd_v_mbt2_tart_wd1",
            "4thmd_v_mrap3_wd1",
            "4thmd_v_mrap3_hmg_wd1",
            "4thmd_v_mrap3_gmg_wd1",
            "4thmd_v_lt1_rc_wd1_c",
            "4thmd_v_lt1_rc_wd1_c_wcc",
            "4thmd_v_lt1_rc_wd1_c_tcc",
            "4thmd_v_ugv1_a_wd1_t",

            "4thmd_s_ft1_forest",
            "4thmd_s_ft1_sand",
            "4thmd_s_ft1_apc3w_ar1",
            "4thmd_s_ft1_vic_sand",
            "4thmd_s_val_wood",
            "4thmd_s_va1_std",

            "4thmd_u_crew_ar1",
            "4thmd_u_crew_h_ar1",
            "4thmd_u_crew_a_ar1",
            "4thmd_u_pilot_ar1",
            "4thmd_u_crew_wd1",
            "4thmd_u_crew_h_wd1",
            "4thmd_u_crew_a_wd1",
            "4thmd_u_pilot_wd1"
        };

        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "ace_hellfire"
        };
        author = "Darknessvoid99";
        version = "0.1.0.2402120315";
    };
};

#define DEBUG 2 // 1 = OFF, 2 = ON

class cfgMagazines
{
    class 6Rnd_ACE_Hellfire_AGM114K;
    class PylonRack_Missile_AGM_02_x1;
    class PylonRack_Missile_AGM_02_x2;

    
    class PylonRack_4Rnd_ACE_Hellfire_AGM114K : 6Rnd_ACE_Hellfire_AGM114K
    {
        hardpoints[] =
        {
            "UNI_SCALPEL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_HELLFIRE_RACK",
            "RHS_HP_LONGBOW_RACK",
            "DM_ACE_4AGM114_Pylon"
        };
    };

    class ace_maverick_L_PylonRack_x1 : PylonRack_Missile_AGM_02_x1
    {
        hardpoints[] =
        {
            "B_AGM65_RAIL",
            "I_AGM65_RAIL",
            "DM_AGM65_RAIL"
        };
    };

    class ace_maverick_L_PylonRack_x2 : PylonRack_Missile_AGM_02_x2
    {
        hardpoints[] =
        {
            "B_AGM65_DUAL_RAIL",
            "I_AGM65_DUAL_RAIL",
            "DM_AGM65_RAIL"
        };
    };
};

class CfgEditorSubcategories
{
    class 4thmd_ar_containers
    {
        displayName = "Containers (Arid)";
    };

    class 4thmd_wd_containers
    {
        displayName = "Containers (Woodland)";
    };

    class 4thmd_de_containers
    {
        displayName = "Containers (Desert)";
    };

    class 4thmd_bl_containers
    {
        displayName = "Containers (Boreal)";
    };

    class 4thmd_ac_containers
    {
        displayName = "Containers (Artic)";
    };

    class 4thmd_ju_containers
    {
        displayName = "Containers (Jungle)";
    };

    class 4thmd_tankettes
    {
        displayName = "Tankettes";
    };

    class 4thmd_armoredwheel
    {
        displayName = "APCs, Wheeled";
    };

    class 4thmd_armoredtrack
    {
        displayName = "APCs, Tracked";
    };

    class 4thmd_attachment
    {
        displayName = "(DEBUG) Attachments";
    };
};

class CfgVehicles
{
    class B_crew_F;
    class B_helicrew_F;
    class B_Pilot_F;

    class 4thmd_u_crew_ar1 : B_crew_F
    {
        scope = 1;
        displayName = "Crewman";
    };

    class 4thmd_u_crew_h_ar1 : B_helicrew_F
    {
        scope = 1;
        displayName = "Heli Crew";
    };

    class 4thmd_u_crew_a_ar1 : 4thmd_u_crew_h_ar1
    {
        displayName = "Air Crew";
    };

    class 4thmd_u_pilot_ar1 : B_Pilot_F
    {
        scope = 1;
        displayName = "Pilot";
    };

    class I_MBT_03_cannon_F;
    class 4thmd_v_mbt3_ar1 : I_MBT_03_cannon_F
    {
        _generalMacro = "4thmd_v_mbt3_ar1";
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Tanks";
        displayName = "MBT-3RV Leopard";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mbt3_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt3_turret_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt3_extra_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt3_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa"
                };
            };
        
            class Woodland_4th
            {
                author = "Darknessvoid99";
                displayName = "Woodland (Forest)";
                factions[] = {"4thmd_wd_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_body_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_turret_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_extra_wd1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_fs1.paa"
                };
            };
        
            class Woodland_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Woodland (Grass)";
                factions[] = {"4thmd_wd_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_body_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_turret_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_extra_wd1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa"
                };
            };

            class Woodland_4th_sn
            {
                author = "Darknessvoid99";
                displayName = "Woodland (Snow)";
                factions[] = {"4thmd_wd_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_body_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_turret_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_mbt3_extra_wd1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sn1.paa"
                };
            };
        /*
            class Desert_4th
            {
                author = "Darknessvoid99";
                displayName = "Desert (Canyon)";
                factions[] = {"4thmd_de_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_body_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_turret_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_extra_de1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_ca1.paa"
                };
            };

            class Desert_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Desert (Sand)";
                factions[] = {"4thmd_de_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_body_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_turret_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_extra_de1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa"
                };
            };

            class Desert_4th_os
            {
                author = "Darknessvoid99";
                displayName = "Desert (Pine)";
                factions[] = {"4thmd_de_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_body_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_turret_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_mbt3_extra_de1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
                };
            };

            class Boreal_4th
            {
                author = "Darknessvoid99";
                displayName = "Boreal (Tiaga)";
                factions[] = {"4thmd_bl_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_body_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_turret_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_extra_bl1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_ta1.paa"
                };
            };

            class Boreal_4th_tn
            {
                author = "Darknessvoid99";
                displayName = "Boreal (Tundra)";
                factions[] = {"4thmd_bl_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_body_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_turret_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_extra_bl1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_tn1.paa"
                };
            };

            class Boreal_4th_cr
            {
                author = "Darknessvoid99";
                displayName = "Boreal (Conifier)";
                factions[] = {"4thmd_bl_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_body_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_turret_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_extra_bl1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_cr1.paa"
                };
            };

            class Boreal_4th_sn
            {
                author = "Darknessvoid99";
                displayName = "Boreal (Snow)";
                factions[] = {"4thmd_bl_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_body_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_turret_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_mbt3_extra_bl1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sn1.paa"
                };
            };

            class Artic_4th
            {
                author = "Darknessvoid99";
                displayName = "Artic (Snow)";
                factions[] = {"4thmd_ac_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_body_ac1.paa",
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_turret_ac1.paa",
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_extra_ac1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sn1.paa"
                };
            };

            class Artic_4th_tn
            {
                author = "Darknessvoid99";
                displayName = "Artic (Tundra)";
                factions[] = {"4thmd_ac_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_body_ac1.paa",
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_turret_ac1.paa",
                    "darkmod_4thmd_veh\data\artic\dm_mbt3_extra_ac1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_tn1.paa"
                };
            };

            class Jungle_4th
            {
                author = "Darknessvoid99";
                displayName = "Jungle (Canopy)";
                factions[] = {"4thmd_ju_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_body_ju1.paa",
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_turret_ju1.paa",
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_extra_ju1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_co1.paa"
                };
            };

            class Jungle_4th_to
            {
                author = "Darknessvoid99";
                displayName = "Jungle (Tropical)";
                factions[] = {"4thmd_ju_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_body_ju1.paa",
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_turret_ju1.paa",
                    "darkmod_4thmd_veh\data\jungle\dm_mbt3_extra_ju1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
                };
            };
        */
        };
    };

    class O_Heli_Transport_04_F;
    class 4thmd_v_heli4_ar1 : O_Heli_Transport_04_F // ALPHA Texture
    {
        _generalMacro = "4thmd_v_heli4_ar1";
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_h_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Helicopters";
        displayName = "CH-290 Taru";
        epeImpulseDamageCoef=20;    //50 Default, 0 LEA, RHSMELB 20
		crewCrashProtection=0.6;   //0.25 Default, 1 LEA, RHSMELB 0.2
        explosionShielding=0.5;       //4 Default, 0.5 LEA, RHSMELB ????(Hull 0.5)

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_heli4_body_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_heli4_body_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_heli4_body_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_heli4_body_b_ar1.paa"
                };
            };
        
            class Woodland_4th
            {
                author = "Darknessvoid99";
                displayName = "Woodland";
                factions[] = {"4thmd_wd_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\woodland\dm_heli4_body_a_wd1.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_heli4_body_b_wd1.paa"
                };
            };
        /*
            class Desert_4th
            {
                author = "Darknessvoid99";
                displayName = "Desert";
                factions[] = {"4thmd_de_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\desert\dm_heli4_body_a_de1.paa",
                    "darkmod_4thmd_veh\data\desert\dm_heli4_body_b_de1.paa"
                };
            };

            class Boreal_4th
            {
                author = "Darknessvoid99";
                displayName = "Boreal";
                factions[] = {"4thmd_bl_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\boreal\dm_heli4_body_a_bl1.paa",
                    "darkmod_4thmd_veh\data\boreal\dm_heli4_body_b_bl1.paa"
                };
            };

            class Artic_4th
            {
                author = "Darknessvoid99";
                displayName = "Artic";
                factions[] = {"4thmd_ac_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\artic\dm_heli4_body_a_ac1.paa",
                    "darkmod_4thmd_veh\data\artic\dm_heli4_body_b_ac1.paa"
                };
            };

            class Jungle_4th
            {
                author = "Darknessvoid99";
                displayName = "Jungle";
                factions[] = {"4thmd_ju_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\jungle\dm_heli4_body_a_ju1.paa",
                    "darkmod_4thmd_veh\data\jungle\dm_heli4_body_b_ju1.paa"
                };
            };
        */
        };

        ace_refuel_fuelCapacity = 2250;
    };

    class Land_Pod_Heli_Transport_04_bench_F;
    class 4thmd_s_pod4_bench_ar1 : Land_Pod_Heli_Transport_04_bench_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_bench_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Bench Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_bench_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_bench_ar1.paa"
                };
            };
        };
    };

    class Land_Pod_Heli_Transport_04_covered_F;
    class 4thmd_s_pod4_transport_ar1 : Land_Pod_Heli_Transport_04_covered_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_transport_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Transport Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa"
                };
            };
        };
    };

    class Land_Pod_Heli_Transport_04_box_F;
    class 4thmd_s_pod4_cargo_ar1 : Land_Pod_Heli_Transport_04_box_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_cargo_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Cargo Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        ace_cargo_space = 50;

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa"
                };
            };
        };
    };


    class Land_Pod_Heli_Transport_04_ammo_F;
    class 4thmd_s_pod4_ammo_ar1 : Land_Pod_Heli_Transport_04_ammo_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_ammo_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Ammo Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        ace_rearm_defaultSupply = 9000;

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa"
                };
            };
        };
    };

    class Land_Pod_Heli_Transport_04_fuel_F;
    class 4thmd_s_pod4_fuel_ar1 : Land_Pod_Heli_Transport_04_fuel_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_fuel_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Fuel Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_fuel_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        ace_refuel_fuelCargo = 8000;

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_fuel_ar1.paa"
                };
            };
        };
    };

    class Land_Pod_Heli_Transport_04_medevac_F;
    class 4thmd_s_pod4_medevac_ar1 : Land_Pod_Heli_Transport_04_medevac_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_medevac_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Medevac Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa"
                };
            };
        };
    };

    class Land_Pod_Heli_Transport_04_repair_F;
    class 4thmd_s_pod4_repair_ar1 : Land_Pod_Heli_Transport_04_repair_F // ALPHA Texture
    {
        _generalMacro = "4thmd_s_pod4_repair_ar1";
        author = "Darknessvoid99";
        side = 3;
        scope = 2;
        scopeCurator = 2;
        faction = "4thmd_ar_faction";
        editorCategory="4thmd_supplies";
		editorSubcategory="4thmd_ar_containers";
        displayName = "Taru Repair Pod";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa",
        };
        textureList[] = {"Arid_4th",1,};

        ace_cargo_space = 12;
        ace_refuel_fuelCargo = 3000;
        ace_rearm_defaultSupply = 4000;

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_pod4_a_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_pod4_b_ar1.paa"
                };
            };
        };
    };

    class I_LT_01_cannon_F;
    class 4thmd_v_lt1_ca_ar1 : I_LT_01_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_tankettes";
        displayName = "AAV-2 Weasel II (MK20)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",        //Main
            "darkmod_4thmd_veh\data\arid\dm_lt1_cannon_ar1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",  //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"          //Slat
        };
        textureList[] = {"Arid_4th",1,};
    
        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_cannon_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_cannon_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_cannon_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 120;
        ace_cargo_space = 0;
    };

    class I_LT_01_AT_F;
    class 4thmd_v_lt1_at_ar1 : I_LT_01_AT_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_tankettes";
        displayName = "AAV-2A Weasel II (AT)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",     //Main
            "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",     //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",  //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"     //Slat
        };
        textureList[] = {"Arid_4th",1,};

    
        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 120;
        ace_cargo_space = 0;
    };

    class I_LT_01_AA_F;
    class 4thmd_v_lt1_aa_ar1 : I_LT_01_AA_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_tankettes";
        displayName = "AAV-2B Weasel II (AA)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",        //Main
            "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",  //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"          //Slat
        };
        textureList[] = {"Arid_4th",1,};

    
        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_ataa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 120;
        ace_cargo_space = 0;
    };


    class I_LT_01_scout_F;
    class 4thmd_v_lt1_rc_ar1 : I_LT_01_scout_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_tankettes";
        displayName = "AAV-2C Weasel II (RFCV)";

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",        //Main
            "darkmod_4thmd_veh\data\arid\dm_lt1_radar_ar1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",  //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"          //Slat
        };
        textureList[] = {"Arid_4th",1,};    
        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_radar_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_radar_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_lt1_radar_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        class HitPoints;
        ace_refuel_fuelCapacity = 120;
        ace_cargo_space = 0;
    };

    class 4thmd_v_lt1_rc_ar1_c : 4thmd_v_lt1_rc_ar1
    {
        scope = DEBUG;
        editorSubcategory = "4thmd_attachment";

        displayName = "Command Attachment";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_lt1_main_ar1.paa",       //Main
            "darkmod_4thmd_veh\data\arid\dm_lt1_radar_ar1.paa",      //Specialised
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",     //Camo
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"            //Slat
        };

        armor = 600;            // 150 -WPC 360
        armorStructural = 5;    // 5

        class HitPoints : HitPoints
        {
            class HitEngine
            {
                armor = 10000;                   // -15
                armorComponent = "hit_engine";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 1000;              // 0.2
                name = "hit_engine_point";
                passThrough = 1;                // 0.5
                radius = 0.3;
                visual = "-";
            };

            class HitFuel
            {
                armor = 10000;                   // 0.5
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;
                material = -1;
                minimalHit = 1000;              // 0.1
                name = "hit_fuel_point";
                passThrough = 1;                // 0.3
                radius = 0.3;
                visual = "-";
            };

            /*class HitHull
            {
                armor = 10000;                   // 2  
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = 50;
                minimalHit = 1000;              // 0.2
                name = "hit_hull_point";
                passThrough = 1;
                radius = 0.3;
                visual = "zbytek";
            };*/
        };
    };

    class 4thmd_v_lt1_rc_ar1_c_wcc : 4thmd_v_lt1_rc_ar1_c
    {
        scope = DEBUG;
        displayName = "WCC-9 Pandur II";
    };

    class 4thmd_v_lt1_rc_ar1_c_tcc : 4thmd_v_lt1_rc_ar1_c
    {
        scope = DEBUG;
        displayName = "TCC-2 Stalker";

        armor = 900;            // 150 -TPC 375
        armorStructural = 6;    // 5
    };

    class B_AFV_Wheeled_01_cannon_F;
    class 4thmd_v_afv1_ar1 : B_AFV_Wheeled_01_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Tanks";
        displayName = "WTD-4 Rooikat";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 400;
    };

    class B_AFV_Wheeled_01_up_cannon_F;
    class 4thmd_v_afv1_up_ar1 : B_AFV_Wheeled_01_up_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Tanks";
        displayName = "WLT-4 Rooikat";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_cmdt_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_cmdt_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_cmdt_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_afv1_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_wheel_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_cmdt_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_afv1_extra_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 400;
    };

    class I_APC_Wheeled_03_cannon_F;
    class 4thmd_v_apc3w_ar1 : I_APC_Wheeled_03_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_armoredwheel";
        displayName = "WFV-9 Pandur II";
        class EventHandlers;
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc3w_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 300;
    };

    class 4thmd_v_apc3w_u_ar1 : 4thmd_v_apc3w_ar1
    {
        displayName = "WPC-9 Pandur II";
        driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		class Turrets
		{
		};
		threat[]={0,0,0};
		forceInGarage=1;
        class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc3w_body_u_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_u_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_u_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_u_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };
    };

    class 4thmd_v_apc3w_m_ar1 : 4thmd_v_apc3w_u_ar1
    {
        displayName = "WPC-9 Pandur II (Medical)";
        attendant = 1;
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc3w_body_m_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_m_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_m_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_m_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_m_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };
    };

    class 4thmd_v_apc3w_e_ar1 : 4thmd_v_apc3w_u_ar1
    {
        scope = DEBUG;
        displayName = "WEV-9 Pandur II";
        
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 4000;
        ace_refuel_fuelCargo = 1200;
        ace_refuel_hooks[] = {{-0.801,-0.920,-0.55},{1.536,-0.920,-0.55}};
        ace_cargo_space = 12;
        ace_repair_spareWheels = 8;
        ace_repair_spareTracks = 2;

        class EventHandlers;

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc3w_body_e_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_e_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_e_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_e_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext1_e_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\arid\dm_apc3w_ext2_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };
    };

    class 4thmd_v_apc3w_es_ar1 : 4thmd_v_apc3w_e_ar1
    {
        scope = 2;
        ace_refuel_fuelCargo = -1;

        class EventHandlers: EventHandlers
		{
			class 4thmd_eng
            {
                init="_veh = _this select 0;_fuel1 = '4thmd_s_ft1_apc3w_ar1' createVehicle position _veh;_fuel1 attachTo [_veh, [1.327,-0.795,-0.7]];_fuel2 = '4thmd_s_ft1_apc3w_ar1' createVehicle position _veh;_fuel2 attachTo [_veh, [-0.512,-0.752,-0.7]];_trac1 = 'Land_TankTracks_01_short_F' createVehicle position _veh;_trac1 attachTo [_veh, [1.224,-1.948,-0.275]];_trac2 = 'Land_TankTracks_01_short_F' createVehicle position _veh;_trac2 attachTo [_veh, [-0.286,-2.178,-0.275]];_trac2 setDir 270;_trac2 setPosWorld getPosWorld _trac2;_spok1 = 'Land_TankRoadWheels_01_single_F' createVehicle position _veh;_spok1 attachTo [_veh, [0.394,-0.652,-0.152]];_spok2 = 'Land_TankRoadWheels_01_single_F' createVehicle position _veh;_spok2 attachTo [_veh, [-0.533,-1.502,-0.152]];";
            };
		};
    };

    class 4thmd_v_apc3w_c_ar1 : 4thmd_v_apc3w_u_ar1
    {
        scope = DEBUG;
        displayName = "WCC-9 Pandur II";
        class EventHandlers;
    };

    class 4thmd_v_apc3w_cs_ar1 : 4thmd_v_apc3w_c_ar1
    {
        scope = 2;
        displayName = "WCC-9 Pandur II (it actually works holy shit)";
        class EventHandlers: EventHandlers
		{
			class 4thmd_cmd
            {
                PostInit = "_this spawn {_veh = _this select 0; sleep 0.05;_cmd = '4thmd_v_lt1_rc_ar1_c_tcc' createVehicle position _veh;_cmd attachTo [_veh, [0.65,-1.308,0]];_cmd lockDriver true;_veh setVariable ['CmdObject', _cmd, true];_crew = crew _veh; if (count _crew > 0) then {createVehicleCrew _cmd;_crew2 = crew _cmd; _group = group (_crew select 0);_crew2 joinSilent _group;};_curators = allCurators;{_x removeCuratorEditableObjects [[_cmd]];}forEach _curators;};";
                killed = "_veh = _this select 0; _cmd = _veh getVariable 'CmdObject';_cmd setDamage 1;";
                Deleted = "_veh = _this select 0; _cmd = _veh getVariable 'CmdObject';deleteVehicle _cmd;";

            };
		};
    };

    class 4thmd_v_apc3w_ua_ar1 : 4thmd_v_apc3w_u_ar1
    {
        displayName = "WPC-9 Pandur II (RWS)";
        class EventHandlers: EventHandlers
		{
			class 4thmd_rtrt
            {
                PostInit = "_veh = _this select 0;_trt = '4thmd_v_ugv1_a_ar1_t' createVehicle position _veh;_trt attachTo [_veh, [0,0,0.25]];_ai = 'B_UAV_AI' createVehicle position _veh;_trt lockDriver true;createVehicleCrew _trt;";
                killed = "_trt setDamage 1;";
                Deleted = "deleteVehicle _trt;";
            };
		};
    };

    class O_APC_Tracked_02_cannon_F;
    class 4thmd_v_apc2t_ar1 : O_APC_Tracked_02_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "4thmd_armoredtrack";
        displayName = "TFV-2T Stalker";
        class EventHandlers;
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws30_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 450;
    };

    class 4thmd_v_apc2t_u_ar1 : 4thmd_v_apc2t_ar1
    {
        displayName = "TPC-2 Stalker";
        driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		class Turrets
		{
		};
		threat[]={0,0,0};
		forceInGarage=1;
        class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";

            class 4thmd_unarm
            {
                init="if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
            };
		};

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };
    };

    class 4thmd_v_apc2t_m_ar1 : 4thmd_v_apc2t_u_ar1
    {
        displayName = "TPC-2 Stalker (Medical)";
        attendant = 1;
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc2t_body_m_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_m_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };
    };

    class 4thmd_v_apc2t_eb_ar1 : 4thmd_v_apc2t_u_ar1
    {
        scope = DEBUG;
        displayName = "TEV-2 Stalker (Engineer)";

        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 4000;
        ace_cargo_space = 14;
        ace_repair_spareWheels = 6;
        ace_repair_spareTracks = 4;

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc2t_body_e_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
            "",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };
        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_e_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        class EventHandlers;
    };

    class 4thmd_v_apc2t_e_ar1 : 4thmd_v_apc2t_eb_ar1
    {
        scope = 2;
        displayName = "TPC-2 Stalker (Engineer)";
        ace_refuel_fuelCargo = 1600;
        ace_refuel_hooks[] = {{-0.845,-0.980,-0.55},{0.845,-0.980,-0.55}};
    };

    class 4thmd_v_apc2t_es_ar1 : 4thmd_v_apc2t_eb_ar1
    {
        scope = 2;
        ace_refuel_fuelCargo = -1;

        class EventHandlers: EventHandlers
		{
			class 4thmd_eng
            {
                init="_veh = _this select 0;_fuel1 = '4thmd_s_ft1_apc2t_ar1' createVehicle position _veh;_fuel1 attachTo [_veh, [0.688,-1,-0.9]];_fuel2 = '4thmd_s_ft1_apc2t_ar1' createVehicle position _veh;_fuel2 attachTo [_veh, [-0.688,-1,-0.9]];_trac1 = 'Land_TankTracks_01_short_F' createVehicle position _veh;_trac1 attachTo [_veh, [0.749,-2.118,-0.355]];_trac2 = 'Land_TankTracks_01_short_F' createVehicle position _veh;_trac2 attachTo [_veh, [-0.551,-1.801,-0.388]];_trac2 setDir 270;_trac2 setPosWorld getPosWorld _trac2;_spok1 = 'Land_TankRoadWheels_01_single_F' createVehicle position _veh;_spok1 attachTo [_veh, [-0.597,-2.521,-0.302]];";
            };
		};
    };

    class 4thmd_v_apc2t_c_ar1 : 4thmd_v_apc2t_u_ar1
    {
        scope = DEBUG;
        displayName = "TCC-2 Stalker";
        class EventHandlers;
    };

    class 4thmd_v_apc2t_cs_ar1 : 4thmd_v_apc2t_c_ar1
    {
        scope = 2;

        class EventHandlers: EventHandlers
		{
			class 4thmd_cmd
            {
                PostInit = "_veh = _this select 0;_cmd = '4thmd_v_lt1_rc_ar1_c_tcc' createVehicle position _veh;_cmd attachTo [_veh, [0,-1.308,-0.33]];_cmd lockDriver true;if (!isNull (crew _veh)) then {createVehicleCrew _cmd};";
                killed = "_cmd setDamage 1;";
                Deleted = "deleteVehicle _cmd;";
            };
		};
    };

    class 4thmd_v_apc2t_ua_ar1 : 4thmd_v_apc2t_u_ar1
    {
        displayName = "TPC-2 Stalker (RWS)";
        class EventHandlers: EventHandlers
		{
			class 4thmd_rtrt
            {
                PostInit = "_veh = _this select 0;_trt = '4thmd_v_ugv1_a_ar1_t' createVehicle position _veh;_trt attachTo [_veh, [-0.4,-1.5,0.1]];_ai = 'B_UAV_AI' createVehicle position _veh;_trt lockDriver true; createVehicleCrew _trt;_veh setVariable ['TrtObject', _trt, true];systemChat format ['TRT created: %1', _trt];";
                killed = "_veh = _this select 0;_trt = _veh getVariable 'TrtObject';systemChat format ['Turret in killed event: %1', _trt];if (!isNull _trt) then { _trt setDamage 1; };";
                Deleted = "_veh = _this select 0;_trt = _veh getVariable 'TrtObject';systemChat format ['Turret in deleted event: %1', _trt];if (!isNull _trt) then { deleteVehicle _trt; };";
            };
		};
    };

    class B_UGV_01_rcws_F;
    class 4thmd_v_ugv1_a_ar1 : B_UGV_01_rcws_F
    {
        scope = 1;
        side = 1;
        class EventHandlers;
        faction = "4thmd_ar_faction";
        hiddenSelectionsTextures[] = 
        {
            "",
            "",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
        };

        class HitPoints;
    };

    class 4thmd_v_ugv1_a_ar1_t : 4thmd_v_ugv1_a_ar1
    {
        scope = DEBUG;
        editorSubcategory = "4thmd_attachment";

        displayName = "Remote Turret 12.7/40mm";
        hiddenSelectionsTextures[] = 
        {
            "",
            "",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
        };

        armor = 300;                             // 30
        armorStructural = 6;                    // 4

        class HitPoints : HitPoints
        {
            class HitEngine
            {
                armor = 10000;                    // 2
                armorComponent = "hit_engine";
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 1000;              // 0.2
                name = "hit_engine_point";
                passThrough = 1;                // 0.5
                radius = 0.3;
                visual = "-";
            };

            class HitFuel
            {
                armor = 10000;                    // 1
                armorComponent = "hit_fuel";
                explosionShielding = 0.6;
                material = -1;
                minimalHit = 1000;              // 0.1
                name = "hit_fuel_point";
                passThrough = 1;                // 0.3
                radius = 0.3;
                visual = "-";
            };

            class HitHull
            {
                armor = 10000;                    // 2
                armorComponent = "hit_hull";
                explosionShielding = 0.2;
                material = 50;
                minimalHit = 1000;              // 0.2
                name = "hit_hull_point";
                passThrough = 1;
                radius = 0.3;
                visual = "zbytek";
            };
        };
    };

    class O_APC_Tracked_02_AA_F;
    class 4thmd_v_apc2t_aa_ar1 : O_APC_Tracked_02_AA_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        displayName = "TAA-2 Tigris";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_apcaa_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
            "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_apcaa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_apcaa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_apc2t_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_apcaa_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa",
                    "darkmod_4thmd_veh\data\slat\dm_slat_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 450;
    };

    class O_Heli_Attack_02_dynamicLoadout_F;
    class 4thmd_v_heli2_ar1 : O_Heli_Attack_02_dynamicLoadout_F // ALPHA Texture
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_h_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Helicopters";
        displayName = "AH-48 Kajiman";
        epeImpulseDamageCoef=20;
		crewCrashProtection=0.7;
        explosionShielding=0.25;

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_heli2a_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_heli2a_extra_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_heli2a_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_heli2a_extra_ar1.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 1950;
    };

    class I_Plane_Fighter_04_F;
    class 4thmd_v_jet4_base1 : I_Plane_Fighter_04_F
	{
        scope = 0;

		class Components;
	};

    class 4thmd_v_jet4_base2 : 4thmd_v_jet4_base1
    {
        class Components : Components
		{
			class TransportPylonsComponent;
		};
    };

    class 4thmd_v_jet4_ar1 : 4thmd_v_jet4_base2 // ALPHA Texture
    {
        scope = 2;
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_pilot_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Planes";
        displayName = "F/A-39 Gryphon";
        epeImpulseDamageCoef=20;
		crewCrashProtection=0.4;
        explosionShielding=0.5;

        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_jet4f_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_jet4f_extra_ar1.paa",
            "darkmod_4thmd_veh\data\jet4_pod\dm_jet4f_pods.paa",
            "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
			"a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_jet4f_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_jet4f_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_jet4f_pods_ar1.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"
                };
            };

            class Woodland_4th
            {
                author = "Darknessvoid99";
                displayName = "Woodland";
                factions[] = {"4thmd_wd_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\woodland\dm_jet4f_body_wd_01.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_jet4f_extra_wd_01.paa",
                    "darkmod_4thmd_veh\data\woodland\dm_jet4f_pods_01.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_06_ca.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_09_ca.paa",
                    "a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_06_ca.paa"
                };
            };
        };

        ace_refuel_fuelCapacity = 3900;

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
			{
				class pylons
				{
					class Pylon1            //Light / Wingtip
                    {
                        attachment="PylonMissile_Missile_BIM9X_x1";
                        hardpoints[] =
                        {
                            "I_BIM9X_RAIL",
							"I_AMRAAM_C_RAIL",
                        };

						priority=5;
						maxweight=300;
						UIposition[]={0.55000001,0.40000001};
                    };
					class pylon2 : pylon1
                    {
                        UIposition[]={0.1,0.40000001};
						mirroredMissilePos=1;
                    };

					class pylon3            //Medium
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114N";
                        hardpoints[] =
                        {
                            "I_BIM9X_RAIL",
                            "I_BIM9X_DUAL_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AGM65_RAIL",
                            "DM_ACE_4AGM114_Pylon"
                        };

                        priority=4;
						maxweight=750;
						UIposition[]={0.5,0.34999999};
					};
					class pylon4 : pylon3
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114L";
                        UIposition[]={0.15000001,0.34999999};
						mirroredMissilePos=3;
					};

					class pylon5            //Heavy
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114L";
                        hardpoints[]=
						{
							"I_BIM9X_RAIL",
							"I_BIM9X_DUAL_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AMRAAM_C_DUAL_RAIL",
							"I_AGM65_RAIL",
							"I_AGM65_DUAL_RAIL",
							"I_GBU12",
                            "DM_ACE_4AGM114_Pylon"
						};

						priority=3;
						maxweight=1200;
						UIposition[]={0.44999999,0.30000001};
					};
					class Pylon6 : pylon5
					{
						UIposition[]={0.2,0.30000001};
						mirroredMissilePos=5;
					};
				};
            };
        };
    };

    class O_MBT_02_cannon_F;
    class 4thmd_v_mbt2_ar1 : O_MBT_02_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Tanks";
        displayName = "MBT-10 Black Eagle";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa"
                };
            };
        };
    };

    class O_MBT_02_railgun_F;
    class 4thmd_v_mbt2_rgun_ar1 : O_MBT_02_railgun_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Tanks";
        displayName = "MBT-10X Futura";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_turret_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa"
                };
            };
        };
    };

    class O_T_MBT_02_arty_ghex_F;
    class 4thmd_v_mbt2_tart_ar1 : O_T_MBT_02_arty_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_artillery";
        displayName = "SPG-10 Sochor";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_tart_ar1.paa",
            "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid (Pine)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_tart_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gp1.paa"
                };
            };

            class Arid_4th_sd
            {
                author = "Darknessvoid99";
                displayName = "Arid (Sand)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_tart_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_sd1.paa"
                };
            };

            class Arid_4th_gs
            {
                author = "Darknessvoid99";
                displayName = "Arid (Grass)";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_body_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_tart_ar1.paa",
                    "darkmod_4thmd_veh\data\arid\dm_mbt2_extra_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa",
                    "darkmod_4thmd_veh\data\camonet\dm_camonet_gs1.paa"
                };
            };
        };
    };

    class I_MRAP_03_F;
    class 4thmd_v_mrap3_ar1 : I_MRAP_03_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Cars";
        displayName = "MTV-18 Fennek";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
                };
            };
        };
    };

    class I_MRAP_03_hmg_F;
    class 4thmd_v_mrap3_hmg_ar1 : I_MRAP_03_hmg_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Cars";
        displayName = "MTV-18 Fennek (HMG)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
                };
            };
        };
    };

    class I_MRAP_03_gmg_F;
    class 4thmd_v_mrap3_gmg_ar1 : I_MRAP_03_gmg_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "4thmd_u_crew_ar1";
        faction = "4thmd_ar_faction";
        editorSubcategory = "EdSubcat_Cars";
        displayName = "MTV-18 Fennek (GMG)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
            "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
        };
        textureList[] = {"Arid_4th",1,};

        class TextureSources
        {
            class Arid_4th
            {
                author = "Darknessvoid99";
                displayName = "Arid";
                factions[] = {"4thmd_ar_faction"};
                textures[] = 
                {
                    "darkmod_4thmd_veh\data\arid\dm_mrap3_ar1.paa",
                    "darkmod_4thmd_veh\data\turrets\dm_rcws1240_ar1.paa"
                };
            };
        };
    };

    #include "CfgVeh_wd.hpp"
/*
    #include "CfgVeh_de.hpp"
    #include "CfgVeh_bl.hpp"
    #include "CfgVeh_ac.hpp"
    #include "CfgVeh_ju.hpp"
*/

    class 4thmd_s_ft1_forest;
    class 4thmd_s_ft1_apc3w_ar1 : 4thmd_s_ft1_forest
    {
        scope = DEBUG;
        scopeCurator = DEBUG;
        displayName = "Fuel Valve";
        editorSubcategory = "4thmd_attachment";

        ace_refuel_fuelCargo = 600;
        ace_cargo_canLoad = 0;
        ace_dragging_canCarry = 0;
        ace_dragging_canDrag = 0;
    };

    class 4thmd_s_ft1_apc2t_ar1 : 4thmd_s_ft1_apc3w_ar1
    {
        ace_refuel_fuelCargo = 800;
    };

    class 4thmd_s_ft1_lt1_ar1 : 4thmd_s_ft1_apc3w_ar1
    {
        displayName = "External Fuel Tank";
        ace_refuel_fuelCargo = 450;
    };
};
