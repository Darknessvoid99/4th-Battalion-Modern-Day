class CfgPatches
{
    class darkmod_4thmd_lxws
	{
        weapons[] = 
        {
            "4thmd_u_unif1_ar1",
            "4thmd_u_unif1_ru_ar0",
            "4thmd_u_unif1_tt_ar1",
            "4thmd_u_unif1_sw_ar1",
            "4thmd_u_unif1_gh_ar1",
            "4thmd_u_ghil1_ar1_a",
            "4thmd_u_ghil1_ar1_b",
            "4thmd_u_ghil1_ar1_c",

            "4thmd_u_unif1_wd1",
            "4thmd_u_unif1_wd1_ss",
            "4thmd_u_unif1_wd1_tt",
            "4thmd_u_unif1_wd1_sw",
            "4thmd_u_unif1_wd1_gh",
            "4thmd_u_ghil1_wd1_a",
            "4thmd_u_ghil1_wd1_b"
        };
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {   
                "darkmod_4thmd",
                "Characters_f_lxWS"
            };

        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
        skipWhenMissingDependencies = 1;
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgWeapons
{
    //Berets (brt2)
        //Alpha
            class H_Beret_blk;
            class H_Beret_Headset_lxWS : H_Beret_blk
            {
                ItemInfo;
            };

            class 4thmd_h_brt2_alp_hs : H_Beret_Headset_lxWS
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Beret";

                TFAR_ExternalIntercomWirelessCapable = 1;

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_alp.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };

                class ItemInfo : ItemInfo
                {
                    mass = 4;
                };
            };

            class 4thmd_h_brt2_a_ar0_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_a_ar0.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_a_ar1_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_a_ar1.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_a_ar2_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_a_ar2.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_a_ar3_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_a_ar3.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

        //Sabre
            class 4thmd_h_brt2_sab_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_sab.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_s_ar0_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_s_ar0.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_s_ar1_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_s_ar1.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_s_ar2_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_s_ar2.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_s_ar3_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_s_ar3.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

        //Zulu
            class 4thmd_h_brt2_zul_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_zul.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };
            
            class 4thmd_h_brt2_z_ar0_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_z_ar0.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_z_ar1_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_z_ar1.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_z_ar2_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_z_ar2.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_z_ar3_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_z_ar3.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

        //Phoenix
            class 4thmd_h_brt2_phx_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_phx.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_p_ar0_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar0.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_p_ar1_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar1.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_p_ar2_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar2.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_p_ar3_hs : 4thmd_h_brt2_alp_hs
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar3.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //Berets (brt2)


        //Include Other Patterns
        /*
        #include "wood\XtdI_CfgW_equ.hpp"
        #include "dest\XtdI_CfgW_equ.hpp"
        #include "jung\XtdI_CfgW_equ.hpp"
        #include "borl\XtdI_CfgW_equ.hpp"
        #include "snbl\XtdI_CfgW_equ.hpp"
        #include "artc\XtdI_CfgW_equ.hpp"
        #include "navy\XtdI_CfgW_equ.hpp"
        */
    };
};