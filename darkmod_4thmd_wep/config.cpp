class CfgPatches {
    class darkmod_4thmd_wep
	{
        weapons[] = 
        {
            "4thmd_u_unif1_ar1",
            "4thmd_u_unif1_ar1_ss"
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

class CfgWeapons
{
    class srifle_DMR_02_F;
    class 4thmd_w_m_86070_dmr2_nut : srifle_DMR_02_F
    {
        baseweapon="4thmd_w_m_86070_dmr2_nut";

        author="Frosty & Mac";
        displayname="4Bt. Nutters' Good News";

        hiddenSelectionsTextures[]=
		{
			"darkmod_4thmd_wep\data\dmr2\nutters\dmr2_01_nut_CO.paa",
			"darkmod_4thmd_wep\data\dmr2\nutters\dmr2_02_nut_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"darkmod_4thmd_wep\data\dmr2\nutters\dmr2_01_nut.rvmat",
			"a3\weapons_f_mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
		};
    };

    class 4thmd_w_m_86070_dmr2_spk : srifle_DMR_02_F
    {
        baseweapon="4thmd_w_m_86070_dmr2_spk";

        author="Frosty & Mac";
        displayname="4Bt. Spooks' Heather";

        hiddenSelectionsTextures[]=
		{
			"darkmod_4thmd_wep\data\dmr2\spooks\dmr2_01_spk_CO.paa",
			"darkmod_4thmd_wep\data\dmr2\spooks\dmr2_02_spk_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"darkmod_4thmd_wep\data\dmr2\spooks\dmr2_01_spk.rvmat",
			"a3\weapons_f_mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
		};
    };
};
