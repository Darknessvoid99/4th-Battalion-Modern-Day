class CfgPatches
{
    class darkmod_4thmd
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
        units[] = 
        {
            "4thmd_u_unif1_ar0_f",
            "4thmd_u_unif1_ru_ar0_f",
            "4thmd_u_unif1_tt_ar1_f",
            "4thmd_u_unif1_sw_ar1_f",
            "4thmd_u_unif1_gh_ar1_f",
            "4thmd_u_ghil1_ar1_f",
            "4thmd_u_ghil1_ar1_a_f",
            "4thmd_u_ghil1_ar1_l_f",
            "4thmd_b_pac1_rmn_ar1",
            "4thmd_b_pac2_rmn_ar1",
            "4thmd_b_pac3_rmn_ar1",
            "4thmd_b_pac5_ar1",

            "4thmd_u_unif1_wd1_f",
            "4thmd_u_unif1_wd1_ss_f",
            "4thmd_u_unif1_wd1_tt_f",
            "4thmd_u_unif1_wd1_sw_f",
            "4thmd_u_unif1_wd1_gh_f",
            "4thmd_u_ghil1_wd1_f",
            "4thmd_u_ghil1_wd1_a_f",
            "4thmd_u_ghil1_wd1_l_f",
            "4thmd_b_pac1_wd1",
            "4thmd_b_pac2_wd1",
            "4thmd_b_pac3_wd1",
            "4thmd_b_pac5_wd1",
        };
        magazines[] = {};
        requiredAddons[] = 
            {   
            "cba_main",
            "A3_Data_F",
            "A3_Armor_F",
            "A3_Armor_F_Argo",
            "A3_Armor_F_Beta",
            "A3_Armor_F_EPB",
            "A3_Armor_F_EPC",
            "A3_Armor_F_Exp",
            "A3_Armor_F_Gamma",
            "A3_Armor_F_Tank",
            "A3_Characters_F",
            "A3_Characters_F_Beta",
            "A3_Characters_F_Enoch"
            };

        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgFactionClasses
{
    class 4thmd_ar_faction
    {
        displayName = "ARMCO 4th Battalion (Arid)";
    };

    class 4thmd_wd_faction
    {
        displayName = "ARMCO 4th Battalion (Woodland)";
    };

    class 4thmd_de_faction
    {
        displayName = "ARMCO 4th Battalion (Desert)";
    };

    class 4thmd_bl_faction
    {
        displayName = "ARMCO 4th Battalion (Boreal)";
    };

    class 4thmd_ac_faction
    {
        displayName = "ARMCO 4th Battalion (Artic)";
    };

    class 4thmd_ju_faction
    {
        displayName = "ARMCO 4th Battalion (Jungle)";
    };
};

class CfgEditorCategories
{
    class 4thmd_supplies
    {
        displayName = "ARMCO Supplies";
    };
};

class CfgEditorSubcategories
{
    class 4thmd_logistics
    {
        displayName = "Logistics";
    };

    class 4thmd_crates
    {
        displayName = "Crates";
    };

    class 4thmd_resupply
    {
        displayName = "Resupply";
    };

    class 4thmd_uniform
    {
        displayName = "Uniform";
    };

    class 4thmd_comp
    {
        displayName = "ARMCO 4th Battalion";
    };

    class 4thmd_comp_ar
    {
        displayName = "ARMCO 4th Battalion (Arid)";
    };

   class 4thmd_comp_wd
    {
        displayName = "ARMCO 4th Battalion (Woodland)";
    };

    class 4thmd_comp_de
    {
        displayName = "ARMCO 4th Battalion (Desert)";
    };

    class 4thmd_comp_bl
    {
        displayName = "ARMCO 4th Battalion (Boreal)";
    };

    class 4thmd_comp_ac
    {
        displayName = "ARMCO 4th Battalion (Arctic)";
    };

    class 4thmd_comp_ju
    {
        displayName = "ARMCO 4th Battalion (Jungle)";
    };

    class 4thmd_comp_nv
    {
        displayName = "ARMCO 4th Battalion (Navy)";
    };
};

class CfgWeapons
{
    class Uniform_Base;
    class U_I_CombatUniform : Uniform_Base
    {
        class ItemInfo;
    };

    //Massif Uniform
        //Standard Uniforms
            class 4thmd_u_unif1_ar0 : U_I_CombatUniform
            {
                author = "Darknessvoid99";
                displayName = "[ARMCO] Massif Uniform";
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar0_f";
                };
            };

            class 4thmd_u_unif1_ar0_a : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar0_a_f";
                };
            };

            class 4thmd_u_unif1_ar0_s : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar0_s_f";
                };
            };

            class 4thmd_u_unif1_ar0_z : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar0_z_f";
                };
            };

            class 4thmd_u_unif1_ar0_p : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar0_p_f";
                };
            };

            class 4thmd_u_unif1_ar1_a : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar1_a_f";
                };
            };

            class 4thmd_u_unif1_ar1_s : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar1_s_f";
                };
            };

            class 4thmd_u_unif1_ar1_z : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar1_z_f";
                };
            };

            class 4thmd_u_unif1_ar1_p : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar1_p_f";
                };
            };

            class 4thmd_u_unif1_ar2_a : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar2_a_f";
                };
            };

            class 4thmd_u_unif1_ar2_s : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar2_s_f";
                };
            };

            class 4thmd_u_unif1_ar2_z : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar2_z_f";
                };
            };

            class 4thmd_u_unif1_ar2_p : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar2_p_f";
                };
            };

            class 4thmd_u_unif1_ar3_a : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar3_a_f";
                };
            };

            class 4thmd_u_unif1_ar3_s : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar3_s_f";
                };
            };

            class 4thmd_u_unif1_ar3_z : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar3_z_f";
                };
            };

            class 4thmd_u_unif1_ar3_p : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ar3_p_f";
                };
            };

        //Standard Uniforms (Short-Sleeves)
            class 4thmd_u_unif1_ru_ar0 : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar0_f";
                };
            };

            class 4thmd_u_unif1_ru_ar0_a : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar0_a_f";
                };
            };

            class 4thmd_u_unif1_ru_ar0_s : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar0_s_f";
                };
            };

            class 4thmd_u_unif1_ru_ar0_z : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar0_z_f";
                };
            };

            class 4thmd_u_unif1_ru_ar0_p : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar0_p_f";
                };
            };

            class 4thmd_u_unif1_ru_ar1_a : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar1_a_f";
                };
            };

            class 4thmd_u_unif1_ru_ar1_s : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar1_s_f";
                };
            };

            class 4thmd_u_unif1_ru_ar1_z : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar1_z_f";
                };
            };

            class 4thmd_u_unif1_ru_ar1_p : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar1_p_f";
                };
            };

            class 4thmd_u_unif1_ru_ar2_a : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar2_a_f";
                };
            };

            class 4thmd_u_unif1_ru_ar2_s : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar2_s_f";
                };
            };

            class 4thmd_u_unif1_ru_ar2_z : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar2_z_f";
                };
            };

            class 4thmd_u_unif1_ru_ar2_p : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar2_p_f";
                };
            };

            class 4thmd_u_unif1_ru_ar3_a : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar3_a_f";
                };
            };

            class 4thmd_u_unif1_ru_ar3_s : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar3_s_f";
                };
            };

            class 4thmd_u_unif1_ru_ar3_z : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar3_z_f";
                };
            };

            class 4thmd_u_unif1_ru_ar3_p : 4thmd_u_unif1_ru_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_ru_ar3_p_f";
                };
            };

        //Tank Top + Uniforms
            class 4thmd_u_unif1_tt_ar0 : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar1_f";
                };
            };

            class 4thmd_u_unif1_tt_ar0_a : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar0_a_f";
                };
            };

            class 4thmd_u_unif1_tt_ar0_s : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar0_s_f";
                };
            };

            class 4thmd_u_unif1_tt_ar0_z : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar0_z_f";
                };
            };

            class 4thmd_u_unif1_tt_ar0_p : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar0_p_f";
                };
            };

            class 4thmd_u_unif1_tt_ar1_a : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar1_a_f";
                };
            };

            class 4thmd_u_unif1_tt_ar1_s : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar1_s_f";
                };
            };

            class 4thmd_u_unif1_tt_ar1_z : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar1_z_f";
                };
            };

            class 4thmd_u_unif1_tt_ar1_p : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar1_p_f";
                };
            };

            class 4thmd_u_unif1_tt_ar2_a : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar2_a_f";
                };
            };

            class 4thmd_u_unif1_tt_ar2_s : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar2_s_f";
                };
            };

            class 4thmd_u_unif1_tt_ar2_z : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar2_z_f";
                };
            };

            class 4thmd_u_unif1_tt_ar2_p : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar2_p_f";
                };
            };

            class 4thmd_u_unif1_tt_ar3_a : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar3_a_f";
                };
            };

            class 4thmd_u_unif1_tt_ar3_s : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar3_s_f";
                };
            };

            class 4thmd_u_unif1_tt_ar3_z : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar3_z_f";
                };
            };

            class 4thmd_u_unif1_tt_ar3_p : 4thmd_u_unif1_tt_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_tt_ar3_p_f";
                };
            };

        //Sweater + Uniforms
            class 4thmd_u_unif1_sw_ar0 : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar1_f";
                };
            };

            class 4thmd_u_unif1_sw_ar0_a : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar0_a_f";
                };
            };

            class 4thmd_u_unif1_sw_ar0_s : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar0_s_f";
                };
            };

            class 4thmd_u_unif1_sw_ar0_z : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar0_z_f";
                };
            };

            class 4thmd_u_unif1_sw_ar0_p : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar0_p_f";
                };
            };

            class 4thmd_u_unif1_sw_ar1_a : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar1_a_f";
                };
            };

            class 4thmd_u_unif1_sw_ar1_s : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar1_s_f";
                };
            };

            class 4thmd_u_unif1_sw_ar1_z : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar1_z_f";
                };
            };

            class 4thmd_u_unif1_sw_ar1_p : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar1_p_f";
                };
            };

            class 4thmd_u_unif1_sw_ar2_a : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar2_a_f";
                };
            };

            class 4thmd_u_unif1_sw_ar2_s : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar2_s_f";
                };
            };

            class 4thmd_u_unif1_sw_ar2_z : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar2_z_f";
                };
            };

            class 4thmd_u_unif1_sw_ar2_p : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar2_p_f";
                };
            };

            class 4thmd_u_unif1_sw_ar3_a : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar3_a_f";
                };
            };

            class 4thmd_u_unif1_sw_ar3_s : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar3_s_f";
                };
            };

            class 4thmd_u_unif1_sw_ar3_z : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar3_z_f";
                };
            };

            class 4thmd_u_unif1_sw_ar3_p : 4thmd_u_unif1_sw_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_sw_ar3_p_f";
                };
            };

        //Ghillie + Uniforms
            class 4thmd_u_unif1_gh_ar0 : 4thmd_u_unif1_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar1_f";
                    mass = 65;
                };
            };

            class 4thmd_u_unif1_gh_ar0_a : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar0_a_f";
                };
            };

            class 4thmd_u_unif1_gh_ar0_s : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar0_s_f";
                };
            };

            class 4thmd_u_unif1_gh_ar0_z : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar0_z_f";
                };
            };

            class 4thmd_u_unif1_gh_ar0_p : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar0_p_f";
                };
            };

            class 4thmd_u_unif1_gh_ar1_a : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar1_a_f";
                };
            };

            class 4thmd_u_unif1_gh_ar1_s : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar1_s_f";
                };
            };

            class 4thmd_u_unif1_gh_ar1_z : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar1_z_f";
                };
            };

            class 4thmd_u_unif1_gh_ar1_p : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar1_p_f";
                };
            };

            class 4thmd_u_unif1_gh_ar2_a : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar2_a_f";
                };
            };

            class 4thmd_u_unif1_gh_ar2_s : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar2_s_f";
                };
            };

            class 4thmd_u_unif1_gh_ar2_z : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar2_z_f";
                };
            };

            class 4thmd_u_unif1_gh_ar2_p : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar2_p_f";
                };
            };

            class 4thmd_u_unif1_gh_ar3_a : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar3_a_f";
                };
            };

            class 4thmd_u_unif1_gh_ar3_s : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar3_s_f";
                };
            };

            class 4thmd_u_unif1_gh_ar3_z : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar3_z_f";
                };
            };

            class 4thmd_u_unif1_gh_ar3_p : 4thmd_u_unif1_gh_ar0
            {
                class ItemInfo : ItemInfo
                {
                    uniformClass = "4thmd_u_unif1_gh_ar3_p_f";
                };
            };

    //Ghillie Uniforms
        class 4thmd_u_ghil1_ar1 : 4thmd_u_unif1_ar0
        {
            displayName = "[ARMCO] Ghillie Uniform";
            class ItemInfo : ItemInfo
            {
                uniformClass = "4thmd_u_ghil1_ar1_f";
                mass = 100;
            };
        };

        class 4thmd_u_ghil1_ar1_a : 4thmd_u_ghil1_ar1
        {
            class ItemInfo : ItemInfo
            {
                uniformClass = "4thmd_u_ghil1_ar1_a_f";
            };
        };

        class 4thmd_u_ghil1_ar1_b : 4thmd_u_ghil1_ar1
        {
            class ItemInfo : ItemInfo
            {
                uniformClass = "4thmd_u_ghil1_ar1_b_f";
            };
        };

        class 4thmd_u_ghil1_ar1_c : 4thmd_u_ghil1_ar1
        {
            class ItemInfo : ItemInfo
            {
                uniformClass = "4thmd_u_ghil1_ar1_c_f";
            };
        };

    //Include Other Patterns 
    /*
    #include "wood\CfgW_equ.hpp"
    #include "dest\CfgW_equ.hpp"
    #include "jung\CfgW_equ.hpp"
    #include "borl\CfgW_equ.hpp"
    #include "snbl\CfgW_equ.hpp"
    #include "artc\CfgW_equ.hpp"
    #include "navy\CfgW_equ.hpp"
    */
};

