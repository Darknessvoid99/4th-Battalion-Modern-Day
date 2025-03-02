class CfgPatches
{
    class darkmod_4thmd_ilbe
	{
        weapons[] = {};
        units[] = 
        {
            "4thmd_rad1_DD_ar0",
            "4thmd_rad1_DD_ar1",
            "4thmd_rad1_DD_ar2",
            "4thmd_rad1_DD_ar3",
            "4thmd_rad1_DD_ar0m",
            "4thmd_rad1_DD_ar1m",
            "4thmd_rad1_DD_ar2m",
            "4thmd_rad1_DD_ar3m",
            "4thmd_rad1_blade_ar0",
            "4thmd_rad1_blade_ar1",
            "4thmd_rad1_blade_ar2",
            "4thmd_rad1_blade_ar3",
            "4thmd_rad1_blade_ar0m",
            "4thmd_rad1_blade_ar1m",
            "4thmd_rad1_blade_ar2m",
            "4thmd_rad1_blade_ar3m",
            "4thmd_rad1_whip_ar0",
            "4thmd_rad1_whip_ar1",
            "4thmd_rad1_whip_ar2",
            "4thmd_rad1_whip_ar3",
            "4thmd_rad1_whip_ar0m",
            "4thmd_rad1_whip_ar1m",
            "4thmd_rad1_whip_ar2m",
            "4thmd_rad1_whip_ar3m",
            "4thmd_rad1_whipext_ar0",
            "4thmd_rad1_whipext_ar1",
            "4thmd_rad1_whipext_ar2",
            "4thmd_rad1_whipext_ar3",
            "4thmd_rad1_whipext_ar0m",
            "4thmd_rad1_whipext_ar1m",
            "4thmd_rad1_whipext_ar2m",
            "4thmd_rad1_whipext_ar3m",

            "4thmd_rad1_DD_wd0",
            "4thmd_rad1_DD_wd1",
            "4thmd_rad1_DD_wd2",
            "4thmd_rad1_DD_wd3",
            "4thmd_rad1_DD_wd0m",
            "4thmd_rad1_DD_wd1m",
            "4thmd_rad1_DD_wd2m",
            "4thmd_rad1_DD_wd3m",
            "4thmd_rad1_blade_wd0",
            "4thmd_rad1_blade_wd1",
            "4thmd_rad1_blade_wd2",
            "4thmd_rad1_blade_wd3",
            "4thmd_rad1_blade_wd0m",
            "4thmd_rad1_blade_wd1m",
            "4thmd_rad1_blade_wd2m",
            "4thmd_rad1_blade_wd3m",
            "4thmd_rad1_whip_wd0",
            "4thmd_rad1_whip_wd1",
            "4thmd_rad1_whip_wd2",
            "4thmd_rad1_whip_wd3",
            "4thmd_rad1_whip_wd0m",
            "4thmd_rad1_whip_wd1m",
            "4thmd_rad1_whip_wd2m",
            "4thmd_rad1_whip_wd3m",
            "4thmd_rad1_whipext_wd0",
            "4thmd_rad1_whipext_wd1",
            "4thmd_rad1_whipext_wd2",
            "4thmd_rad1_whipext_wd3",
            "4thmd_rad1_whipext_wd0m",
            "4thmd_rad1_whipext_wd1m",
            "4thmd_rad1_whipext_wd2m",
            "4thmd_rad1_whipext_wd3m"
        };

        magazines[] = {};
        requiredAddons[] = 
        {   
            "cba_main",
            "task_force_radio",
            "task_force_radio_items",
            "A3_Data_F",
            "darkmod_4thmd",
            "tfw_radios_main",
            "tfw_radios_rf3080",
            "tfw_radios_ilbe"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.6.2402120213";
    };
};

class CfgVehicles
{
    class tfw_ilbe_whip_Base;
    class tfw_ilbe_whipext_Base;
    class tfw_ilbe_DD_Base;
    class tfw_ilbe_blade_Base;

    //UHF
        class 4thmd_rad1_DD_ar0 : tfw_ilbe_DD_Base
        {
            scope=2;
            scopeCurator=2;
            scopeArsenal=2;
            displayName="[ARMCO] ILBE R-UHF Pack (Arid)";

            mass = 120;
            maximumLoad = 200;
            tf_range = 15000;

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar0.paa"
            };
        };

        class 4thmd_rad1_DD_ar1 : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S1)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar1.paa"
            };
        };

        class 4thmd_rad1_DD_ar2 : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S2)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar2.paa"
            };
        };

        class 4thmd_rad1_DD_ar3 : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S3)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar3.paa"
            };
        };

        class 4thmd_rad1_DD_ar0m : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (Arid/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar0.paa"
            };
        };

        class 4thmd_rad1_DD_ar1m : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S1/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar1.paa"
            };
        };

        class 4thmd_rad1_DD_ar2m : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S2/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar2.paa"
            };
        };

        class 4thmd_rad1_DD_ar3m : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S3/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar3.paa"
            };
        };

    //VHF
        class 4thmd_rad1_blade_ar0 : tfw_ilbe_blade_Base
        {
            scope=2;
            scopeCurator=2;
            scopeArsenal=2;
            displayName="[ARMCO] ILBE R-VHF Pack (Arid)";

            mass = 130;
            maximumLoad = 200;
            tf_range = 25000;

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar0.paa"
            };
        };

        class 4thmd_rad1_blade_ar1 : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S1)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar1.paa"
            };
        };

        class 4thmd_rad1_blade_ar2 : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S2)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar2.paa"
            };
        };

        class 4thmd_rad1_blade_ar3 : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S3)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar3.paa"
            };
        };

        class 4thmd_rad1_blade_ar0m : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (Arid/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar0.paa"
            };
        };

        class 4thmd_rad1_blade_ar1m : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S1/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar1.paa"
            };
        };

        class 4thmd_rad1_blade_ar2m : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S2/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar2.paa"
            };
        };

        class 4thmd_rad1_blade_ar3m : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S3/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar3.paa"
            };
        };
    
    //WHIP
        class 4thmd_rad1_whip_ar0 : tfw_ilbe_whip_Base
        {
            scope=2;
            scopeCurator=2;
            scopeArsenal=2;
            displayName="[ARMCO] ILBE R-Whip Pack (Arid)";

            mass = 150;
            maximumLoad = 200;
            tf_range = 25000;

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar0.paa"
            };
        };

        class 4thmd_rad1_whip_ar1 : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar1.paa"
            };
        };

        class 4thmd_rad1_whip_ar2 : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar2.paa"
            };
        };

        class 4thmd_rad1_whip_ar3 : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar3.paa"
            };
        };

        class 4thmd_rad1_whip_ar0m : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Arid/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar0.paa"
            };
        };

        class 4thmd_rad1_whip_ar1m : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar1.paa"
            };
        };

        class 4thmd_rad1_whip_ar2m : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar2.paa"
            };
        };

        class 4thmd_rad1_whip_ar3m : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar3.paa"
            };
        };

    //WHIP(Extended)
        class 4thmd_rad1_whipext_ar0 : tfw_ilbe_whipext_Base
        {
            scope=2;
            scopeCurator=2;
            scopeArsenal=2;
            displayName="[ARMCO] ILBE R-Whip Pack (Arid)";

            mass = 150;
            maximumLoad = 200;
            tf_range = 50000;

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar0.paa"
            };
        };

        class 4thmd_rad1_whipext_ar1 : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar1.paa"
            };
        };

        class 4thmd_rad1_whipext_ar2 : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar2.paa"
            };
        };

        class 4thmd_rad1_whipext_ar3 : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_b_ar3.paa"
            };
        };

        class 4thmd_rad1_whipext_ar0m : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Arid/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar0.paa"
            };
        };

        class 4thmd_rad1_whipext_ar1m : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar1.paa"
            };
        };

        class 4thmd_rad1_whipext_ar2m : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar2.paa"
            };
        };

        class 4thmd_rad1_whipext_ar3m : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3/MED)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_m_ar3.paa"
            };
        };

    //Include Other Patterns 
    #include "wood\CfgV_equ.hpp"
    /*
    #include "dest\CfgV_equ.hpp"
    #include "jung\CfgV_equ.hpp"
    #include "borl\CfgV_equ.hpp"
    #include "snbl\CfgV_equ.hpp"
    #include "artc\CfgV_equ.hpp"
    #include "navy\CfgV_equ.hpp"
    */
};

