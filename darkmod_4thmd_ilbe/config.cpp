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
            "4thmd_rad1_DD_ar0t",
            "4thmd_rad1_DD_ar1t",
            "4thmd_rad1_DD_ar2t",
            "4thmd_rad1_DD_ar3t",
            "4thmd_rad1_blade_ar0",
            "4thmd_rad1_blade_ar1",
            "4thmd_rad1_blade_ar2",
            "4thmd_rad1_blade_ar3",
            "4thmd_rad1_blade_ar0m",
            "4thmd_rad1_blade_ar1m",
            "4thmd_rad1_blade_ar2m",
            "4thmd_rad1_blade_ar3m",
            "4thmd_rad1_blade_ar0t",
            "4thmd_rad1_blade_ar1t",
            "4thmd_rad1_blade_ar2t",
            "4thmd_rad1_blade_ar3t",
            "4thmd_rad1_whip_ar0",
            "4thmd_rad1_whip_ar1",
            "4thmd_rad1_whip_ar2",
            "4thmd_rad1_whip_ar3",
            "4thmd_rad1_whip_ar0m",
            "4thmd_rad1_whip_ar1m",
            "4thmd_rad1_whip_ar2m",
            "4thmd_rad1_whip_ar3m",
            "4thmd_rad1_whip_ar0t",
            "4thmd_rad1_whip_ar1t",
            "4thmd_rad1_whip_ar2t",
            "4thmd_rad1_whip_ar3t",
            "4thmd_rad1_whipext_ar0",
            "4thmd_rad1_whipext_ar1",
            "4thmd_rad1_whipext_ar2",
            "4thmd_rad1_whipext_ar3",
            "4thmd_rad1_whipext_ar0m",
            "4thmd_rad1_whipext_ar1m",
            "4thmd_rad1_whipext_ar2m",
            "4thmd_rad1_whipext_ar3m",
            "4thmd_rad1_whipext_ar0t",
            "4thmd_rad1_whipext_ar1t",
            "4thmd_rad1_whipext_ar2t",
            "4thmd_rad1_whipext_ar3t",

            "4thmd_rad1_DD_wd0",
            "4thmd_rad1_DD_wd1",
            "4thmd_rad1_DD_wd2",
            "4thmd_rad1_DD_wd3",
            "4thmd_rad1_DD_wd0m",
            "4thmd_rad1_DD_wd1m",
            "4thmd_rad1_DD_wd2m",
            "4thmd_rad1_DD_wd3m",
            "4thmd_rad1_DD_wd0t",
            "4thmd_rad1_DD_wd1t",
            "4thmd_rad1_DD_wd2t",
            "4thmd_rad1_DD_wd3t",
            "4thmd_rad1_blade_wd0",
            "4thmd_rad1_blade_wd1",
            "4thmd_rad1_blade_wd2",
            "4thmd_rad1_blade_wd3",
            "4thmd_rad1_blade_wd0m",
            "4thmd_rad1_blade_wd1m",
            "4thmd_rad1_blade_wd2m",
            "4thmd_rad1_blade_wd3m",
            "4thmd_rad1_blade_wd0t",
            "4thmd_rad1_blade_wd1t",
            "4thmd_rad1_blade_wd2t",
            "4thmd_rad1_blade_wd3t",
            "4thmd_rad1_whip_wd0",
            "4thmd_rad1_whip_wd1",
            "4thmd_rad1_whip_wd2",
            "4thmd_rad1_whip_wd3",
            "4thmd_rad1_whip_wd0m",
            "4thmd_rad1_whip_wd1m",
            "4thmd_rad1_whip_wd2m",
            "4thmd_rad1_whip_wd3m",
            "4thmd_rad1_whip_wd0t",
            "4thmd_rad1_whip_wd1t",
            "4thmd_rad1_whip_wd2t",
            "4thmd_rad1_whip_wd3t",
            "4thmd_rad1_whipext_wd0",
            "4thmd_rad1_whipext_wd1",
            "4thmd_rad1_whipext_wd2",
            "4thmd_rad1_whipext_wd3",
            "4thmd_rad1_whipext_wd0m",
            "4thmd_rad1_whipext_wd1m",
            "4thmd_rad1_whipext_wd2m",
            "4thmd_rad1_whipext_wd3m",
            "4thmd_rad1_whipext_wd0t",
            "4thmd_rad1_whipext_wd1t",
            "4thmd_rad1_whipext_wd2t",
            "4thmd_rad1_whipext_wd3t"
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

        class 4thmd_rad1_DD_ar0t : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (Arid/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar0.paa"
            };
        };

        class 4thmd_rad1_DD_ar1t : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S1/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar1.paa"
            };
        };

        class 4thmd_rad1_DD_ar2t : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S2/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar2.paa"
            };
        };

        class 4thmd_rad1_DD_ar3t : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (AR-S3/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar3.paa"
            };
        };

        class 4thmd_rad1_DD_toy : 4thmd_rad1_DD_ar0
        {
            displayName="[ARMCO] ILBE R-UHF Pack (Training Officer)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\rad1_toy.paa"
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

        class 4thmd_rad1_blade_ar0t : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (Arid/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar0.paa"
            };
        };

        class 4thmd_rad1_blade_ar1t : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S1/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar1.paa"
            };
        };

        class 4thmd_rad1_blade_ar2t : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S2/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar2.paa"
            };
        };

        class 4thmd_rad1_blade_ar3t : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (AR-S3/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar3.paa"
            };
        };

        class 4thmd_rad1_blade_toy : 4thmd_rad1_blade_ar0
        {
            displayName="[ARMCO] ILBE R-VHF Pack (Training Officer)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\rad1_toy.paa"
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

        class 4thmd_rad1_whip_ar0t : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Arid/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar0.paa"
            };
        };

        class 4thmd_rad1_whip_ar1t : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar1.paa"
            };
        };

        class 4thmd_rad1_whip_ar2t : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar2.paa"
            };
        };

        class 4thmd_rad1_whip_ar3t : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar3.paa"
            };
        };

        class 4thmd_rad1_whip_toy : 4thmd_rad1_whip_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Training Officer)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\rad1_toy.paa"
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

        class 4thmd_rad1_whipext_ar0t : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Arid/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar0.paa"
            };
        };

        class 4thmd_rad1_whipext_ar1t : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S1/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar1.paa"
            };
        };

        class 4thmd_rad1_whipext_ar2t : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S2/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar2.paa"
            };
        };

        class 4thmd_rad1_whipext_ar3t : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (AR-S3/TO)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\arid\rad1_t_ar3.paa"
            };
        };

        class 4thmd_rad1_whipext_toy : 4thmd_rad1_whipext_ar0
        {
            displayName="[ARMCO] ILBE R-Whip Pack (Training Officer)";

            hiddenSelectionsTextures[]=
            {
                "darkmod_4thmd_ilbe\data\rad1_toy.paa"
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
    class 4thmd_color_base;
    class 4thmd_camo_base;

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
					"4thmd_r_med",
                    "4thmd_r_to"
				};

                class 4thmd_r_rmn
                {
                    label = "Standard";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_r_med
                {
                    label = "";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_medical.paa";
                };

                class 4thmd_r_to
                {
                    label = "";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_trainer.paa";
                };
            };

            class 4thmd_color : 4thmd_color_base {};

            class 4thmd_camo : 4thmd_camo_base {};
        };

        class 4thmd_b_rad1_toy
        {
            label = "[ARMCO] ILBE Pack (TO)";
            options[]=
            {
                "4thmd_type"
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

                class 4thmd_rad1_DD_ar0t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_DD_ar1t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_DD_ar2t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_DD_ar3t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_uhf";
                    4thmd_role = "4thmd_r_to";
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

                class 4thmd_rad1_blade_ar0t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_blade_ar1t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_blade_ar2t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_blade_ar3t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_vhf";
                    4thmd_role = "4thmd_r_to";
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

                class 4thmd_rad1_whip_ar0t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whip_ar1t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whip_ar2t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whip_ar3t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_whp";
                    4thmd_role = "4thmd_r_to";
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

                class 4thmd_rad1_whipext_ar0t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                };

                class 4thmd_rad1_whipext_ar1t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                };

                class 4thmd_rad1_whipext_ar2t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                };

                class 4thmd_rad1_whipext_ar3t
                {
                    Model = "4thmd_b_rad1";
                    4thmd_type = "4thmd_t_wex";
                    4thmd_role = "4thmd_r_to";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                };

            //TO Yellow
                class 4thmd_rad1_DD_toy
                {
                    Model = "4thmd_b_rad1_toy";
                    4thmd_type = "4thmd_t_uhf";
                };

                class 4thmd_rad1_Blade_toy
                {
                    Model = "4thmd_b_rad1_toy";
                    4thmd_type = "4thmd_t_vhf";
                };

                class 4thmd_rad1_whip_toy
                {
                    Model = "4thmd_b_rad1_toy";
                    4thmd_type = "4thmd_t_whp";
                };

                class 4thmd_rad1_whipext_toy
                {
                    Model = "4thmd_b_rad1_toy";
                    4thmd_type = "4thmd_t_wex";
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