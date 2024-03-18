class CfgPatches 
{
    class darkmod_4thmd_veh_usaf
	{
        weapons[] = {};
        units[] = 
        {
        };

        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "darkmod_4thmd_veh",
            "USAF_Main",
            "USAF_Missilebox",
            "USAF_Missilebox_C"
        };
        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.0.2402120315";
    };
};

class CfgVehicles
{
    class Plane;
    class Plane_Base_F: Plane
	{
		class Components;
	};

    class Plane_Fighter_04_Base_F: Plane_Base_F
    {
        class Components : Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylon1;
					class pylon2;
					class pylon3;
					class pylon4;
					class pylon5;
					class pylon6;
				};
			};
		};
    };
    class I_Plane_Fighter_04_F : Plane_Fighter_04_Base_F
    {
        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
			{
				class pylons : pylons
				{
					class pylon1 : pylon1 {};
					class pylon2 : pylon2 {};
					class pylon3 : pylon3
					{
						hardpoints[]=
						{
							"I_BIM9X_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AGM65_RAIL",
                            "UNI_Scalpel"
						};
					};
					class pylon4: pylon4
					{
						hardpoints[]=
						{
							"I_BIM9X_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AGM65_RAIL",
                            "UNI_Scalpel"
						};
					};
					class pylon5 : pylon5
					{
						hardpoints[]=
						{
							"I_BIM9X_RAIL",
							"I_BIM9X_DUAL_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AMRAAM_C_DUAL_RAIL",
							"I_AGM65_RAIL",
							"I_AGM65_DUAL_RAIL",
							"I_GBU12",
                            "UNI_Scalpel"
						};
					};
					class Pylon6: pylon6
					{
						hardpoints[]=
						{
							"I_BIM9X_RAIL",
							"I_BIM9X_DUAL_RAIL",
							"I_AMRAAM_C_RAIL",
							"I_AMRAAM_C_DUAL_RAIL",
							"I_AGM65_RAIL",
							"I_AGM65_DUAL_RAIL",
							"I_GBU12",
                            "UNI_Scalpel"
						};
					};
				};
			};
        };
    };

    class 4thmd_v_jet4_ar1 : I_Plane_Fighter_04_F // ALPHA Texture
    {
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
			{
				class pylons : pylons
				{
                    class pylon1 : pylon1 {};
					class pylon2 : pylon2 {};
					class pylon3 : pylon3
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114N";
					};
					class pylon4: pylon4
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114L";
					};
					class pylon5 : pylon5
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114L";
					};
					class Pylon6: pylon6
					{
                        attachment = "PylonRack_4Rnd_ACE_Hellfire_AGM114L";
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
                author = Darknessvoid99
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
    class 4thmd_s_ft1_vic_forest : 4thmd_s_ft1_forest
    {
        scope = DEBUG;
        scopeCurator = DEBUG;
        displayName = "Vehicle Fuel Valve";
        ace_refuel_fuelCargo = 1500;
        ace_cargo_canLoad = 0;
        ace_dragging_canCarry = 0;
        ace_dragging_canDrag = 0;
    };

    class 4thmd_s_ft1_sand;
    class 4thmd_s_ft1_vic_sand : 4thmd_s_ft1_sand
    {
        scope = DEBUG;
        scopeCurator = DEBUG;
        displayName = "Vehicle Fuel Valve";
        ace_refuel_fuelCargo = 1500;
        ace_cargo_canLoad = 0;
        ace_dragging_canCarry = 0;
        ace_dragging_canDrag = 0;
    };
};
