class CfgPatches
{
    class 4th_custom_wep_aax
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {   
            "4th_custom_wep",
            "aceax_main",
            "aceax_gearinfo",
            "aceax_arsenal",
            "aceax_ingame"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        class 4th_w_m_858x70_dmr2_nut
        {
            Model = "4th_w_m_dmr2_nut";
            caliber = "858x70";
        };

        class 4th_w_m_127x99_dmr2_nut
        {
            Model = "4th_w_m_dmr2_nut";
            caliber = "127x99";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons
    {
        class 4th_w_m_dmr2_nut
        {
            options[]=
            {
                "caliber"
            };

            class caliber
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Caliber";
                values[]=
				{
					"858x70",
					"127x99"
				};
                
                class 858x70
                {
                    label = "8.58x70mm";
                };

                class 127x99
                {
                    label = "12.7x99mm";
                };
            };
        };
    };
};