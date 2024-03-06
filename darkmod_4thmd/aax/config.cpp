class CfgPatches
{
    class darkmod_4thmd_aax
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {   
            "darkmod_4thmd",
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
    class CfgWeapons
    {
        class 4thmd_u_unif1_ar1
        {
            Model = "4thmd_u_unif1";
            type = "std";
            color = "ar";
            topcamo = "mc0";
            botcamo = "mc0";
        };

        class 4thmd_u_unif1_ar1_ss
        {
            Model = "4thmd_u_unif1";
            type = "sls";
            color = "ar";
            topcamo = "mc0";
            botcamo = "mc0";
        };

        class 4thmd_u_unif1_ar1_tt
        {
            Model = "4thmd_u_unif1";
            type = "tts";
            color = "ar";
            topcamo = "sc1";
            botcamo = "mc0";
        };

        class 4thmd_u_unif1_ar1_sw
        {
            Model = "4thmd_u_unif1";
            type = "sws";
            color = "ar";
            topcamo = "sc1";
            botcamo = "mc0";
        };

        class 4thmd_u_unif1_ar1_gh
        {
            Model = "4thmd_u_unif1";
            type = "ght";
            color = "ar";
            topcamo = "mc0";
            botcamo = "mc0";
        };

        class 4thmd_u_ghil1_ar1
        {
            Model = "4thmd_u_ghil1";
            color = "ar";
            camo = "gca";
        };

        class 4thmd_u_ghil1_ar1_b
        {
            Model = "4thmd_u_ghil1";
            color = "ar";
            camo = "gcb";
        };

        class 4thmd_u_ghil1_ar1_c
        {
            Model = "4thmd_u_ghil1";
            color = "ar";
            camo = "gcc";
        };

        #include "XtdI_CfgW_equ_wd.hpp"

    /*
        #include "XtdI_CfgW_equ_de.hpp"
        #include "XtdI_CfgW_equ_bl.hpp"
        #include "XtdI_CfgW_equ_sb.hpp"
        #include "XtdI_CfgW_equ_ac.hpp"
        #include "XtdI_CfgW_equ_ju.hpp"
    */
    };

    class CfgVehicles
    {
        class 4thmd_b_pac1_ar1
        {
            Model = "4thmd_b_pac1";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_b_pac2_ar1
        {
            Model = "4thmd_b_pac2";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_b_pac3_ar1
        {
            Model = "4thmd_b_pac3";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        class 4thmd_b_pac5_ar1
        {
            Model = "4thmd_b_pac5";
            color = "ar";
            camo = "mc0";
            role = "std";
        };

        #include "XtdI_CfgV_equ_wd.hpp"

    /*
        #include "XtdI_CfgV_equ_de.hpp"
        #include "XtdI_CfgV_equ_bl.hpp"
        #include "XtdI_CfgV_equ_sb.hpp"
        #include "XtdI_CfgV_equ_ac.hpp"
        #include "XtdI_CfgV_equ_ju.hpp"
    */
    };
};

class XtdGearModels
{
    class CfgWeapons
    {
        class 4thmd_u_unif1
        {
            options[]=
            {
                "type",
                "color",
                "topcamo",
                "botcamo"
            };

            class type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Type";
                values[]=
				{
					"std",
					"sls",
					"tts",
					"sws",
                    "ght"
				};
                class std
                {
                    label = "Standard";
                };

                class sls
                {
                    label = "Rolled Sleeves";
                };

                class tts
                {
                    label = "Tank Top";
                };

                class sws
                {
                    label = "Sweater";
                };

                class ght
                {
                    label = "Ghillie";
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
                    label = "Snowy Boreal";
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

            class topcamo
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Top Camouflage";
                values[]=
				{
                    "sc1",
					"sc2",
                    "sc3",
                    "sc4",
                    "mc0",
					"ac0",
                    "wc0"
				};

                class sc1
                {
                    label = "Solid 1";
                };

                class sc2
                {
                    label = "Solid 2";
                };

                class sc3
                {
                    label = "Solid 3";
                };

                class sc4
                {
                    label = "Solid 4";
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
            };

            class botcamo
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Top Camouflage";
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
                    label = "Solid 1";
                };
            };
        };

        class 4thmd_u_ghil1
        {
            options[]=
            {
                "color",
                "camo"
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
                    label = "Snowy Boreal";
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
                    "gca",
                    "gcb",
					"gcc",
                    "gcd"
				};

                class gca
                {
                    label = "Standard";
                };

                class gcb
                {
                    label = "Alt. 1";
                };

                class gcc
                {
                    label = "Alt. 2";
                };

                class gcd
                {
                    label = "Alt. 3";
                };
            };
        };
    };

    class CfgVehicles
    {
        class 4thmd_b_pac1
        {
            options[]=
            {
                "color",
                "camo",
                "role"
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
					"med",
                    "eng",
                    "eod"
				};

                class std
                {
                    label = "Standard";
                };

                class med
                {
                    label = "Medical";
                };

                class eng
                {
                    label = "Engineer";
                };

                class eod
                {
                    label = "EOD";
                };
            };
        };

        class 4thmd_b_pac2
        {
            options[]=
            {
                "color",
                "camo",
                "role"
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
					"med",
                    "eng",
                    "eod"
				};

                class std
                {
                    label = "Standard";
                };

                class med
                {
                    label = "Medical";
                };

                class eng
                {
                    label = "Engineer";
                };

                class eod
                {
                    label = "EOD";
                };
            };
        };

        class 4thmd_b_pac3
        {
            options[]=
            {
                "color",
                "camo",
                "role"
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
					"med",
                    "eng",
                    "eod"
				};

                class std
                {
                    label = "Standard";
                };

                class med
                {
                    label = "Medical";
                };

                class eng
                {
                    label = "Engineer";
                };

                class eod
                {
                    label = "EOD";
                };
            };
        };

        class 4thmd_b_pac5
        {
            options[]=
            {
                "color",
                "camo",
                "role"
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
					"med",
                    "eng",
                    "eod"
				};

                class std
                {
                    label = "Standard";
                };

                class med
                {
                    label = "Medical";
                };

                class eng
                {
                    label = "Engineer";
                };

                class eod
                {
                    label = "EOD";
                };
            };
        };
    };
};