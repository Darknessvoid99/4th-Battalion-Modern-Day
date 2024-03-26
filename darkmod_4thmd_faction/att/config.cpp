class CfgPatches {
    class darkmod_4thmd_fact_att
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {
                "darkmod_4thmd_faction",
                "RKSL_Attachments_core",
                "rhsusf_weapons",
                "rhsusf_weapons2",
                "rhsusf_weapons3",
                "rhsusf_scopes",
                "UK3CB_BAF_Weapons_Accessories"
            };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "1.0.0";
    };
};

class CfgWeapons
{
    class hlc_lmg_MG3KWS_b_100rnd;
    class 4thmd_w_a_76251_mg3_bk_a_4x : hlc_lmg_MG3KWS_b_100rnd
    {
        class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};
		};
    };

    class srifle_DMR_02_F;
    class 4thmd_w_m_86070_badnews_bk_a_12x : srifle_DMR_02_F
    {
		class LinkedItems
		{
            class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_LEUPOLDMK4_2_mrds";
			};
		};
    };
};

class CfgVehicles
{
    class 4thmd_u_base_ar1;
    class 4thmd_u_base_run_ar1 : 4thmd_u_base_ar1
	{
        class EventHandlers;
	};

    class 4thmd_u_rifleman_ar1 : 4thmd_u_base_run_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_pmvfg_black';";
            };
        };
	};

    class 4thmd_u_rifleman_vet_ar1 : 4thmd_u_rifleman_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'RKSL_optic_LDS_C';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_Miter18T';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_rifleman_at_ar1 : 4thmd_u_rifleman_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3_tan';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_pmvfg_black';";
            };
        };
    };

    class 4thmd_u_rifleman_vat_ar1 : 4thmd_u_rifleman_at_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'RKSL_optic_LDS_C';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_medic_ar1 : 4thmd_u_rifleman_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_t1';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_AFG2';";
            };
        };
    };

    class 4thmd_u_doctor_ar1 : 4thmd_u_medic_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_Holosight_blk_F';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_docldr_ar1 : 4thmd_u_medic_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_Holosight';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_specialist_mat_ar1 : 4thmd_u_rifleman_at_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_AFG2';";
            };
        };
    };

    class 4thmd_u_specialist_hat_ar1 : 4thmd_u_rifleman_at_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_Holosight_blk_F';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_specialist_haa_ar1 : 4thmd_u_rifleman_at_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_Holosight';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
    };

    class 4thmd_u_assistant_ab_ar1 : 4thmd_u_rifleman_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_MRCO';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_AFG2';";
            };
        };
	};

    class 4thmd_u_assistant_mat_ar1 : 4thmd_u_assistant_ab_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_MRCO';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
	};

    class 4thmd_u_assistant_hat_ar1 : 4thmd_u_assistant_ab_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3_tan';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
	};

    class 4thmd_u_assistant_haa_ar1 : 4thmd_u_assistant_hat_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
	};

    class 4thmd_u_assistant_mg_ar1 : 4thmd_u_assistant_mat_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_pmvfg_black';";
            };
        };
	};

    class 4thmd_u_lgunner_ar1 : 4thmd_u_rifleman_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_MRCO';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'bipod_01_F_blk';";
            };
        };
	};

    class 4thmd_u_grenadier_ar1 : 4thmd_u_rifleman_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';";
            };
        };
	};

    class 4thmd_u_tleader_ar1 : 4thmd_u_rifleman_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'RKSL_optic_LDS';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'hlc_grip_AFG2';";
            };
        };
	};

    class 4thmd_u_tleader_gl_ar1 : 4thmd_u_tleader_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'RKSL_optic_LDS';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';";
            };
        };
	};

    class 4thmd_u_sleader_ar1 : 4thmd_u_tleader_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'RKSL_optic_LDS';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
	};

    class 4thmd_u_pleader_ar1 : 4thmd_u_sleader_ar1
	{
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'optic_Holosight';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_ROTEX3P';_unit addPrimaryWeaponItem 'HLC_Panel_Under_MagpulXT_OD';";
            };
        };
	};

    class 4thmd_u_engineer_ar1 : 4thmd_u_rifleman_ar1
    {
        class EventHandlers : EventHandlers
        {
            class 4thmd_attachments
            {
                init = "_unit = _this select 0;removeAllPrimaryWeaponItems _unit;_unit addPrimaryWeaponItem 'rhsusf_acc_g33_xps3_tan';_unit addPrimaryWeaponItem 'UK3CB_BAF_LLM_Flashlight_Black';_unit addPrimaryWeaponItem 'hlc_muzzle_snds_rotex3p';_unit addPrimaryWeaponItem 'hlc_grip_AFG2';";
            };
        };
    };
};