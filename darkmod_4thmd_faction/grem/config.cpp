class CfgPatches {
    class darkmod_4thmd_fact_grem
	{
        weapons[] = {};
        units[] = {};
        magazines[] = 
        {
            "4thmd_m_76251_b100_bb_so_t3_rb",
            "4thmd_m_76251_b100_bb_so_t_rb",
            "4thmd_m_76251_b100_bb_so_nt_rb",
            "4thmd_m_76251_b50_ad_so_t3_rb",
            "4thmd_m_76251_b50_ad_so_t_rb",
            "4thmd_m_76251_b50_ad_so_nt_rb",
            "4thmd_m_76251_b50_ad_apo_t6_rb",
            "4thmd_m_76251_b50_ad_apo_nt_rb",
            "4thmd_m_76251_b50_ad_lro_t6_rb",
            "4thmd_m_76251_b50_ad_lro_nt_rb"
        };
        requiredAddons[] = 
            {   
            "darkmod_4thmd",
            "darkmod_4thmd_ilbe",
            "darkmod_4thmd_mgp",
            "darkmod_4thmd_veh",
            "hlcweapons_SCAR",
            "niaweapons_226",
            "ace_ballistics",
            "greenmag_main",
            "DONOTLOADUNDERANYCIRCUMSTANCESDARKMOD"
            };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "1.0.0";
    };
};

