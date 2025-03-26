class CfgPatches
{
    class darkmod_4thmd_rhsusaf
	{
        weapons[] =
        {
            "4thmd_g_ushp_a_ar0",
            "4thmd_g_ushp_a_ar1",
            "4thmd_g_ushp_a_ar2",
            "4thmd_g_ushp_a_ar3",
            "4thmd_g_ushp_b_ar0",
            "4thmd_g_ushp_b_ar1",
            "4thmd_g_ushp_b_ar2",
            "4thmd_g_ushp_b_ar3",
            "4thmd_g_ushp_c_ar0",
            "4thmd_g_ushp_c_ar1",
            "4thmd_g_ushp_c_ar2",
            "4thmd_g_ushp_c_ar3",
            "4thmd_g_ushp_d_ar0",
            "4thmd_g_ushp_d_ar1",
            "4thmd_g_ushp_d_ar2",
            "4thmd_g_ushp_d_ar3",

        };
        units[] = {};

        magazines[] = {};
        requiredAddons[] = 
        {   
            "darkmod_4thmd",
            "rhsusf_c_troops",
            "rhsusf_infantry2"
        };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.6.2402120213";
    };
};

class CfgWeapons
{
    //HGU-56P (ushp)
        //No Mask, No Visor
            class rhsusf_hgu56p;
            class rhsusf_hgu56p_green : rhsusf_hgu56p
            {
                class ItemInfo;
            };

            class 4thmd_g_ushp_a_ar0 : rhsusf_hgu56p_green
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Pilot Helmet (Arid)";
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern<br/>Visor Up, Mask Off";

                TFAR_ExternalIntercomWirelessCapable = 1;
                ace_hearing_lowerVolume = 0.6;
                ace_hearing_protection = 1;

                class ItemInfo : ItemInfo
                {
                    mass = 50;

                    class HitpointsProtectionInfo
                    {
                        class Head
                        {
                            armor = 16;
                            hitPointName = "HitHead";
                            passThrough = 0.6;
                        };
                    };
                };

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar0.paa"
                };
            };

            class 4thmd_g_ushp_a_ar1 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar1.paa"
                };
            };

            class 4thmd_g_ushp_a_ar2 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar2.paa"
                };
            };

            class 4thmd_g_ushp_a_ar3 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar3.paa"
                };
            };

        //No Mask, Visor
            class 4thmd_g_ushp_b_ar0 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern<br/>Visor Down, Mask Off";

                model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

                class ItemInfo : ItemInfo
                {
                    uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
                };
            };

            class 4thmd_g_ushp_b_ar1 : 4thmd_g_ushp_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>Visor Down, Mask Off";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar1.paa"
                };
            };

            class 4thmd_g_ushp_b_ar2 : 4thmd_g_ushp_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern<br/>Visor Down, Mask Off";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar2.paa"
                };
            };

            class 4thmd_g_ushp_b_ar3 : 4thmd_g_ushp_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern<br/>Visor Down, Mask Off";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar3.paa"
                };
            };

        //Mask, No Visor
            class 4thmd_g_ushp_c_ar0 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern<br/>Visor Up, Mask On";

                model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

                class ItemInfo : ItemInfo
                {
                    uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
                };
            };

            class 4thmd_g_ushp_c_ar1 : 4thmd_g_ushp_c_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>Visor Up, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar1.paa"
                };
            };

            class 4thmd_g_ushp_c_ar2 : 4thmd_g_ushp_c_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern<br/>Visor Up, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar2.paa"
                };
            };

            class 4thmd_g_ushp_c_ar3 : 4thmd_g_ushp_c_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern<br/>Visor Up, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar3.paa"
                };
            };

        //Mask + Visor
            class 4thmd_g_ushp_d_ar0 : 4thmd_g_ushp_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern<br/>Visor Down, Mask On";

                model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

                class ItemInfo : ItemInfo
                {
                    uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
                };
            };

            class 4thmd_g_ushp_d_ar1 : 4thmd_g_ushp_d_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>Visor Down, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar1.paa"
                };
            };

            class 4thmd_g_ushp_d_ar2 : 4thmd_g_ushp_d_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern<br/>Visor Down, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar2.paa"
                };
            };

            class 4thmd_g_ushp_d_ar3 : 4thmd_g_ushp_d_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern<br/>Visor Down, Mask On";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\ushp_b_ar3.paa"
                };
            };
            
    //Include Other Patterns 
        #include "wood\CfgW_equ.hpp"
        //#include "dest\CfgW_equ.hpp"
        //#include "jung\CfgW_equ.hpp"
        //#include "borl\CfgW_equ.hpp"
        //#include "snbl\CfgW_equ.hpp"
        //#include "artc\CfgW_equ.hpp"
        //#include "navy\CfgW_equ.hpp"
};

