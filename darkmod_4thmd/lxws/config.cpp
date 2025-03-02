class CfgPatches
{
    class darkmod_4thmd_lxws
	{
        weapons[] = 
        {
            "4thmd_h_brt2_alp_hs",
            "4thmd_h_brt2_sab_hs",
            "4thmd_h_brt2_zul_hs",
            "4thmd_h_brt2_phx_hs",
            "4thmd_h_brt2_ar0_hs",
            "4thmd_h_brt2_ar1_hs",
            "4thmd_h_brt2_ar2_hs",
            "4thmd_h_brt2_ar3_hs",
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
        //Standard
            class H_Beret_blk;
            class H_Beret_Headset_lxWS : H_Beret_blk
            {
                class ItemInfo;
            };

        //Headset
            class 4thmd_h_brt2_alp_hs : H_Beret_Headset_lxWS
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Beret (Alpha)";
                descriptionShort = "Armitage Alpha Blue Pattern<br/>Bowman Elite II Headset";

                TFAR_ExternalIntercomWirelessCapable = 1;

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_b_alp.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };

                class ItemInfo : ItemInfo
                {
                    mass = 4;
                };
            };

            class 4thmd_h_brt2_sab_hs : 4thmd_h_brt2_alp_hs
            {
                displayName = "[ARMCO] Beret (Sabre)";
                descriptionShort = "Armitage Sabre Red Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_b_sab.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_zul_hs : 4thmd_h_brt2_alp_hs
            {
                displayName = "[ARMCO] Beret (Zulu)";
                descriptionShort = "Armitage Zulu Green Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_b_zul.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };
            
            class 4thmd_h_brt2_phx_hs : 4thmd_h_brt2_alp_hs
            {
                displayName = "[ARMCO] Beret (Phoenix)";
                descriptionShort = "Armitage Phoenix Purple Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\brt2_b_phx.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_ar0_hs : 4thmd_h_brt2_alp_hs
            {
                displayName = "[ARMCO] Beret (Arid)";
                descriptionShort = "APAT4-AR Solid Type 4 Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar0.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_ar1_hs : 4thmd_h_brt2_ar0_hs
            {
                descriptionShort = "APAT4-AR Solid Type 1 Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar1.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_ar2_hs : 4thmd_h_brt2_ar0_hs
            {
                descriptionShort = "APAT4-AR Solid Type 2 Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar2.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

            class 4thmd_h_brt2_ar3_hs : 4thmd_h_brt2_ar0_hs
            {
                descriptionShort = "APAT4-AR Solid Type 3 Pattern<br/>Bowman Elite II Headset";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\brt2_p_ar3.paa",
                    "lxws\characters_f_lxws\headgear\pmc\data\headmic_co.paa"
                };
            };

    //Include Other Patterns
        #include "wood\XtdI_CfgW_equ.hpp"
        /*
        #include "dest\XtdI_CfgW_equ.hpp"
        #include "jung\XtdI_CfgW_equ.hpp"
        #include "borl\XtdI_CfgW_equ.hpp"
        #include "snbl\XtdI_CfgW_equ.hpp"
        #include "artc\XtdI_CfgW_equ.hpp"
        #include "navy\XtdI_CfgW_equ.hpp"
        */
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //Berets (brt2)
            class 4thmd_h_brt2_alp_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_alpha";
                4thmd_camo = "4thmd_c_standard";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_sab_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_sabre";
                4thmd_camo = "4thmd_c_standard";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_zul_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_zulu";
                4thmd_camo = "4thmd_c_standard";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_phx_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_phoenix";
                4thmd_camo = "4thmd_c_standard";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_ar0_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_standard";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_ar1_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid1";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_ar2_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid2";
                4thmd_headset = "4thmd_auxon";
            };

            class 4thmd_h_brt2_ar3_hs
            {
                Model = "4thmd_h_brt2";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid3";
                4thmd_headset = "4thmd_auxon";
            };

        //Include Other Patterns
        #include "wood\XtdI_CfgW_equ.hpp"
        /*
        #include "dest\XtdI_CfgW_equ.hpp"
        #include "jung\XtdI_CfgW_equ.hpp"
        #include "borl\XtdI_CfgW_equ.hpp"
        #include "snbl\XtdI_CfgW_equ.hpp"
        #include "artc\XtdI_CfgW_equ.hpp"
        #include "navy\XtdI_CfgW_equ.hpp"
        */
    };
};