#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgMagazines
{
//7.62x51mm 100rnd
    class 4thmd_m_76251_b100_bb_so_t3;
    class 4thmd_m_76251_b100_bb_so_t3_rb : 4thmd_m_76251_b100_bb_so_t3
    {
        descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Replacable Belt";

		greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b100_bb_so_t;
    class 4thmd_m_76251_b100_bb_so_t_rb : 4thmd_m_76251_b100_bb_so_t
    {
        descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Replacable Belt";

        greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b100_bb_so_nt;
    class 4thmd_m_76251_b100_bb_so_nt_rb : 4thmd_m_76251_b100_bb_so_nt
    {
		descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

        greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_so_t3;
    class 4thmd_m_76251_b50_ad_so_t3_rb : 4thmd_m_76251_b50_ad_so_t3
    {

		descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>M62A1 Enhanced Tracer Rounds<br/>Tracer every 3, 10 End Tracers<br/>Non-Disentegrating, Replacable Belt";

        greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_so_t;
    class 4thmd_m_76251_b50_ad_so_t_rb : 4thmd_m_76251_b50_ad_so_t
    {
		descriptionShort = "M62A1 Enhanced Tracer Rounds<br/>All Tracers<br/>Non-Disentegrating, Replacable Belt";

		greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_so_nt;
    class 4thmd_m_76251_b50_ad_so_nt_rb : 4thmd_m_76251_b50_ad_so_nt
    {
		descriptionShort = "M80A1 Enhanced Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

        greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_apo_t6;
    class 4thmd_m_76251_b50_ad_apo_t6_rb : 4thmd_m_76251_b50_ad_apo_t6
    {
		descriptionShort = "M61 Armor Piercing Rounds<br/>M62E1 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Replacable Belt";

        greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_apo_nt;
    class 4thmd_m_76251_b50_ad_apo_nt_rb : 4thmd_m_76251_b50_ad_apo_nt
    {
		descriptionShort = "M61 Armor Piercing Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

		greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_lro_t6;
    class 4thmd_m_76251_b50_ad_lro_t6_rb : 4thmd_m_76251_b50_ad_lro_t6
    {
		descriptionShort = "M118 Long Range Preformance Rounds<br/>M62E3 Enhanced Tracer Rounds<br/>Tracer every 6, 5 End Tracers<br/>Non-Disentegrating, Replacable, Belt";

		greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };

    class 4thmd_m_76251_b50_ad_lro_nt;
    class 4thmd_m_76251_b50_ad_lro_nt_rb : 4thmd_m_76251_b50_ad_lro_nt
    {
		descriptionShort = "M118 Long Range Preformance Rounds<br/>No Tracers<br/>Non-Disentegrating, Replacable Belt";

		greenmag_canSpeedload=0;
		greenmag_needBelt=1;
        greenmag_ammo = "greenmag_beltlinked_762x51_basic";
		greenmag_basicammo="greenmag_beltlinked_762x51_basic";
    };
};

class CfgMagazineWells
{
    class CBA_762x51_MG3
    {
        4thmd_mags_rb[] =
        {
            "4thmd_m_76251_b100_bb_so_t3_rb",
            "4thmd_m_76251_b100_bb_so_t_rb",
            "4thmd_m_76251_b100_bb_so_nt_rb",
            "4thmd_m_76251_b50_ad_so_t3_rb",
            "4thmd_m_76251_b50_ad_so_t_rb",
            "4thmd_m_76251_b50_ad_so_nt_rb",
            "4thmd_m_76251_b50_ad_apo_t6_rb",
            "4thmd_m_76251_b50_ad_apo_nt_rb",
            "4thmd_m_76251_b50_ad_lro_t6_rb",
            "4thmd_m_76251_b50_ad_lro_nt_rb"
        };
    };
};

class CfgVehicles
{
    class 4thmd_b_mgb2_ar1;
    class 4thmd_b_mgb3_ar1;
    class 4thmd_b_pac1_ar1;
    class 4thmd_b_pac2_ar1;
    class 4thmd_b_pac3_ar1;

    class 4thmd_b_mgb2_ar1_rm : 4thmd_b_mgb2_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,4);
        };
    };

    class 4thmd_b_mgb3_ar1_rmv : 4thmd_b_mgb3_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_762x51_basic_20Rnd,4);
        };
    };

    class 4thmd_b_mgb3_ar1_rmvat : 4thmd_b_mgb3_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,4);
        };
    };

    class 4thmd_b_mgb3_ar1_tl : 4thmd_b_mgb3_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,5);
        };
    };

    class 4thmd_b_mgb4_ar1;
    class 4thmd_b_mgb4_ar1_mr : 4thmd_b_mgb4_ar1
    {
        scope = 1;
        scopeArsenal = 1;

        class TransportItems
        {
            item_xx(greenmag_ammo_762x51_basic_20Rnd,5);
        };
    };

    class 4thmd_b_mgb4_ar1_sr : 4thmd_b_mgb4_ar1
    {
        scope = 1;
        scopeArsenal = 1;

        class TransportItems
        {
            item_xx(greenmag_ammo_338_basic_10Rnd,6);
        };
    };

    class 4thmd_b_mgb4_ar1_ch_baf : 4thmd_b_mgb4_ar1
    {
        scope = 1;
        scopeArsenal = 1;

        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,6);
            item_xx(greenmag_item_speedloader,1);
        };
    };

    class 4thmd_rad1_blade_ar1;
    class 4thmd_rad1_blade_ar1_sl : 4thmd_rad1_blade_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,5);
        };
    };

    class 4thmd_b_pac2_ar1_mg_a : 4thmd_b_pac2_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_762x51_basic_50Rnd,10);
            item_xx(greenmag_item_speedloader,1);
        };
    };

    class 4thmd_b_pac1_ar1_ar : 4thmd_b_pac1_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_50Rnd,5);
            item_xx(greenmag_item_speedloader,1);
        };
    };

    class 4thmd_b_pac1_ar1_gr_baf : 4thmd_b_pac1_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_30Rnd,5);
        };
    };

    class 4thmd_b_pac3_ar1_ab : 4thmd_b_pac3_ar1
    {
        class TransportItems
        {
            item_xx(greenmag_ammo_556x45_basic_60Rnd,10);
            item_xx(greenmag_ammo_762x51_basic_50Rnd,5);
            item_xx(greenmag_item_speedloader,1);
        };
    };
};