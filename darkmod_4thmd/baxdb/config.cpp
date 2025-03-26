class CfgPatches
{
    class darkmod_4thmd_baxdb
	{
        weapons[] = 
        {
            "4thmd_b_pac5_alp_ar0_s",
            "4thmd_b_pac5_alp_ar1_s",
            "4thmd_b_pac5_alp_ar2_s",
            "4thmd_b_pac5_alp_ar3_s",
            "4thmd_b_pac5_sab_ar0_s",
            "4thmd_b_pac5_sab_ar1_s",
            "4thmd_b_pac5_sab_ar2_s",
            "4thmd_b_pac5_sab_ar3_s",
            "4thmd_b_pac5_zul_ar0_s",
            "4thmd_b_pac5_zul_ar1_s",
            "4thmd_b_pac5_zul_ar2_s",
            "4thmd_b_pac5_zul_ar3_s",
            "4thmd_b_pac5_phx_ar0_s",
            "4thmd_b_pac5_phx_ar1_s",
            "4thmd_b_pac5_phx_ar2_s",
            "4thmd_b_pac5_phx_ar3_s",

            "4thmd_b_pac5_alp_wd0_s",
            "4thmd_b_pac5_alp_wd1_s",
            "4thmd_b_pac5_alp_wd2_s",
            "4thmd_b_pac5_alp_wd3_s",
            "4thmd_b_pac5_sab_wd0_s",
            "4thmd_b_pac5_sab_wd1_s",
            "4thmd_b_pac5_sab_wd2_s",
            "4thmd_b_pac5_sab_wd3_s",
            "4thmd_b_pac5_zul_wd0_s",
            "4thmd_b_pac5_zul_wd1_s",
            "4thmd_b_pac5_zul_wd2_s",
            "4thmd_b_pac5_zul_wd3_s",
            "4thmd_b_pac5_phx_wd0_s",
            "4thmd_b_pac5_phx_wd1_s",
            "4thmd_b_pac5_phx_wd2_s",
            "4thmd_b_pac5_phx_wd3_s"
        };
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {   
            "darkmod_4thmd",
            "RF_Props_DuffleBag",
            "cba_main"
        };

        author = "Darknessvoid99";
        version = "0.1.0.2402120109";
        skipWhenMissingDependencies = 1;
    };
};

#define DEBUG 1 // 1 = OFF, 2 = ON

class CfgVehicles
{
    //Static Versions
        class ReammoBox_F
        {
            class ACE_Actions;
	    };
        class Bax_DuffelBags_Duffel_Base : ReammoBox_F
        {
            class ACE_Actions : ACE_Actions
            {
                class ACE_MainActions;
            };

            class EventHandlers;
        };

        class 4thmd_b_pac5_alp_ar0_s : Bax_DuffelBags_Duffel_Base
        {
            scope = 2;
            ScopeCurator = 2;

            author = "Darknessvoid99";
            displayName = "[ARMCO] LRRP-Carrier (Arid/ALPHA)";

            model = "\A3\Weapons_F\Ammoboxes\Bags\Backpack_Bergen_F.p3d";
            hiddenSelections[] = {"camo_1"};
            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_a_ar0.paa"
            };
            
            maximumLoad = 580;

            class ACE_Actions : ACE_Actions
            {
                class ACE_MainActions : ACE_MainActions
                {
                    class BAX_CheckOwner
                    {
                        displayName = "Check Owner";
                        condition = "alive _target";
                        statement = "_owner = _target getVariable ""bax_duffelBags_duffelOwner""; _name = if (isNil ""_owner"") then {""No one""} else {name _owner}; [format [""%1 owns this Bag"", _name], false, 4] call ace_common_fnc_displayText;";
                    };
                };
            };

            ace_dragging_carryDirection = 180;

            class EventHandlers : EventHandlers
            {
                PostInit = "_pac = _this select 0;_pac setPosASL ((getPosASL _pac) vectorAdd [0,0,0.5]);";
            };