class cfgGlasses
{
    //Shemaghs
        //Shemagh (usfs_a)
            class rhsusf_shemagh_od;
            class 4thmd_g_usfs_a_ar0 : rhsusf_shemagh_od
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Shemagh (Arid)";
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern";

                mass = 2;

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar0.paa"
                };
            };

            class 4thmd_g_usfs_a_ar1 : 4thmd_g_usfs_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar1.paa"
                };
            };

            class 4thmd_g_usfs_a_ar2 : 4thmd_g_usfs_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar2.paa"
                };
            };

            class 4thmd_g_usfs_a_ar3 : 4thmd_g_usfs_a_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar3.paa"
                };
            };

            class rhsusf_shemagh_gogg_od;
            class 4thmd_g_usfs_a_ar0_g : rhsusf_shemagh_gogg_od
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Shemagh (Arid)";
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern<br/>ESS Ballistic Goggles";

                mass = 2;

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar0.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_a_ar1_g : 4thmd_g_usfs_a_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar1.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_a_ar2_g : 4thmd_g_usfs_a_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar2.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_a_ar3_g : 4thmd_g_usfs_a_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc1_b_ar3.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

        //Shemagh 2 (usfs_b)
            class rhsusf_shemagh2_od;
            class 4thmd_g_usfs_b_ar0 : rhsusf_shemagh2_od
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Shemagh (Arid)";
                descriptionShort = "APAT4-AR Camouflage<br/>Standard Pattern";

                mass = 2;

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar0.paa"
                };
            };

            class 4thmd_g_usfs_b_ar1 : 4thmd_g_usfs_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar1.paa"
                };
            };

            class 4thmd_g_usfs_b_ar2 : 4thmd_g_usfs_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar2.paa"
                };
            };

            class 4thmd_g_usfs_b_ar3 : 4thmd_g_usfs_b_ar0
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar3.paa"
                };
            };

            class rhsusf_shemagh2_gogg_od;
            class 4thmd_g_usfs_b_ar0_g : rhsusf_shemagh2_gogg_od
            {
                scope = 2;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Shemagh (Arid)";
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>ESS Ballistic Goggles";

                mass = 2;

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar0.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_b_ar1_g : 4thmd_g_usfs_b_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 1 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar1.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_b_ar2_g : 4thmd_g_usfs_b_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 2 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar2.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

            class 4thmd_g_usfs_b_ar3_g : 4thmd_g_usfs_b_ar0_g
            {
                descriptionShort = "APAT4-AR Camouflage<br/>Solid Type 3 Pattern<br/>ESS Ballistic Goggles";

                hiddenSelectionsTextures[] =
                {
                    "darkmod_4thmd_rhsusaf\data\arid\usfc2_b_ar3.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa",
                    "rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"
                };
            };

        //No-Shemagh Compat (usfs_z)
            class None;
            class 4thmd_g_usfs_z_ar0 : None
            {
                scope = 2;
                displayName = "[ARMCO] None (Shemagh)";
                descriptionShort = "Something was meant to be here, right...?";
            };

            class 4thmd_g_usfs_z_ar1 : 4thmd_g_usfs_z_ar0 {};
            class 4thmd_g_usfs_z_ar2 : 4thmd_g_usfs_z_ar0 {};
            class 4thmd_g_usfs_z_ar3 : 4thmd_g_usfs_z_ar0 {};

            class rhsusf_oakley_goggles_blk;
            class 4thmd_g_usfs_z_ar0_g : rhsusf_oakley_goggles_blk
            {
                scope = 2;
                displayName = "[ARMCO] ESS Goggles (Shemagh)";
                descriptionShort = "ESS Ballistic Goggles";
            };
            class 4thmd_g_usfs_z_ar1_g : 4thmd_g_usfs_z_ar0_g {};
            class 4thmd_g_usfs_z_ar2_g : 4thmd_g_usfs_z_ar0_g {};
            class 4thmd_g_usfs_z_ar3_g : 4thmd_g_usfs_z_ar0_g {};

    //Include Other Patterns 
        #include "wood\CfgG_equ.hpp"
        //#include "dest\CfgG_equ.hpp"
        //#include "jung\CfgG_equ.hpp"
        //#include "borl\CfgG_equ.hpp"
        //#include "snbl\CfgG_equ.hpp"
        //#include "artc\CfgG_equ.hpp"
        //#include "navy\CfgG_equ.hpp"
};

class XtdGearModels
{
    class 4thmd_color_base;
    class 4thmd_camo_base;
    class 4thmd_nocamo_base;
    class 4thmd_ess_base;