class CfgVehicles
{
    //Combat Fatigues [AAF] (Officer)
    //Parade Uniforms... Eventually

    //Massif Uniform (unif1)
        //Standard Uniforms
            class I_Soldier_base_F;
            class 4thmd_u_unif1_ar0_f : I_Soldier_base_F
            {
                scope = DEBUG;
                side = 1;
                author = "Darknesvoid99";
                displayName = "[ARMCO] Arid Uniform";
                faction = "4thmd_ar_faction";
                editorSubcategory="4thmd_uniform";
                uniformClass = "4thmd_u_unif1_ar1";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1.paa"
                };
                linkedItems[] = {};
                respawnLinkedItems[] = {};
                weapons[] = {};
                respawnweapons[] = {};
            };

            class 4thmd_u_unif1_ar0_a_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Standard";
                uniformClass = "4thmd_u_unif1_ar0_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa"
                };
            };

            class 4thmd_u_unif1_ar0_s_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Standard";
                uniformClass = "4thmd_u_unif1_ar0_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa"
                };
            };

            class 4thmd_u_unif1_ar0_z_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Standard";
                uniformClass = "4thmd_u_unif1_ar0_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa"
                };
            };

            class 4thmd_u_unif1_ar0_p_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Standard";
                uniformClass = "4thmd_u_unif1_ar0_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa"
                };
            };

            class 4thmd_u_unif1_ar1_a_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 1";
                uniformClass = "4thmd_u_unif1_ar1_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_a.paa"
                };
            };

            class 4thmd_u_unif1_ar1_s_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 1";
                uniformClass = "4thmd_u_unif1_ar1_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_s.paa"
                };
            };

            class 4thmd_u_unif1_ar1_z_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 1";
                uniformClass = "4thmd_u_unif1_ar1_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_z.paa"
                };
            };

            class 4thmd_u_unif1_ar1_p_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 1";
                uniformClass = "4thmd_u_unif1_ar1_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_p.paa"
                };
            };

            class 4thmd_u_unif1_ar2_a_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 2";
                uniformClass = "4thmd_u_unif1_ar2_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_a.paa"
                };
            };

            class 4thmd_u_unif1_ar2_s_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 2";
                uniformClass = "4thmd_u_unif1_ar2_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_s.paa"
                };
            };

            class 4thmd_u_unif1_ar2_z_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 2";
                uniformClass = "4thmd_u_unif1_ar2_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_z.paa"
                };
            };

            class 4thmd_u_unif1_ar2_p_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 2";
                uniformClass = "4thmd_u_unif1_ar2_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_p.paa"
                };
            };

            class 4thmd_u_unif1_ar3_a_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 3";
                uniformClass = "4thmd_u_unif1_ar3_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_a.paa"
                };
            };

            class 4thmd_u_unif1_ar3_s_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 3";
                uniformClass = "4thmd_u_unif1_ar3_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_s.paa"
                };
            };

            class 4thmd_u_unif1_ar3_z_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 3";
                uniformClass = "4thmd_u_unif1_ar3_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_z.paa"
                };
            };

            class 4thmd_u_unif1_ar3_p_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 3";
                uniformClass = "4thmd_u_unif1_ar3_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_p.paa"
                };
            };

        //Standard Uniforms (Rolled Up Sleeves)
            class 4thmd_u_unif1_ru_ar0_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Arid Uniform (Rolled-Up)";
                uniformClass = "4thmd_u_unif1_ru_ar0";
                model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar0_a_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Standard (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar0_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar0_s_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Standard (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar0_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar0_z_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Standard (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar0_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar0_p_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Standard (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar0_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar1_a_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 1 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar1_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_a.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar1_s_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 1 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar1_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_s.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar1_z_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 1 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar1_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_z.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar1_p_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 1 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar1_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_p.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar2_a_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 2 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar2_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_a.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar2_s_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 2 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar2_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_s.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar2_z_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 2 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar2_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_z.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar2_p_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 2 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar2_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_p.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar3_a_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 3 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar3_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_a.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar3_s_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 3 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar3_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_s.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar3_z_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 3 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar3_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_z.paa"
                };
            };

            class 4thmd_u_unif1_ru_ar3_p_f : 4thmd_u_unif1_ru_ar0_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 3 (RU)";
                uniformClass = "4thmd_u_unif1_ru_ar3_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_p.paa"
                };
            };

        //Tank Top + Uniform
            class 4thmd_u_unif1_tt_ar1_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Arid Uniform (Tank Top)";
                uniformClass = "4thmd_u_unif1_tt_ar1";
                model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
                hiddenSelections[] = 
                {
                    "camo1", 
                    "camo2", 
                    "camo3", 
                    "insignia"
                };
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar1.paa",
                    "darkmod_4thmd\data\arid\unif1_ar1.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar0_a_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Standard (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar0_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\unif1_tt_bk_a.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar0_s_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Standard (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar0_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\unif1_tt_bk_s.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar0_z_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Standard (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar0_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\unif1_tt_bk_z.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar0_p_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Standard (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar0_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\unif1_tt_bk_p.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar1_a_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 1 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar1_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar1.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar1_s_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 1 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar1_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar1.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar1_z_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 1 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar1_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar1.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar1_p_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 1 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar1_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar1.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar2_a_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 2 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar2_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar2.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar2_s_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 2 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar2_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar2.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar2_z_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 2 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar2_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar2.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar2_p_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 2 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar2_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar2.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar3_a_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 3 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar3_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar3.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar3_s_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 3 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar3_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar3.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar3_z_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 3 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar3_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar3.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

            class 4thmd_u_unif1_tt_ar3_p_f : 4thmd_u_unif1_tt_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 3 (TT)";
                uniformClass = "4thmd_u_unif1_tt_ar3_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_tt_ar3.paa",
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa",
                    "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
                };
            };

        //Sweater + Uniform
            class 4thmd_u_unif1_sw_ar1_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Arid Uniform (Sweater)";
                uniformClass = "4thmd_u_unif1_sw_ar1";
                model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar1.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar0_a_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Standard (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar0_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar0_a.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar0_s_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Standard (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar0_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar0_s.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar0_z_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Standard (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar0_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar0_z.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar0_p_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Standard (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar0_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar0_p.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar1_a_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 1 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar1_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar1_a.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar1_s_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 1 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar1_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar1_s.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar1_z_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 1 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar1_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar1_z.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar1_p_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 1 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar1_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar1_p.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar2_a_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 2 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar2_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar2_a.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar2_s_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 2 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar2_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar2_s.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar2_z_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 2 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar2_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar2_z.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar2_p_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 2 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar2_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar2_p.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar3_a_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 3 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar3_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar3_a.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar3_s_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 3 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar3_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar3_s.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar3_z_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 3 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar3_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar3_z.paa"
                };
            };

            class 4thmd_u_unif1_sw_ar3_p_f : 4thmd_u_unif1_sw_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 3 (SW)";
                uniformClass = "4thmd_u_unif1_sw_ar3_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_sw_ar3_p.paa"
                };
            };

        //Ghillie + Uniforms
            class 4thmd_u_unif1_gh_ar1_f : 4thmd_u_unif1_ar0_f
            {
                displayName = "[ARMCO] Arid Uniform (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar1";
                model="A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar0_a_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Standard (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar0_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_a.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar0_s_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Standard (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar0_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_s.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar0_z_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Standard (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar0_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_z.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar0_p_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Standard (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar0_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar0_p.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar1_a_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 1 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar1_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_a.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar1_s_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 1 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar1_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_s.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar1_z_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 1 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar1_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_z.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar1_p_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 1 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar1_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar1_p.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar2_a_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 2 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar2_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_a.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar2_s_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 2 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar2_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_s.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar2_z_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 2 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar2_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_z.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar2_p_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 2 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar2_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar2_p.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar3_a_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Alpha Arid Solid 3 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar3_a";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_a.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar3_s_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Sabre Arid Solid 3 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar3_s";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_s.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar3_z_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Zulu Arid Solid 3 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar3_z";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_z.paa"
                };
            };

            class 4thmd_u_unif1_gh_ar3_p_f : 4thmd_u_unif1_gh_ar1_f
            {
                displayName = "[ARMCO] Phoenix Arid Solid 3 (GH)";
                uniformClass = "4thmd_u_unif1_gh_ar3_p";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\unif1_ar3_p.paa"
                };
            };

    //Ghillie Suit Uniform (ghil1)
        class 4thmd_u_ghil1_ar1_f : 4thmd_u_unif1_ar0_f
        {
            displayName = "[ARMCO] Arid Ghillie (Semi-Arid)";
            uniformClass = "4thmd_u_ghil1_ar1";
            model="\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";

            hiddenSelections[] = 
            {
                "camo",
                "camo3",
                "camo4"
            };

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\ghil1_ar1.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"
            };
        };

        class 4thmd_u_ghil1_ar1_a_f : 4thmd_u_ghil1_ar1_f
        {
            displayName = "[ARMCO] Arid Ghillie (Arid)";
            uniformClass = "4thmd_u_ghil1_ar1_a";
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\ghil1_ar1.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_ca.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_co.paa"
            };
        };

        class 4thmd_u_ghil1_ar1_b_f : 4thmd_u_ghil1_ar1_f
        {
            displayName = "[ARMCO] Arid Ghillie (Lush)";
            uniformClass = "4thmd_u_ghil1_ar1_b";
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\ghil1_ar1.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"
            };
        };

        class 4thmd_u_ghil1_ar1_c_f : 4thmd_u_ghil1_ar1_f
        {
            displayName = "[ARMCO] Arid Ghillie (Lush)";
            uniformClass = "4thmd_u_ghil1_ar1_c";
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\ghil1_ar1.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa",
                "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"
            };
        };

    //Assault Pack Backpack (pac1)
        //Standard
            class B_AssaultPack_cbr;
            class 4thmd_b_pac1_rmn_ar0 : B_AssaultPack_cbr
            {
                displayName = "[ARMCO] Assault Pack";
                author = "Darknesvoid99";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar0.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar1 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar1.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar2 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar2.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar3 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar3.paa"
                };
            };

            class 4thmd_b_pac1_med_ar0 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar0.paa"
                };
            };

            class 4thmd_b_pac1_med_ar1 : 4thmd_b_pac1_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar1.paa"
                };
            };

            class 4thmd_b_pac1_med_ar2 : 4thmd_b_pac1_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar2.paa"
                };
            };

            class 4thmd_b_pac1_med_ar3 : 4thmd_b_pac1_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar3.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar0 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar0.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar1 : 4thmd_b_pac1_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar1.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar2 : 4thmd_b_pac1_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar2.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar3 : 4thmd_b_pac1_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar3.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar0 : 4thmd_b_pac1_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar0.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar1 : 4thmd_b_pac1_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar1.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar2 : 4thmd_b_pac1_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar2.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar3 : 4thmd_b_pac1_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar3.paa"
                };
            };
        //Radio
            class 4thmd_b_pac1_rmn_ar0_r : 4thmd_b_pac1_rmn_ar0
            {
                mass = 28;
                tf_dialog = "anprc152_radio_dialog";
                tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
                tf_encryptionCode = "tf_west_radio_code";
                tf_hasLRradio = 1;
                tf_range = 5000;
                tf_subtype = "digital_lr";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar0.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar1_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar1.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar2_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar2.paa"
                };
            };

            class 4thmd_b_pac1_rmn_ar3_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_b_ar3.paa"
                };
            };

            class 4thmd_b_pac1_med_ar0_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar0.paa"
                };
            };

            class 4thmd_b_pac1_med_ar1_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar1.paa"
                };
            };

            class 4thmd_b_pac1_med_ar2_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar2.paa"
                };
            };

            class 4thmd_b_pac1_med_ar3_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_m_ar3.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar0_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar0.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar1_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar1.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar2_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar2.paa"
                };
            };

            class 4thmd_b_pac1_eng_ar3_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_e_ar3.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar0_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar0.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar1_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar1.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar2_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar2.paa"
                };
            };

            class 4thmd_b_pac1_eos_ar3_r : 4thmd_b_pac1_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac1_s_ar3.paa"
                };
            };

    //Field Pack Backpack (pac2)
        //Standard
            class B_FieldPack_cbr;
            class 4thmd_b_pac2_rmn_ar0 : B_FieldPack_cbr
            {
                displayName = "[ARMCO] Field Pack";
                author = "Darknesvoid99";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar1.paa"
                };
            };

            class 4thmd_b_pac2_rmn_ar1 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar1.paa"
                };
            };

            class 4thmd_b_pac2_rmn_ar2 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar2.paa"
                };
            };

            class 4thmd_b_pac2_rmn_ar3 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar3.paa"
                };
            };

            class 4thmd_b_pac2_med_ar0 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar0.paa"
                };
            };

            class 4thmd_b_pac2_med_ar1 : 4thmd_b_pac2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar1.paa"
                };
            };

            class 4thmd_b_pac2_med_ar2 : 4thmd_b_pac2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar2.paa"
                };
            };

            class 4thmd_b_pac2_med_ar3 : 4thmd_b_pac2_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar3.paa"
                };
            };

            class 4thmd_b_pac2_eng_ar0 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar0.paa"
                };
            };

            class 4thmd_b_pac2_eng_ar1 : 4thmd_b_pac2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar1.paa"
                };
            };

            class 4thmd_b_pac2_eng_ar2 : 4thmd_b_pac2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar2.paa"
                };
            };

            class 4thmd_b_pac2_eng_ar3 : 4thmd_b_pac2_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar3.paa"
                };
            };

            class 4thmd_b_pac2_eos_ar0 : 4thmd_b_pac2_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar0.paa"
                };
            };

            class 4thmd_b_pac2_eos_ar1 : 4thmd_b_pac2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar1.paa"
                };
            };

            class 4thmd_b_pac2_eos_ar2 : 4thmd_b_pac2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar2.paa"
                };
            };

            class 4thmd_b_pac2_eos_ar3 : 4thmd_b_pac2_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar3.paa"
                };
            };
        //Radio
            class 4thmd_b_pac2_rmn_ar0_r : 4thmd_b_pac2_rmn_ar0
            {
                mass = 38;
                tf_dialog = "anprc152_radio_dialog";
                tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
                tf_encryptionCode = "tf_west_radio_code";
                tf_hasLRradio = 1;
                tf_range = 5000;
                tf_subtype = "digital_lr";
                
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar1.paa"
                };
            };
            
            class 4thmd_b_pac2_rmn_ar1_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar1.paa"
                };
            };
            
            class 4thmd_b_pac2_rmn_ar2_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar2.paa"
                };
            };
            
            class 4thmd_b_pac2_rmn_ar3_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_b_ar3.paa"
                };
            };
            
            class 4thmd_b_pac2_med_ar0_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar0.paa"
                };
            };
            
            class 4thmd_b_pac2_med_ar1_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar1.paa"
                };
            };
            
            class 4thmd_b_pac2_med_ar2_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar2.paa"
                };
            };
            
            class 4thmd_b_pac2_med_ar3_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_m_ar3.paa"
                };
            };
            
            class 4thmd_b_pac2_eng_ar0_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar0.paa"
                };
            };
            
            class 4thmd_b_pac2_eng_ar1_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar1.paa"
                };
            };
            
            class 4thmd_b_pac2_eng_ar2_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar2.paa"
                };
            };
            
            class 4thmd_b_pac2_eng_ar3_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_e_ar3.paa"
                };
            };
            
            class 4thmd_b_pac2_eos_ar0_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar0.paa"
                };
            };
            
            class 4thmd_b_pac2_eos_ar1_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar1.paa"
                };
            };
            
            class 4thmd_b_pac2_eos_ar2_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar2.paa"
                };
            };
            
            class 4thmd_b_pac2_eos_ar3_r : 4thmd_b_pac2_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac2_s_ar3.paa"
                };
            };

    //Kitbag Backpack (pac3)
        //Standard
            class B_Kitbag_cbr;
            class 4thmd_b_pac3_rmn_ar0 : B_Kitbag_cbr
            {
                displayName = "[ARMCO] Kitbag";
                author = "Darknesvoid99";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar1.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar1 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar1.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar2 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar2.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar3 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar3.paa"
                };
            };

            class 4thmd_b_pac3_med_ar0 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar0.paa"
                };
            };

            class 4thmd_b_pac3_med_ar1 : 4thmd_b_pac3_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar1.paa"
                };
            };

            class 4thmd_b_pac3_med_ar2 : 4thmd_b_pac3_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar2.paa"
                };
            };

            class 4thmd_b_pac3_med_ar3 : 4thmd_b_pac3_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar3.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar0 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar0.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar1 : 4thmd_b_pac3_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar1.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar2 : 4thmd_b_pac3_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar2.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar3 : 4thmd_b_pac3_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar3.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar0 : 4thmd_b_pac3_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar0.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar1 : 4thmd_b_pac3_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar1.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar2 : 4thmd_b_pac3_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar2.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar3 : 4thmd_b_pac3_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar3.paa"
                };
            };
        //Radio
            class 4thmd_b_pac3_rmn_ar0_r : 4thmd_b_pac3_rmn_ar0
            {
                mass = 58;
                tf_dialog = "anprc152_radio_dialog";
                tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
                tf_encryptionCode = "tf_west_radio_code";
                tf_hasLRradio = 1;
                tf_range = 5000;
                tf_subtype = "digital_lr";
                
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar1.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar1_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar1.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar2_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar2.paa"
                };
            };

            class 4thmd_b_pac3_rmn_ar3_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_b_ar3.paa"
                };
            };

            class 4thmd_b_pac3_med_ar0_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar0.paa"
                };
            };

            class 4thmd_b_pac3_med_ar1_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar1.paa"
                };
            };

            class 4thmd_b_pac3_med_ar2_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar2.paa"
                };
            };

            class 4thmd_b_pac3_med_ar3_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_m_ar3.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar0_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar0.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar1_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar1.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar2_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar2.paa"
                };
            };

            class 4thmd_b_pac3_eng_ar3_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_e_ar3.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar0_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar0.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar1_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar1.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar2_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar2.paa"
                };
            };

            class 4thmd_b_pac3_eos_ar3_r : 4thmd_b_pac3_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac3_s_ar3.paa"
                };
            };

    //Carry-All Backpack (pac4)
        //Standard
            class B_Carryall_cbr;
            class 4thmd_b_pac4_rmn_ar0 : B_Carryall_cbr
            {
                displayName = "[ARMCO] Carry-All";
                author = "Darknesvoid99";
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar1.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar1 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar1.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar2 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar2.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar3 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar3.paa"
                };
            };

            class 4thmd_b_pac4_med_ar0 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar0.paa"
                };
            };

            class 4thmd_b_pac4_med_ar1 : 4thmd_b_pac4_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar1.paa"
                };
            };

            class 4thmd_b_pac4_med_ar2 : 4thmd_b_pac4_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar2.paa"
                };
            };

            class 4thmd_b_pac4_med_ar3 : 4thmd_b_pac4_med_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar3.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar0 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar0.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar1 : 4thmd_b_pac4_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar1.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar2 : 4thmd_b_pac4_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar2.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar3 : 4thmd_b_pac4_eng_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar3.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar0 : 4thmd_b_pac4_rmn_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar0.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar1 : 4thmd_b_pac4_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar1.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar2 : 4thmd_b_pac4_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar2.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar3 : 4thmd_b_pac4_eos_ar0
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar3.paa"
                };
            };
        //Radio
            class 4thmd_b_pac4_rmn_ar0_r : 4thmd_b_pac4_rmn_ar0
            {
                mass = 68;
                tf_dialog = "anprc152_radio_dialog";
                tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
                tf_encryptionCode = "tf_west_radio_code";
                tf_hasLRradio = 1;
                tf_range = 5000;
                tf_subtype = "digital_lr";

                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar1.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar1_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar1.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar2_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar2.paa"
                };
            };

            class 4thmd_b_pac4_rmn_ar3_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_b_ar3.paa"
                };
            };

            class 4thmd_b_pac4_med_ar0_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar0.paa"
                };
            };

            class 4thmd_b_pac4_med_ar1_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar1.paa"
                };
            };

            class 4thmd_b_pac4_med_ar2_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar2.paa"
                };
            };

            class 4thmd_b_pac4_med_ar3_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_m_ar3.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar0_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar0.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar1_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar1.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar2_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar2.paa"
                };
            };

            class 4thmd_b_pac4_eng_ar3_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_e_ar3.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar0_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar0.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar1_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar1.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar2_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar2.paa"
                };
            };

            class 4thmd_b_pac4_eos_ar3_r : 4thmd_b_pac4_rmn_ar0_r
            {
                hiddenSelectionsTextures[] = 
                {
                    "darkmod_4thmd\data\arid\pac4_s_ar3.paa"
                };
            };

    //Include Other Patterns 
    /*
    #include "wood\CfgV_equ.hpp"
    #include "dest\CfgV_equ.hpp"
    #include "jung\CfgV_equ.hpp"
    #include "borl\CfgV_equ.hpp"
    #include "snbl\CfgV_equ.hpp"
    #include "artc\CfgV_equ.hpp"
    #include "navy\CfgV_equ.hpp"
    */

    //Logistics
        class Box_NATO_Ammo_F;
        class 4thmd_cgo_e_1 : Box_NATO_Ammo_F
        {
            displayName = "Empty Crate (1)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 800;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_WpsLaunch_F;
        class 4thmd_cgo_e_2 : Box_NATO_WpsLaunch_F
        {
            displayName = "Empty Crate (1.5)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1.5;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_Wps_F;
        class 4thmd_cgo_e_3 : Box_NATO_Wps_F
        {
            displayName = "Empty Crate (2)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1600;
            ace_cargo_size = 2;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_WpsSpecial_F;
        class 4thmd_cgo_e_4 : Box_NATO_WpsSpecial_F
        {
            displayName = "Empty Crate (3)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 2400;
            ace_cargo_size = 3;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_NATO_Equip_F;
        class 4thmd_cgo_e_5 : Box_NATO_Equip_F
        {
            displayName = "Empty Crate (4)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 3200;
            ace_cargo_size = 4;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class B_supplyCrate_F;
        class 4thmd_cgo_e_6 : B_supplyCrate_F
        {
            displayName = "Empty Crate (6)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 4800;
            ace_cargo_size = 6;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
            
        };

        class ACE_medicalSupplyCrate;
        class 4thmd_cgo_e_med : ACE_medicalSupplyCrate
        {
            displayName = "Empty Crate (MED)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };

        class Box_IDAP_AmmoOrd_F;
        class 4thmd_cgo_e_eod : Box_IDAP_AmmoOrd_F
        {
            displayName = "Empty Crate (EOD)";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_crates";

            maximumLoad = 1200;
            ace_cargo_size = 1;
            class TransportBackpacks{};
            class TransportItems{};
            class TransportMagazines{};
            class TransportWeapons{};
        };


        class FlexibleTank_01_forest_F;
        class 4thmd_s_ft1_forest : FlexibleTank_01_forest_F
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_refuel_fuelCargo = 400;
        };

        class FlexibleTank_01_sand_F;
        class 4thmd_s_ft1_sand : FlexibleTank_01_sand_F
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_refuel_fuelCargo = 400;
        };

        class Constructions_base_F;
        class Land_WoodenBox_F : Constructions_base_F
        {
            class EventHandlers;
        };
        class 4thmd_s_val_wood : Land_WoodenBox_F
        {
            displayName = "Vehicle Light Ammo";
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";

            class EventHandlers : EventHandlers
            {
                init="[(_this select 0), 800] call ace_rearm_fnc_makeSource;";
            };

            ace_cargo_size = 3;
            //ace_rearm_defaultSupply = 800;
            ace_cargo_canLoad = 1;
            ace_dragging_canCarry = 1;
            ace_dragging_canDrag = 1;
            ace_cargo_hasCargo = 0;
            ace_cargo_space = 0;
            maximumLoad = 0;
        };

        class Box_NATO_AmmoVeh_F;
        class 4thmd_s_va1_std : Box_NATO_AmmoVeh_F
        {
            ace_cargo_size = 6;
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_rearm_defaultSupply = 2000;
        };

        class ACE_RepairItem_Base;
        class ACE_Track : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 1;
        };

        class ACE_Wheel : ACE_RepairItem_Base
        {
            editorCategory="4thmd_supplies";
            editorSubcategory="4thmd_logistics";
            ace_cargo_size = 1;
        };

        class tbd_mortar_81mm_box_he;
        class 4thmd_s_tbd_81mm_he : tbd_mortar_81mm_box_he
        {
            editorCategory="4thmd_supplies";
            ace_cargo_size = 1;
        };
};

class XtdGearModels
{
    class CfgWeapons
    {
        class 4thmd_u_unif1_basic
        {
            label = "Reservist Uniform";
            options[]=
            {
                "4thmd_squad",
                "4thmd_type",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_rollup"
            };

            class 4thmd_type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Type";
                values[]=
				{
					"unif1",
					"unif1_tt",
					"unif1_sw",
                    "unif1_gh"
				};
                class unif1
                {
                    label = "Standard";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_uniform.paa";
                };

                class unif1_tt
                {
                    label = "Tank Top";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_tanktop.paa";
                };

                class unif1_sw
                {
                    label = "Sweater";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_sweater.paa";
                };

                class unif1_gh
                {
                    label = "Ghillie";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_ghillie.paa";
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

            class 4thmd_rollup
            {
                alwaysSelectable = 0;
				changeingame = 1;
				changedelay = 3;
                label = "Roll-Up Sleeves";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "Down";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_auxon
                {
                    label = "Up";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };
            };
        };

        class 4thmd_u_unif1
        {
            label = "Massif Uniform";
            options[]=
            {
                "4thmd_squad",
                "4thmd_type",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_rollup"
            };

            class 4thmd_squad
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
                label = "Squad";
                values[] =
                {
                    "4thmd_alpha",
                    "4thmd_sabre",
                    "4thmd_zulu",
                    "4thmd_phoenix"
                };

                class 4thmd_alpha
                {
                    label = "Alpha";
                    image="darkmod_4thmd\data\0icon\aax\icon_s_alpha.paa";
                };

                class 4thmd_sabre
                {
                    label = "Sabre";
                    image="darkmod_4thmd\data\0icon\aax\icon_s_sabre.paa";
                };

                class 4thmd_zulu
                {
                    label = "Zulu";
                    image="darkmod_4thmd\data\0icon\aax\icon_s_zulu.paa";
                };

                class 4thmd_phoenix
                {
                    label = "Phoenix";
                    image="darkmod_4thmd\data\0icon\aax\icon_s_phoenix.paa";
                };
            };

            class 4thmd_type
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Type";
                values[]=
				{
					"unif1",
					"unif1_tt",
					"unif1_sw",
                    "unif1_gh"
				};
                class unif1
                {
                    label = "Standard";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_uniform.paa";
                };

                class unif1_tt
                {
                    label = "Tank Top";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_tanktop.paa";
                };

                class unif1_sw
                {
                    label = "Sweater";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_sweater.paa";
                };

                class unif1_gh
                {
                    label = "Ghillie";
                    image = "darkmod_4thmd\data\0icon\aax\icon_t_ghillie.paa";
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

            class 4thmd_rollup
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 3;
                label = "Roll-Up Sleeves";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "Down";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };

                class 4thmd_auxon
                {
                    label = "Up";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                };
            };
        };

        class 4thmd_u_ghil1
        {
            label = "Ghillie Suit";
            options[]=
            {
                "4thmd_color",
                "4thmd_camo"
            };

            class 4thmd_color
            {
                alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
                label = "Environment";
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
                label = "Camouflage";
                values[] =
                {
                    "4thmd_c_ghil0",
                    "4thmd_c_ghil1",
                    "4thmd_c_ghil2",
                    "4thmd_c_ghil3"
                };

                class 4thmd_c_ghil0
                {
                    label = "Standard";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_ghillie.paa";
                };

                class 4thmd_c_ghil1
                {
                    label = "Alt. A";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_ghillie.paa";
                };

                class 4thmd_c_ghil2
                {
                    label = "Alt. B";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_ghillie.paa";
                };

                class 4thmd_c_ghil3
                {
                    label = "Alt. C";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_ghillie.paa";
                };
            };
        };
    };

    class CfgVehicles
    {
        class 4thmd_b_pac1
        {
            label = "Assault Pack";
            options[]=
            {
                "4thmd_role",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_radio"
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
					"4thmd_r_eng",
                    "4thmd_r_eos"
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

                class 4thmd_r_eng
                {
                    label = "Engineer";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_engineer.paa";
                };

                class 4thmd_r_eos
                {
                    label = "EOS";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_explosive.paa";
                    description = "Explosive Ordnance Specialist";
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

            class 4thmd_radio
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 10;
                label = "Secondary Radio";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Remove Secondary Radio";
                };

                class 4thmd_auxon
                {
                    label = "AN/PRC-152";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Setup Secondary AN/PRC-152";
                    itemingame = "rhsusf_radio_anprc152";
                };
            };
        };

        class 4thmd_b_pac2
        {
            label = "Field Pack";
            options[]=
            {
                "4thmd_role",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_radio"
            };

            class 4thmd_role
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 0;
				label = "Role";
                values[]=
				{
					"4thmd_r_rmn",
					"4thmd_r_med",
					"4thmd_r_eng",
                    "4thmd_r_eos"
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

                class 4thmd_r_eng
                {
                    label = "Engineer";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_engineer.paa";
                };

                class 4thmd_r_eos
                {
                    label = "EOS";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_explosive.paa";
                    description = "Explosive Ordnance Specialist";
                };
            };

            class 4thmd_color
            {
                alwaysSelectable = 1;
				changeingame = 1;
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
				changeingame = 1;
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

            class 4thmd_radio
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 10;
                label = "Secondary Radio";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Remove Secondary Radio";
                };

                class 4thmd_auxon
                {
                    label = "AN/PRC-152";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Setup Secondary AN/PRC-152";
                    itemingame = "rhsusf_radio_anprc152";
                };
            };
        };

        class 4thmd_b_pac3
        {
            label = "Kitbag";
            options[]=
            {
                "4thmd_role",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_radio"
            };

            class 4thmd_role
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 0;
				label = "Role";
                values[]=
				{
					"4thmd_r_rmn",
					"4thmd_r_med",
					"4thmd_r_eng",
                    "4thmd_r_eos"
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

                class 4thmd_r_eng
                {
                    label = "Engineer";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_engineer.paa";
                };

                class 4thmd_r_eos
                {
                    label = "EOS";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_explosive.paa";
                    description = "Explosive Ordnance Specialist";
                };
            };

            class 4thmd_color
            {
                alwaysSelectable = 1;
				changeingame = 1;
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
				changeingame = 1;
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

            class 4thmd_radio
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 10;
                label = "Secondary Radio";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Remove Secondary Radio";
                };

                class 4thmd_auxon
                {
                    label = "AN/PRC-152";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Setup Secondary AN/PRC-152";
                    itemingame = "rhsusf_radio_anprc152";
                };
            };
        };

        class 4thmd_b_pac4
        {
            label = "Carry-All";
            options[]=
            {
                "4thmd_role",
                "4thmd_color",
                "4thmd_camo",
                "4thmd_radio"
            };

            class 4thmd_role
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 0;
				label = "Role";
                values[]=
				{
					"4thmd_r_rmn",
					"4thmd_r_med",
					"4thmd_r_eng",
                    "4thmd_r_eos"
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

                class 4thmd_r_eng
                {
                    label = "Engineer";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_engineer.paa";
                };

                class 4thmd_r_eos
                {
                    label = "EOS";
                    image = "darkmod_4thmd\data\0icon\aax\icon_r_explosive.paa";
                    description = "Explosive Ordnance Specialist";
                };
            };

            class 4thmd_color
            {
                alwaysSelectable = 1;
				changeingame = 1;
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
				changeingame = 1;
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

            class 4thmd_radio
            {
                alwaysSelectable = 1;
				changeingame = 1;
				changedelay = 10;
                label = "Secondary Radio";
                values[] =
                {
                    "4thmd_auxof",
                    "4thmd_auxon"
                };

                class 4thmd_auxof
                {
                    label = "None";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Remove Secondary Radio";
                };

                class 4thmd_auxon
                {
                    label = "AN/PRC-152";
                    image = "darkmod_4thmd\data\0icon\aax\icon_z_standard.paa";
                    actionlabel = "Setup Secondary AN/PRC-152";
                    itemingame = "rhsusf_radio_anprc152";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        //Massif Uniform
            //Basic Uniforms
                class 4thmd_u_unif1_ar0
                {
                    Model = "4thmd_u_unif1_basic";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ru_ar0
                {
                    Model = "4thmd_u_unif1_basic";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_tt_ar0
                {
                    Model = "4thmd_u_unif1_basic";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar0
                {
                    Model = "4thmd_u_unif1_basic";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar0
                {
                    Model = "4thmd_u_unif1_basic";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_rollup = "4thmd_auxof";
                };

            //Standard Uniforms
                class 4thmd_u_unif1_ar0_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar0_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar0_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar0_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar1_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar1_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar1_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar1_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar2_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar2_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar2_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar2_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar3_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar3_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar3_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_ar3_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

            //Standard Uniforms (Short-Sleeves)
                class 4thmd_u_unif1_ru_ar0_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar0_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar0_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar0_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar1_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar1_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar1_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar1_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar2_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar2_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar2_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar2_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar3_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar3_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar3_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxon";
                };

                class 4thmd_u_unif1_ru_ar3_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxon";
                };

            //Tank Top + Uniforms
                class 4thmd_u_unif1_tt_ar0_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar0_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar0_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar0_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar1_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar1_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar1_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar1_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar2_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar2_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar2_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar2_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar3_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar3_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar3_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_tt_ar3_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_tt";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };
        
            //Sweater + Uniforms
                class 4thmd_u_unif1_sw_ar0_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar0_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar0_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar0_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar1_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar1_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar1_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar1_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar2_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar2_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar2_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar2_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar3_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar3_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar3_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_sw_ar3_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_sw";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

            //Ghillie + Uniforms
                class 4thmd_u_unif1_gh_ar0_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar0_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar0_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar0_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar1_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar1_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar1_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar1_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar2_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar2_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar2_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar2_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar3_a
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_alpha";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar3_s
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_sabre";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar3_z
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_zulu";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };

                class 4thmd_u_unif1_gh_ar3_p
                {
                    Model = "4thmd_u_unif1";
                    4thmd_squad = "4thmd_phoenix";
                    4thmd_type = "unif1_gh";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_rollup = "4thmd_auxof";
                };
        //Ghillie Suits
            class 4thmd_u_ghil1_ar1
            {
                Model = "4thmd_u_ghil1";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_ghil0";
            };
            class 4thmd_u_ghil1_ar1_a
            {
                Model = "4thmd_u_ghil1";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_ghil1";
            };
            class 4thmd_u_ghil1_ar1_b
            {
                Model = "4thmd_u_ghil1";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_ghil2";
            };
            class 4thmd_u_ghil1_ar1_c
            {
                Model = "4thmd_u_ghil1";
                4thmd_color = "4thmd_arid";
                4thmd_camo = "4thmd_c_ghil3";
            };

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

    class CfgVehicles
    {
        //Assault Pack Backpack (Pac1)
            //Standard
                class 4thmd_b_pac1_rmn_ar0
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_rmn_ar1
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_rmn_ar2
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_rmn_ar3
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_med_ar0
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_med_ar1
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_med_ar2
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_med_ar3
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eng_ar0
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eng_ar1
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eng_ar2
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eng_ar3
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eos_ar0
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eos_ar1
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eos_ar2
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac1_eos_ar3
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
            //Radio
                class 4thmd_b_pac1_rmn_ar0_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_rmn_ar1_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_rmn_ar2_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_rmn_ar3_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_med_ar0_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_med_ar1_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_med_ar2_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_med_ar3_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eng_ar0_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eng_ar1_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eng_ar2_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eng_ar3_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eos_ar0_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eos_ar1_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eos_ar2_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac1_eos_ar3_r
                {
                    Model = "4thmd_b_pac1";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

        //Field Pack Backpack (pac2)
            //Standard
                class 4thmd_b_pac2_rmn_ar0
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_rmn_ar1
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_rmn_ar2
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_rmn_ar3
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_med_ar0
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_med_ar1
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_med_ar2
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_med_ar3
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eng_ar0
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eng_ar1
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eng_ar2
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eng_ar3
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eos_ar0
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eos_ar1
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eos_ar2
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac2_eos_ar3
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
            //Radio
                class 4thmd_b_pac2_rmn_ar0_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_rmn_ar1_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_rmn_ar2_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_rmn_ar3_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_med_ar0_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_med_ar1_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_med_ar2_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_med_ar3_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eng_ar0_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eng_ar1_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eng_ar2_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eng_ar3_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eos_ar0_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eos_ar1_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eos_ar2_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac2_eos_ar3_r
                {
                    Model = "4thmd_b_pac2";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

        //Kitbag Backpack (pac3)
            //Standard
                class 4thmd_b_pac3_rmn_ar0
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_rmn_ar1
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_rmn_ar2
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_rmn_ar3
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_med_ar0
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_med_ar1
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_med_ar2
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_med_ar3
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eng_ar0
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eng_ar1
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eng_ar2
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eng_ar3
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eos_ar0
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eos_ar1
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eos_ar2
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };

                class 4thmd_b_pac3_eos_ar3
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
            //Radio
                class 4thmd_b_pac3_rmn_ar0_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_rmn_ar1_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_rmn_ar2_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_rmn_ar3_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_med_ar0_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_med_ar1_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_med_ar2_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_med_ar3_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eng_ar0_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eng_ar1_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eng_ar2_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eng_ar3_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eos_ar0_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eos_ar1_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eos_ar2_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };

                class 4thmd_b_pac3_eos_ar3_r
                {
                    Model = "4thmd_b_pac3";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };

        //Carry-All Backpack (pac4)
            //Standard
                class 4thmd_b_pac4_rmn_ar0
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_rmn_ar1
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_rmn_ar2
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_rmn_ar3
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_med_ar0
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_med_ar1
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_med_ar2
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_med_ar3
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eng_ar0
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eng_ar1
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eng_ar2
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eng_ar3
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eos_ar0
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eos_ar1
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eos_ar2
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxof";
                };
        
                class 4thmd_b_pac4_eos_ar3
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxof";
                };
            //Radio
                class 4thmd_b_pac4_rmn_ar0_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_rmn_ar1_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_rmn_ar2_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_rmn_ar3_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_rmn";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_med_ar0_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_med_ar1_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_med_ar2_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_med_ar3_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_med";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eng_ar0_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eng_ar1_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eng_ar2_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eng_ar3_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eng";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eos_ar0_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_standard";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eos_ar1_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid1";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eos_ar2_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid2";
                    4thmd_radio = "4thmd_auxon";
                };
        
                class 4thmd_b_pac4_eos_ar3_r
                {
                    Model = "4thmd_b_pac4";
                    4thmd_role = "4thmd_r_eos";
                    4thmd_color = "4thmd_arid";
                    4thmd_camo = "4thmd_c_solid3";
                    4thmd_radio = "4thmd_auxon";
                };
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