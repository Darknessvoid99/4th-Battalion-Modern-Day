class CfgPatches
{
    class darkmod_4thmd_ilbe_aax
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {   
            "darkmod_4thmd",
            "darkmod_4thmd_ilbe",
            "aceax_main",
            "aceax_gearinfo",
            "aceax_arsenal",
            "aceax_ingame",
            "aceax_data_tier1"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
    };
};

class XtdGearInfos
{
    class CfgVehicles
    {
        class 4thmd_rad1_DD_ar1
        {
            Model = "4thmd_b_rad1";
            type = "DD";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_rad1_blade_ar1
        {
            Model = "4thmd_b_rad1";
            type = "bl";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_rad1_whip_ar1
        {
            Model = "4thmd_b_rad1";
            type = "wp";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_rad1_whipext_ar1
        {
            Model = "4thmd_b_rad1";
            type = "we";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        #include "XtdI_pac_wd.hpp"

    /*
        #include "XtdI_pac_de.hpp"
        #include "XtdI_pac_bl.hpp"
        #include "XtdI_pac_sb.hpp"
        #include "XtdI_pac_ac.hpp"
        #include "XtdI_pac_ju.hpp"
    */
    };
};

class XtdGearModels
{
    class CfgVehicles
    {
        class 4thmd_b_rad1
        {
            options[]=
            {
                "type",
                "color",
                "camo",
                "role"
            };

            class type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Radio Type";
                values[]=
				{
					"dd",
					"bl",
					"wp",
					"we"
				};
                
                class dd
                {
                    label = "UHF";
                };

                class bl
                {
                    label = "VHF";
                };

                class wp
                {
                    label = "Whip";
                };

                class we
                {
                    label = "Whip (Ext)";
                };
            };

            class color
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Environment";
                values[]=
				{
					"ar",
					"wd",
					"de",
					"bl",
                    "sb",
                    "ac",
                    "ju"
				};
                class ar
                {
                    label = "Arid";
                };

                class wd
                {
                    label = "Woodland";
                };

                class de
                {
                    label = "Desert";
                };

                class bl
                {
                    label = "Boreal";
                };

                class sb
                {
                    label = "Snow Boreal";
                };

                class ac
                {
                    label = "Artic";
                };

                class ju
                {
                    label = "Jungle";
                };
            };

            class camo
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camouflage";
                values[]=
				{
                    "mc0",
					"ac0",
                    "wc0",
                    "sc0"
				};

                class mc0
                {
                    label = "Standard";
                };

                class ac0
                {
                    label = "Alternate";
                };

                class wc0
                {
                    label = "Wildcam";
                };

                class sc0
                {
                    label = "Solid";
                };
            };

            class role
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Role";
                values[]=
				{
                    "std",
					"med"
				};

                class std
                {
                    label = "Standard";
                };

                class med
                {
                    label = "Medical";
                };
            };
        };
    };
};