class XtdGearModels
{
    class CfgVehicles
    {
        class 4thmd_b_rad1
        {
            label = "[ARMCO] ILBE Pack";
            options[]=
            {
                "4thmd_type",
                "4thmd_role",
                "4thmd_color",
                "4thmd_camo"
            };

            class 4thmd_type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Radio Model";
                values[]=
				{
					"4thmd_t_uhf",
					"4thmd_t_vhf",
					"4thmd_t_whp",
                    "4thmd_t_wex"
				};

                class 4thmd_t_uhf
                {
                    label = "UHF";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_t_vhf
                {
                    label = "VHF";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_t_whp
                {
                    label = "Whip";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_t_wex
                {
                    label = "Whip(Ext.)";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };
            };

            class 4thmd_role
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Role";
                values[]=
				{
					"4thmd_r_rmn",
					"4thmd_r_med"
				};

                class 4thmd_r_rmn
                {
                    label = "Rifleman";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_rifleman.paa";
                };

                class 4thmd_r_med
                {
                    label = "Medical";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_medical.paa";
                };
            };

            class 4thmd_color
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
                label = "Camouflage";
                values[] =
                {
                    "4thmd_arid",
                    "4thmd_wood",
                    "4thmd_dest",
                    "4thmd_jung",
                    "4thmd_borl",
                    "4thmd_wint",
                    "4thmd_arct",
                    "4thmd_navy"
                };

