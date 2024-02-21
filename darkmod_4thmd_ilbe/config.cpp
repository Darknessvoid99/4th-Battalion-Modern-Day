class CfgPatches {
    class darkmod_4thmd_ilbe
	{
        weapons[] = {};
        units[] = 
        {
            "4thmd_rad1_DD_ar1",
            "4thmd_rad1_blade_ar1",
            "4thmd_rad1_whip_ar1",
            "4thmd_rad1_whipext_ar1",

            "4thmd_rad1_DD_wd1",
            "4thmd_rad1_blade_wd1",
            "4thmd_rad1_whip_wd1",
            "4thmd_rad1_whipext_wd1"
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

    class 4thmd_rad1_DD_ar1 : tfw_ilbe_DD_Base
    {
        scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="4Bt. Arid ILBE Radio Pack (UHF)";
		//picture="";
		hiddenSelectionsTextures[]=
		{
		    "darkmod_4thmd_ilbe\data\arid\dm_rad1_ar1.paa"
		};
    };

    class 4thmd_rad1_blade_ar1 : tfw_ilbe_blade_Base
    {
        scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="4Bt. Arid ILBE Radio Pack (VHF)";
		//picture="";
		hiddenSelectionsTextures[]=
		{
		    "darkmod_4thmd_ilbe\data\arid\dm_rad1_ar1.paa"
		};
    };
    class 4thmd_rad1_whip_ar1 : tfw_ilbe_whip_Base
    {
        scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="4Bt. Arid ILBE Radio Pack (Whip)";
		//picture="";
		hiddenSelectionsTextures[]=
		{
		    "darkmod_4thmd_ilbe\data\arid\dm_rad1_ar1.paa"
		};
    };
    class 4thmd_rad1_whipext_ar1 : tfw_ilbe_whipext_Base
    {
        scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="4Bt. Arid ILBE Radio Pack (Whip) Extended";
		//picture="";
		hiddenSelectionsTextures[]=
		{
		    "darkmod_4thmd_ilbe\data\arid\dm_rad1_ar1.paa"
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