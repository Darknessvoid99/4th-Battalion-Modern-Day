class CfgPatches 
{
    class darkmod_4thmd_veh_c //Darkmod, 4th Battalion - Modern Day, Vehicles, Captured
    {
        weapons[] = {};
        units[] = 
        {
            "4thmd_mbt2_c1",
            "4thmd_mbt2_arty_c1",
            "4thmd_mbt4_c1",
            "4thmd_mbt4_k_c1",
            "4thmd_apc2w_c1",
            "4thmd_apc2t_c1",
            "4thmd_apc2t_aa_c1",
            "4thmd_mrap2_c1",
            "4thmd_mrap2_c1_hmg",
            "4thmd_mrap2_c1_gmg",
            "4thmd_lsv2_c1",
            "4thmd_lsv2_c1_mg",
            "4thmd_lsv2_c1_at"
        };
        
        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "darkmod_4thmd_veh"
        };

        author = "Darknessvoid99";
        version = "0.1.3.2402120244";
    };
};

/*class Extended_PreStart_EventHandlers
{
	class darkmod_4thmd_veh_c_start
	{
        init = "call compile preprocessFileLineNumbers 'XEH_preStart.sqf'";
	};
};*/

class CfgFactionClasses
{
    class 4thmd_c_faction
    {
        displayName = "ARMCO 4th Battalion (Captured Vehicles)";
    };
};

//#define FOURTH_PAINT \
//init = "call darkmod_4thmd_veh_c_fnc_addRepaintInteractions"

class CfgVehicles
{

    //mbt2 / T-100 Black Eagle + 2S9 Variant
    class O_MBT_02_cannon_F;
    class O_T_MBT_02_cannon_ghex_F : O_MBT_02_cannon_F
    {
    /*
        class darkmod_4thmd_veh_c_repaint
        {
            FOURTH_PAINT;
        };
    */

        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
                author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
				textures[]=
				{
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_turret_ghex_CO.paa",
					"a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
            };

