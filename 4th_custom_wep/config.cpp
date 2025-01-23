class CfgPatches
{
    class 4th_custom_wep
	{
        weapons[] = 
        {
            "4th_w_m_85870_dmr2_nut",
            "4th_w_m_127x99_dmr2_nut",
            "4th_w_m_85870_dmr2_spk"
        };
        units[] = {};
        requiredAddons[] = 
        {   
        "A3_Weapons_F_Exp"
        };

        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgMagazines
{
    class 10Rnd_338_Mag;

    class 4th_m_127x99_5ulr_sby_nt : 10Rnd_338_Mag
    {
        displayName = "5rnd 12.7x99mm Ball Magazine";
		displayNameShort = "Ball NT";
		descriptionShort = "M33 Standard Ball Rounds<br/>No Tracers";

		ammo = "B_127x99_Ball_Tracer_Yellow";
		lastRoundsTracer = 0;
		tracersEvery = 0;

        mass = 17.5;
        count = 5;
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo = "greenmag_ammo_127x99_basic_1Rnd";
		greenmag_basicammo = "greenmag_ammo_127x99_basic_1Rnd";
    };

    class 4th_m_127x99_5ulr_sby_t : 4th_m_127x99_5ulr_sby_nt
    {
        displayName = "5rnd 12.7x99mm Ball-Y(T) Magazine";
		displayNameShort = "Ball-Y T";
		descriptionShort = "M17B2 Yellow Tracer Rounds<br/>All Tracers";

		lastRoundsTracer = 1;
		tracersEvery = 1;
    };

    class 4th_m_127x99_5ulr_api_nt : 4th_m_127x99_5ulr_sby_nt
    {
        displayName = "5rnd 12.7x99mm API Magazine";
		displayNameShort = "API NT";
		descriptionShort = "M8 Armor-Piercing Incendiary Rounds<br/>No Tracers";

		ammo = "ACE_127x99_API";

		greenmag_ammo = "greenmag_ammo_127x99_API_1Rnd";
    };

    class 4th_m_127x99_5ulr_slr_nt : 4th_m_127x99_5ulr_sby_nt
    {
        displayName = "5rnd 12.7x99mm SBLR Magazine";
		displayNameShort = "SBLR NT";
		descriptionShort = "XM1022-AMAX Special Ballistic Long Range Rounds<br/>No Tracers";

		ammo = "ACE_127x99_Ball_AMAX";

		greenmag_ammo = "greenmag_ammo_127x99_AMAX_1Rnd";
    };
};

class CfgMagazineWells
{
    class DM_127x99_MAR10
    {
        4th_Magazines[] = 
        {
            "4th_m_127x99_5ulr_sby_nt",
            "4th_m_127x99_5ulr_sby_t",
            "4th_m_127x99_5ulr_api_nt",
            "4th_m_127x99_5ulr_slr_nt"
        };
    };
};

class CfgWeapons
{
    // Nutter's Good News
        class srifle_DMR_02_F;
        class 4th_w_m_858x70_dmr2_nut : srifle_DMR_02_F
        {
            baseweapon="4th_w_m_858x70_dmr2_nut";

            author="Frosty & Mac";
            displayname="[ARMCO] Nutters' Good News (.338LM)";

            hiddenSelectionsTextures[]=
            {
                "4th_custom_wep\data\dmr2\nutters\dmr2_01_nut_CO.paa",
                "4th_custom_wep\data\dmr2\nutters\dmr2_02_nut_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "4th_custom_wep\data\dmr2\nutters\dmr2_01_nut.rvmat",
                "a3\weapons_f_mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
            };
        };

        class 4th_w_m_127x99_dmr2_nut : 4th_w_m_858x70_dmr2_nut
        {
            baseweapon="4th_w_m_127x99_dmr2_nut";

            author="Frosty & Mac";
            displayname="[ARMCO] Nutters' Good News (12.7x99mm)";

            magazines[] = {"4th_m_127x99_5ulr_sby_nt"};
            magazineWell[] ={"DM_127x99_MAR10"};

            hiddenSelectionsTextures[]=
            {
                "4th_custom_wep\data\dmr2\nutters\dmr2_01_nut_CO.paa",
                "4th_custom_wep\data\dmr2\nutters\dmr2_02_nut_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "4th_custom_wep\data\dmr2\nutters\dmr2_01_nut.rvmat",
                "a3\weapons_f_mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
            };
        };

    //Spook's Heather
        class 4th_w_m_858x70_dmr2_spk : srifle_DMR_02_F
        {
            baseweapon="4th_w_m_858x70_dmr2_spk";

            author="Frosty & Mac";
            displayname="4Bt. Spooks' Heather (.338LM)";

            hiddenSelectionsTextures[]=
            {
                "4th_custom_wep\data\dmr2\spooks\dmr2_01_spk_CO.paa",
                "4th_custom_wep\data\dmr2\spooks\dmr2_02_spk_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "4th_custom_wep\data\dmr2\spooks\dmr2_01_spk.rvmat",
                "a3\weapons_f_mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
            };
        };
};