    class CfgWeapons
    {
        class 4thmd_h_ushp
        {
            label = "[ARMCO] HGU-56/P";
            options[]=
            {
                "4thmd_color",
                "4thmd_camo",
                "4thmd_visr",
                "4thmd_mask",
            };

            class 4thmd_color : 4thmd_color_base {};

            class 4thmd_camo : 4thmd_camo_base {};

            class 4thmd_visr
            {
                alwaysSelectable = 1;
                changeingame = 1;
				changedelay = 1;
                label = "Visor Status";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "Up";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Raise Visor";
                };

                class 4thmd_auxon
                {
                    label = "Down";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Lower Visor";
                };
            };

            class 4thmd_mask
            {
                alwaysSelectable = 1;
                changeingame = 1;
				changedelay = 3;
                label = "Mask Status";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Detach Mask";
                };

                class 4thmd_auxon
                {
                    label = "Mask";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Attach Mask";
                };
            };
        };
    };

    class cfgGlasses
    {
        class 4thmd_g_usfs
        {
            label = "[ARMCO] Shemagh";
            options[]=
            {
                "4thmd_color",
                "4thmd_camo",
                "4thmd_fpos",
                "4thmd_ess",
            };

            class 4thmd_color : 4thmd_color_base {};

            class 4thmd_camo : 4thmd_nocamo_base {};

            class 4thmd_fpos
            {
                alwaysSelectable = 1;
                changeingame = 1;
				changedelay = 1;
                label = "Shemagh Status/Position";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxdn",
                    "4thmd_auxup"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Remove Shemagh";
                };

                class 4thmd_auxdn : 4thmd_auxof
                {
                    label = "Chin";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Lower Shemagh";
                };

                class 4thmd_auxup : 4thmd_auxof
                {
                    label = "Mouth";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Raise Shemagh";
                };
            };

            class 4thmd_ess : 4thmd_ess_base {};
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //HGU-56P (ushp)
            class 4thmd_g_ushp_a_ar0
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_standard";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_a_ar1
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid1";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_a_ar2
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid2";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_a_ar3
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid3";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_b_ar0
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_standard";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_b_ar1
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid1";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_b_ar2
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid2";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_b_ar3
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid3";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxof";
            };

            class 4thmd_g_ushp_c_ar0
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_standard";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_c_ar1
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid1";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_c_ar2
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid2";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_c_ar3
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid3";
                4thmd_visr = "4thmd_auxof";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_d_ar0
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_standard";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_d_ar1
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid1";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_d_ar2
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid2";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxon";
            };

            class 4thmd_g_ushp_d_ar3
            {
                Model = "4thmd_h_ushp";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_solid3";
                4thmd_visr = "4thmd_auxon";
                4thmd_mask = "4thmd_auxon";
            };

        //Include Other Patterns
            #include "wood\XtdI_CfgW_equ.hpp"
            //#include "dest\XtdI_CfgW_equ.hpp"
            //#include "jung\XtdI_CfgW_equ.hpp"
            //#include "borl\XtdI_CfgW_equ.hpp"
            //#include "snbl\XtdI_CfgW_equ.hpp"
            //#include "artc\XtdI_CfgW_equ.hpp"
            //#include "navy\XtdI_CfgW_equ.hpp"
    };

    class cfgGlasses
    {
        //Shemaghs
            //Shemagh (usfs_a)
                class 4thmd_g_usfs_a_ar0
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_a_ar1
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_a_ar2
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_a_ar3
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_a_ar0_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_a_ar1_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_a_ar2_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_a_ar3_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxdn";
                    4thmd_ess = "4thmd_auxon";
                };

            //Shemagh 2 (usfs_b)
                class 4thmd_g_usfs_b_ar0
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_b_ar1
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_b_ar2
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_b_ar3
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_b_ar0_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_b_ar1_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_b_ar2_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_b_ar3_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxup";
                    4thmd_ess = "4thmd_auxon";
                };

            //No-Shemagh Compat (usfs_z)
                class 4thmd_g_usfs_z_ar0
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_z_ar1
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_z_ar2
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_z_ar3
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxof";
                };

                class 4thmd_g_usfs_z_ar0_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_z_ar1_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_z_ar2_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxon";
                };

                class 4thmd_g_usfs_z_ar3_g
                {
                    Model = "4thmd_g_usfs";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_fpos = "4thmd_auxof";
                    4thmd_ess = "4thmd_auxon";
                };

        //Include Other Patterns
            #include "wood\XtdI_CfgG_equ.hpp"
            //#include "dest\XtdI_CfgG_equ.hpp"
            //#include "jung\XtdI_CfgG_equ.hpp"
            //#include "borl\XtdI_CfgG_equ.hpp"
            //#include "snbl\XtdI_CfgG_equ.hpp"
            //#include "artc\XtdI_CfgG_equ.hpp"
            //#include "navy\XtdI_CfgG_equ.hpp"
    };
};