            class Hex_4th
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
                author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
				textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"darkmod_4thmd_veh\data\camonet\dm_camonet_os1.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex (ARMCO)";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_body_c1.paa",
                "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_turret_c1.paa",
                "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_extra_c1.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
                };
            };
        };
    };

    class MBT_02_arty_base_F;
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
                author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_arty_body_c1.paa",
                "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_arty_turret_c1.paa",
                "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
                "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
                };
            };
		};
	};

    class 4thmd_mbt2_c1 : O_T_MBT_02_cannon_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "T-100 Black Eagle (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_turret_c1.paa",
            "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_extra_c1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_MBT_02_arty_ghex_F;
    class 4thmd_mbt2_arty_c1 : O_T_MBT_02_arty_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "2S9 Sochor (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_arty_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mbt2\dv_mbt2_arty_turret_c1.paa",
            "a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa",
            "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    //mbt4 / T-14 Armata + K variant
    class Tank_F;
    class MBT_04_base_F : Tank_F
    {
        class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
                    "4thmd_c_faction",
					"OPF_T_F",
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"
				};
				factions[]=
				{
                    "4thmd_c_faction",
					"OPF_T_F",
					"OPF_F"
				};
			};
			class Jungle
			{
				displayName="$STR_A3_TEXTURESOURCES_JUNGLE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
				};
				factions[]=
				{
                    "4thmd_c_faction",
					"OPF_T_F",
					"OPF_F"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",
					"a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
				factions[]=
				{
                    "4thmd_c_faction",
					"OPF_T_F",
					"OPF_F"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_body_c1.paa",
                "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_turret_c1.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
                };
            };
		};
    };

    class O_T_MBT_04_cannon_F;
    class 4thmd_mbt4_c1 : O_T_MBT_04_cannon_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "T-14 Armata (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_turret_c1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_MBT_04_command_F;
    class 4thmd_mbt4_k_c1 : O_T_MBT_04_command_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "T-14K Armata (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mbt4\dv_mbt4_turret_c1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    //apc2w / Otakar Arma
    class Wheeled_APC_F;
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\apc2w\dv_apc2w_body_c1.paa",
                "darkmod_4thmd_veh_c\data\apc2w\dv_apc2w_extra_c1.paa",
                "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
                "A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
	};

    class O_T_APC_Wheeled_02_rcws_v2_ghex_F;
    class 4thmd_apc2w_c1 : O_T_APC_Wheeled_02_rcws_v2_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "Otokar ARMA (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\apc2w\dv_apc2w_body_c1.paa",
            "darkmod_4thmd_veh_c\data\apc2w\dv_apc2w_extra_c1.paa",
            "a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    //apc2t / BM-2T + AA Variant
    class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_body_c1.paa",
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_extra_c1.paa",
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_turret_c1.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
				"A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
	};

    class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_body_c1.paa",
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_extra_c1.paa",
                "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_turret_c1.paa",
                "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
				"A3\armor_f\data\cage_csat_green_CO.paa"
                };
            };
		};
	};

    class O_T_APC_Tracked_02_cannon_ghex_F;
    class 4thmd_apc2t_c1 : O_T_APC_Tracked_02_cannon_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "BM-2T Stalker (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_body_c1.paa",
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_extra_c1.paa",
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_turret_c1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_APC_Tracked_02_AA_ghex_F;
    class 4thmd_apc2t_aa_c1 : O_T_APC_Tracked_02_AA_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "ZSU-35 Tigris (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_body_c1.paa",
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_extra_c1.paa",
            "darkmod_4thmd_veh_c\data\apc2t\dv_apc2t_aa_turret_c1.paa",
            "darkmod_4thmd_veh\data\camonet\dm_camonet_to1.paa",
            "A3\armor_f\data\cage_csat_green_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class MRAP_02_base_F;
    class O_T_MRAP_02_ghex_F : MRAP_02_base_F
    {
        class TextureSources
        {
            class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
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
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_body_c1.paa",
                "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_extra_c1.paa",
                "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
                };
            };
        };
    };

    class 4thmd_mrap2_c1 : O_T_MRAP_02_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "Karatel (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_extra_c1.paa",
            "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_MRAP_02_hmg_ghex_F;
    class 4thmd_mrap2_c1_hmg : O_T_MRAP_02_hmg_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "Karatel (HMG) (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_extra_c1.paa",
            "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_MRAP_02_gmg_ghex_F;
    class 4thmd_mrap2_c1_gmg : O_T_MRAP_02_gmg_ghex_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "Karatel (GMG) (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\mrap2\dv_mrap2_extra_c1.paa",
            "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class Car_F;
    class LSV_02_base_F : Car_F
    {
        class TextureSources
        {
            class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
			};
            
            class Arid
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
				};
			};

			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
			};

            class GreenHex_4th
            {
                author = "Darknessvoid99";
                displayName = "Green Hex ARMCO Captured";
                factions[] = {"4thmd_c_faction","OPF_F","OPF_T_F"};
                textures[] = 
                {
                    "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_body_c1.paa",
                    "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_extra_c1.paa",
                    "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_interior_c1.paa",
                    "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
                };
            };
        };
    };

    class O_T_LSV_02_unarmed_F;
    class 4thmd_lsv2_c1 : O_T_LSV_02_unarmed_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "LSV Mk. II (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_extra_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_interior_c1.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_LSV_02_armed_F;
    class 4thmd_lsv2_c1_mg : O_T_LSV_02_armed_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "LSV Mk. II (M134) (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_extra_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_interior_c1.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };

    class O_T_LSV_02_AT_F;
    class 4thmd_lsv2_c1_at : O_T_LSV_02_AT_F
    {
        author = "Darknessvoid99";
        side = 1;
        crew = "B_crew_F";
        faction = "4thmd_c_faction";
        //displayName = "LSV Mk. II (Metis-M) (Green Hex)";
        hiddenSelectionsTextures[] = 
        {
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_body_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_extra_c1.paa",
            "darkmod_4thmd_veh_c\data\lsv2\dv_lsv2_interior_c1.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
        };
        textureList[] = {"GreenHex_4th",1};
    };
};