                class 4thmd_arid
                {
                    label = "Arid";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_aridapat.paa";
                    description = "ARMCO APAT4-AR(Arid) Pattern";
                };

                class 4thmd_wood
                {
                    label = "Woodland";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_woodapat.paa";
                    description = "ARMCO APAT4-WD(Woodland) Pattern";
                };

                class 4thmd_dest
                {
                    label = "Desert";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_destapat.paa";
                    description = "ARMCO APAT4-DE(Desert) Pattern";
                };

                class 4thmd_jung
                {
                    label = "Jungle";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_jungapat.paa";
                    description = "ARMCO APAT4-JU(Jungle) Pattern";
                };

                class 4thmd_borl
                {
                    label = "Boreal";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_borlapat.paa";
                    description = "ARMCO APAT4-BO(Boreal) Pattern";
                };

                class 4thmd_wint
                {
                    label = "Snow Boreal";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_wintapat.paa";
                    description = "ARMCO APAT4-SB(Snow Boreal) Pattern";
                };

                class 4thmd_arct
                {
                    label = "Arctic";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_arctapat.paa";
                    description = "ARMCO APAT4-AC(Arctic) Pattern";
                };

                class 4thmd_navy
                {
                    label = "Naval";
                    image = "darkmod_4thmd\data\0icon\aax\icon_c_navyapat.paa";
                    description = "ARMCO APAT4-NA(Naval) Pattern";
                };
            };

            class 4thmd_camo
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
                label = "Pattern";
                values[] =
                {
                    "4thmd_c_standard",
                    "4thmd_c_solid1",
                    "4thmd_c_solid2",
                    "4thmd_c_solid3"
                };

                class 4thmd_c_standard
                {
                    label = "Standard";
                    image = "darkmod_4thmd\data\0icon\aax\icon_p_camo.paa";
                };

                class 4thmd_c_solid1
                {
                    label = "Solid 1";
                    image = "darkmod_4thmd\data\0icon\aax\icon_p_solid1.paa";
                };

                class 4thmd_c_solid2
                {
                    label = "Solid 2";
                    image = "darkmod_4thmd\data\0icon\aax\icon_p_solid2.paa";
                };

                class 4thmd_c_solid3
                {
                    label = "Solid 3";
                    image = "darkmod_4thmd\data\0icon\aax\icon_p_solid3.paa";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgVehicles
    {
        //ILBE Radiopack (rad1)
            //UHF
                class 4thmd_rad1_DD_ar0
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_DD_ar1
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_DD_ar2
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_DD_ar3
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };

                class 4thmd_rad1_DD_ar0m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_DD_ar1m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_DD_ar2m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_DD_ar3m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };
            //VHF
                class 4thmd_rad1_blade_ar0
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_blade_ar1
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_blade_ar2
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_blade_ar3
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };

                class 4thmd_rad1_blade_ar0m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_blade_ar1m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_blade_ar2m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_blade_ar3m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };
            //WHIP
                class 4thmd_rad1_whip_ar0
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whip_ar1
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whip_ar2
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whip_ar3
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };

                class 4thmd_rad1_whip_ar0m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whip_ar1m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whip_ar2m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whip_ar3m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };
            //WHIP(Extended)
                class 4thmd_rad1_whipext_ar0
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whipext_ar1
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whipext_ar2
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whipext_ar3
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };

                class 4thmd_rad1_whipext_ar0m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whipext_ar1m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whipext_ar2m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whipext_ar3m
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };
        //Include Other Patterns
        #include "wood\XtdI_CfgV_equ.hpp"
        /*
        #include "dest\XtdI_CfgV_equ.hpp"
        #include "jung\XtdI_CfgV_equ.hpp"
        #include "borl\XtdI_CfgV_equ.hpp"
        #include "snbl\XtdI_CfgV_equ.hpp"
        #include "artc\XtdI_CfgV_equ.hpp"
        #include "navy\XtdI_CfgV_equ.hpp"
        */
    };
};