            class AssembleInfo
            {
                assembleTo = "";
                primary = 0;
                base = "";
                displayName = "";
                dissasembleTo[] = {"4thmd_b_pac5_alp_ar0"};
            };
        };

        class 4thmd_b_pac5_alp_ar1_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S1/ALPHA)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_a_ar1.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_alp_ar1"};
            };
        };

        class 4thmd_b_pac5_alp_ar2_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S2/ALPHA)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_a_ar2.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_alp_ar2"};
            };
        };

        class 4thmd_b_pac5_alp_ar3_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S3/ALPHA)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_a_ar3.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_alp_ar3"};
            };
        };

        class 4thmd_b_pac5_sab_ar0_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (Arid/SABRE)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_s_ar0.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_sab_ar0"};
            };
        };

        class 4thmd_b_pac5_sab_ar1_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S1/SABRE)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_s_ar1.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_sab_ar1"};
            };
        };

        class 4thmd_b_pac5_sab_ar2_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S2/SABRE)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_s_ar2.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_sab_ar2"};
            };
        };

        class 4thmd_b_pac5_sab_ar3_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S3/SABRE)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_s_ar3.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_sab_ar3"};
            };
        };

        class 4thmd_b_pac5_zul_ar0_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (Arid/ZULU)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_z_ar0.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_zul_ar0"};
            };
        };

        class 4thmd_b_pac5_zul_ar1_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S1/ZULU)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_z_ar1.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_zul_ar1"};
            };
        };

        class 4thmd_b_pac5_zul_ar2_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S2/ZULU)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_z_ar2.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_zul_ar2"};
            };
        };

        class 4thmd_b_pac5_zul_ar3_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S3/ZULU)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_z_ar3.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_zul_ar3"};
            };
        };

        class 4thmd_b_pac5_phx_ar0_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (Arid/PHX)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_p_ar0.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_phx_ar0"};
            };
        };

        class 4thmd_b_pac5_phx_ar1_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S1/PHX)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_p_ar1.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_phx_ar1"};
            };
        };

        class 4thmd_b_pac5_phx_ar2_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S2/PHX)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_p_ar2.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_phx_ar2"};
            };
        };

        class 4thmd_b_pac5_phx_ar3_s : 4thmd_b_pac5_alp_ar0_s
        {
            displayName = "[ARMCO] LRRP-Carrier (AR-S3/PHX)";

            hiddenSelectionsTextures[] = 
            {
                "darkmod_4thmd\data\arid\pac5_p_ar3.paa"
            };

            class AssembleInfo : AssembleInfo
            {
                dissasembleTo[] = {"4thmd_b_pac5_phx_ar3"};
            };
        };

    //Standard Packs Modify
        class B_Bergen_mcamo_F;

        class 4thmd_b_pac5_alp_ar0 : B_Bergen_mcamo_F
        {
            class AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar0_s";
                primary = 1;
                base = "";
                displayName = "LRRP-Carrier";
                dissasembleTo[] = {};
            };
        };

        class 4thmd_b_pac5_alp_ar1 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar1_s";
            };
        };
        
        class 4thmd_b_pac5_alp_ar2 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar2_s";
            };
        };

        class 4thmd_b_pac5_alp_ar3 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar3_s";
            };
        };

        class 4thmd_b_pac5_sab_ar0 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar0_s";
            };
        };

        class 4thmd_b_pac5_sab_ar1 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_sab_ar1_s";
            };
        };
        
        class 4thmd_b_pac5_sab_ar2 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_sab_ar2_s";
            };
        };

        class 4thmd_b_pac5_sab_ar3 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_sab_ar3_s";
            };
        };

        class 4thmd_b_pac5_zul_ar0 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar0_s";
            };
        };

        class 4thmd_b_pac5_zul_ar1 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_zul_ar1_s";
            };
        };
        
        class 4thmd_b_pac5_zul_ar2 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_zul_ar2_s";
            };
        };

        class 4thmd_b_pac5_zul_ar3 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_zul_ar3_s";
            };
        };

        class 4thmd_b_pac5_phx_ar0 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_alp_ar0_s";
            };
        };

        class 4thmd_b_pac5_phx_ar1 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_phx_ar1_s";
            };
        };
        
        class 4thmd_b_pac5_phx_ar2 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_phx_ar2_s";
            };
        };

        class 4thmd_b_pac5_phx_ar3 : 4thmd_b_pac5_alp_ar0
        {
            class AssembleInfo : AssembleInfo
            {
                assembleTo = "4thmd_b_pac5_phx_ar3_s";
            };
        };
    
    //Include Other Patterns 
        #include "wood\CfgV_equ.hpp"
        //#include "dest\CfgV_equ.hpp"
        //#include "jung\CfgV_equ.hpp"
        //#include "borl\CfgV_equ.hpp"
        //#include "snbl\CfgV_equ.hpp"
        //#include "artc\CfgV_equ.hpp"
        //#include "navy\CfgV_equ.hpp"
};