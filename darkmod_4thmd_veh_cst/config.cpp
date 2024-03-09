class CfgPatches 
{
    class darkmod_4thmd_veh_cst
    {
        weapons[] = {};
        units[] = 
        {
            "dm4th_mbt2_c02",
            "dm4th_mbt2_arty_c02",
            "dm4th_apc2w_c02",
            "dm4th_apc2t_c02",
            "dm4th_apc2t_aa_c02",
            "dm4th_mrap2_c02",
            "dm4th_mrap2_c02_hmg",
            "dm4th_mrap2_c02_gmg"
        };
        
        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "darkmod_4thmd_veh_c",
            "IP_CSAT_ST"
        };
        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.2.2402120240";
    };
};

class CfgVehicles
{

//mbt2 / T-100 Black Eagle + 2S9 Variant
    class O_MBT_02_cannon_F;
    class IP_O_MBT_02_cannon_FST : O_MBT_02_cannon_F
    {
        hiddenSelectionsTextures[]=
		{
			"\IP_CSAT_ST\armour\txt\mbt_02_body_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\mbt_02_turret_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
		};
        textureList[] = {"WhiteHex",1};

        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
                author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
			};
            
            class GreenHex
            {
                displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\armour\txt\mbt_02_body_coSnowHex.paa",
			        "\IP_CSAT_ST\armour\txt\mbt_02_turret_coSnowHex.paa",
			        "\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
				};
            };

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_mbt2_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mbt2_turret_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mbt2_extra_c01.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Green_Co.paa"
                };
            };

            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_mbt2_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mbt2_turret_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mbt2_extra_c02.paa",
                    "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
                };
            };
        };
    };

    class O_MBT_02_arty_F;
	class IP_O_MBT_02_arty_FST: O_MBT_02_arty_F
	{
        
        hiddenSelectionsTextures[]=
		{
			"\IP_CSAT_ST\armour\txt\mbt_02_body_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\mbt_01_scorcher_hexarid_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
			"\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
		};
        textureList[] = {"WhiteHex",1};

		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
                author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"a3\data_f\vehicles\turret_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_scorcher_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
					"a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_mbt2_arty_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mbt2_arty_turret_c01.paa",
                    "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
                    "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\armour\txt\mbt_02_body_coSnowHex.paa",
                    "\IP_CSAT_ST\armour\txt\mbt_01_scorcher_hexarid_coSnowHex.paa",
                    "\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_mbt2_arty_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mbt2_arty_turret_c02.paa",
                    "\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
                };
            };
		};
	};

    class dm4th_mbt2_c02 : IP_O_MBT_02_cannon_FST
    {
        _generalMacro = "dm4th_mbt2_c02";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "T-100 Black Eagle (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_mbt2_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mbt2_turret_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mbt2_extra_c02.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

    class dm4th_mbt2_arty_c02 : IP_O_MBT_02_arty_FST
    {
        _generalMacro = "dm4th_mbt2_arty_c01";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "2S9 Sochor (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_mbt2_arty_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mbt2_arty_turret_c02.paa",
            "\IP_CSAT_ST\armour\txt\mbt_02_coSnowHex.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

//apc2w / Otokar Arma
    class O_APC_Wheeled_02_rcws_v2_F;
    class IP_O_APC_Wheeled_02_rcws_FST : O_APC_Wheeled_02_rcws_v2_F
    {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
        hiddenSelectionsTextures[]=
		{
			"\IP_CSAT_ST\armour\txt\apc_wheeled_02_ext_01_coSnowHex.paa",
            "\IP_CSAT_ST\armour\txt\apc_wheeled_02_ext_02_coSnowHex.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
		};
        textureList[] = {"WhiteHex",1};

        class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
					"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
					"a3\data_f\vehicles\turret_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
					"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
					"a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
					"A3\armor_f\data\cage_csat_green_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_apc2w_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_apc2w_extra_c01.paa",
                    "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
                    "A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\armour\txt\apc_wheeled_02_ext_01_coSnowHex.paa",
                    "\IP_CSAT_ST\armour\txt\apc_wheeled_02_ext_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
                    "A3\armor_f\data\cage_csat_green_CO.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_apc2w_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_apc2w_extra_c02.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
                    "A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
    };

    class dm4th_apc2w_c02 : IP_O_APC_Wheeled_02_rcws_FST
    {
        _generalMacro = "dm4th_apc2w_c02";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "Otokar ARMA (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_apc2w_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_apc2w_extra_c02.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

//apc2t / BM-2T + AA Variant
    class O_APC_Tracked_02_cannon_F;
    class IP_O_APC_Tracked_02_cannon_FST : O_APC_Tracked_02_cannon_F
    {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
        hiddenSelectionsTextures[] =
		{
			"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_01_hexarid_coSnowHex.paa",
            "\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_02_hexarid_coSnowHex.paa",
            "\IP_CSAT_ST\armour\txt\rcws30_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
		};
        textureList[] = {"WhiteHex",1};

        class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa",
					"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa",
					"A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
					"A3\armor_f\data\cage_csat_green_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                "darkmod_4thmd_veh_cst\data\dv_apc2t_body_c01.paa",
                "darkmod_4thmd_veh_cst\data\dv_apc2t_extra_c01.paa",
                "darkmod_4thmd_veh_cst\data\dv_apc2t_turret_c01.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
				"A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_01_hexarid_coSnowHex.paa",
		        	"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_02_hexarid_coSnowHex.paa",
		        	"\IP_CSAT_ST\armour\txt\rcws30_coSnowHex.paa",
                    "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
				    "A3\armor_f\data\cage_csat_green_CO.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_apc2t_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_apc2t_extra_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_apc2t_turret_c02.paa",
                    "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
				    "A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
    };

    class O_APC_Tracked_02_AA_F;
    class IP_O_APC_Tracked_02_AA_FST : O_APC_Tracked_02_AA_F
    {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
        hiddenSelectionsTextures[]=
		{
			"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_01_aa_hexarid_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_02_hexarid_coSnowHex.paa",
			"\IP_CSAT_ST\armour\txt\apc_tracked_01_aa_tower_coSnowHex.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
		};
        textureList[] = {"WhiteHex",1};

        class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_aa_hexarid_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa",
					"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa",
					"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
					"A3\armor_f\data\cage_csat_green_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                "darkmod_4thmd_veh_cst\data\dv_apc2t_aa_body_c01.paa",
                "darkmod_4thmd_veh_cst\data\dv_apc2t_aa_extra_c01.paa",
                "darkmod_4thmd_veh_cst\data\dv_apc2t_aa_turret_c01.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
				"A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_01_aa_hexarid_coSnowHex.paa",
                    "\IP_CSAT_ST\armour\txt\apc_tracked_02_ext_02_hexarid_coSnowHex.paa",
                    "\IP_CSAT_ST\armour\txt\apc_tracked_01_aa_tower_coSnowHex.paa",
                    "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
				    "A3\armor_f\data\cage_csat_green_CO.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_apc2t_aa_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_apc2t_aa_extra_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_apc2t_aa_turret_c02.paa",
                    "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
				    "A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
    };

    class dm4th_apc2t_c02 : IP_O_APC_Tracked_02_cannon_FST
    {
        _generalMacro = "dm4th_apc2t_c02";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "BM-2T Stalker (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_apc2t_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_apc2t_extra_c02.paa",
            "darkmod_4th_veh_cst\data\dv_apc2t_turret_c02.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

    class dm4th_apc2t_aa_c02 : IP_O_APC_Tracked_02_AA_FST
    {
        _generalMacro = "dm4th_apc2t_aa_c02";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "ZSU-35 Tigris (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_apc2t_aa_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_apc2t_aa_extra_c02.paa",
            "darkmod_4th_veh_cst\data\dv_apc2t_aa_turret_c02.paa",
            "A3\Armor_F\Data\camonet_AAF_stripe_green_CO.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

// mrap2 / Katatel + HMG & GMG Variants
    class O_MRAP_02_F;
    class IP_O_MRAP_02_FST : O_MRAP_02_F
    {
        hiddenSelectionsTextures[]=
		{
			"\IP_CSAT_ST\cars\txt\mrap_02_ext_01_coSnowHex.paa",
			"\IP_CSAT_ST\cars\txt\mrap_02_ext_02_coSnowHex.paa",
			"\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
		};
        textureList[] = {"WhiteHex",1};

        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_extra_c01.paa",
                    "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\cars\txt\mrap_02_ext_01_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\mrap_02_ext_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
                };
            };
        };
    };

    class O_MRAP_02_hmg_F;
    class IP_O_MRAP_02_hmg_FST : O_MRAP_02_hmg_F
    {
        textureList[] = {"WhiteHex",1};

        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_extra_c01.paa",
                    "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\cars\txt\mrap_02_ext_01_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\mrap_02_ext_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
                };
            };
        };
    };

    class O_MRAP_02_gmg_F;
    class IP_O_MRAP_02_gmg_FST : O_MRAP_02_gmg_F
    {
        textureList[] = {"WhiteHex",1};

        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_body_c01.paa",
                    "darkmod_4thmd_veh_cst\data\dv_mrap2_extra_c01.paa",
                    "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
                };
            };

            class WhiteHex
            {
                displayName="White Hex";
				author="Kydoimos";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
				textures[]=
				{
					"\IP_CSAT_ST\cars\txt\mrap_02_ext_01_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\mrap_02_ext_02_coSnowHex.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
				};
            };
            
            class WhiteHex_4th
            {
                author = "Darknessvoid99";
                displayName = "White Hex ARMCO Captured";
                factions[] = {"dmarm_faction","OPF_F","OPF_T_F","IP_CSAT_ST"};
                textures[] = 
                {
                    "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
                    "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
                    "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
                };
            };
        };
    };

    class dm4th_mrap2_c02 : IP_O_MRAP_02_FST
    {
        _generalMacro = "dm4th_mrap2_c02";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "Karatel (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

    class dm4th_mrap2_c02_hmg : IP_O_MRAP_02_hmg_FST
    {
        _generalMacro = "dm4th_mrap2_c02_hmg";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "Karatel (HMG) (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };

    class dm4th_mrap2_c02_gmg : IP_O_MRAP_02_gmg_FST
    {
        _generalMacro = "dm4th_mrap2_c02_gmg";
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "dmarm_faction";
        editorSubcategory = "dm4th_categ_captured";
        displayName = "Karatel (GMG) (White Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4th_veh_cst\data\dv_mrap2_body_c02.paa",
            "darkmod_4th_veh_cst\data\dv_mrap2_extra_c02.paa",
            "\IP_CSAT_ST\cars\txt\turret_coSnowHex.paa"
        };
        textureList[] = {"WhiteHex_4th",1};
    };
};