class CfgPatches {
    class darkmod_4thmd_fact_kat
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
            {   
            "darkmod_4thmd_faction",
            "kat_main"
            };

        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "1.0.0";
    };
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#define stditem "ACE_fieldDressing",    \
                "ACE_fieldDressing",    \
                "ACE_fieldDressing",    \
                "ACE_fieldDressing",    \
                "ACE_elasticBandage",   \
                "ACE_elasticBandage",   \
                "ACE_packingBandage",   \
                "ACE_packingBandage",   \
                "ACE_quikclot",         \
                "ACE_quikclot",         \
                "ACE_epinephrine",      \
                "ACE_splint",           \
                "ACE_tourniquet",       \
                "kat_IV_16",            \
                "ACE_morphine",         \
                "ACE_salineIV_250",     \
                "ACE_EarPlugs",         \
                "ACE_CableTie",         \
                "ACE_EntrenchingTool",  \
                "ACE_Canteen",          \
                "kat_PainkillerItem"

class CfgVehicles
{
    class 4thmd_b_pac2_ar1_m_med;
    class 4thmd_b_pac2_ar1_m_med_kat : 4thmd_b_pac2_ar1_m_med
    {
        class TransportMagazines
        {
            mag_xx(kat_Painkiller,4);
        };
        class TransportItems
        {
            item_xx(ACE_fieldDressing,6);
            item_xx(ACE_elasticBandage,6);
            item_xx(ACE_packingBandage,6);
            item_xx(ACE_quikclot,6);
            item_xx(ACE_epinephrine,4);
            item_xx(ACE_morphine,4);
            item_xx(ACE_splint,4);
            item_xx(ACE_tourniquet,4);
            item_xx(ACE_salineIV,1);
            item_xx(ACE_surgicalKit,1);
            item_xx(ACE_suture,10);
            item_xx(kat_naloxone,1);
            item_xx(kat_IO_FAST,1);
            item_xx(kat_IV_16,4);
            item_xx(KAT_Empty_bloodIV_500,2);
            item_xx(kat_chestSeal,2);
            item_xx(kat_ncdKit,1);
            item_xx(kat_bloodIV_B_N_500,1);
            item_xx(kat_bloodIV_A_N_500,1);
            item_xx(kat_bloodIV_O_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_AB_N_500,1);
            item_xx(kat_Pulseoximeter,1);
        };
    };

    class 4thmd_b_pac3_ar1_m_med;
    class 4thmd_b_pac3_ar1_m_med_kat : 4thmd_b_pac3_ar1_m_med
    {
        class TransportMagazines
        {
            mag_xx(kat_Painkiller,4);
        };
        class TransportItems
        {
            item_xx(ACE_fieldDressing,6);
            item_xx(ACE_elasticBandage,6);
            item_xx(ACE_packingBandage,6);
            item_xx(ACE_quikclot,6);
            item_xx(ACE_epinephrine,4);
            item_xx(kat_naloxone,1);
            item_xx(ACE_splint,4);
            item_xx(ACE_tourniquet,4);
            item_xx(kat_IV_16,4);
            item_xx(KAT_Empty_bloodIV_500,2);
            item_xx(ACE_salineIV,1);
            item_xx(kat_bloodIV_B_N_500,1);
            item_xx(kat_bloodIV_A_N_500,1);
            item_xx(kat_bloodIV_O_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_AB_N_500,1);
            item_xx(kat_Pulseoximeter,1);
            item_xx(ACE_surgicalKit,1);
            item_xx(kat_IO_FAST,4);
            item_xx(kat_ketamine,4);
            item_xx(kat_chestSeal,4);
            item_xx(kat_ncdKit,2);
            item_xx(ACE_suture,15);
            item_xx(kat_aatKit,2);
            item_xx(kat_fentanyl,4);
            item_xx(kat_lidocaine,4);
            item_xx(kat_plate,3);
            item_xx(kat_scalpel,3);
            item_xx(kat_etomidate,3);
            item_xx(kat_EACA,2);
            item_xx(kat_clamp,1);
            item_xx(kat_flumazenil,1);
            item_xx(kat_retractor,1);
            item_xx(kat_AED,1);
            item_xx(ACE_plasmaIV,1);
            item_xx(kat_bloodIV_O_N_500,1);
        };
    };

    class 4thmd_rad1_DD_ar1m_med;
    class 4thmd_rad1_DD_ar1m_med_kat : 4thmd_rad1_DD_ar1m_med
    {
        scope = 1;
        scopeArsenal = 1;

        class TransportMagazines
        {
            mag_xx(kat_Painkiller,4);
        };
        class TransportItems
        {
            item_xx(ACE_fieldDressing,6);
            item_xx(ACE_elasticBandage,6);
            item_xx(ACE_packingBandage,6);
            item_xx(ACE_quikclot,6);
            item_xx(ACE_epinephrine,4);
            item_xx(kat_naloxone,1);
            item_xx(ACE_splint,4);
            item_xx(ACE_tourniquet,4);
            item_xx(kat_IV_16,4);
            item_xx(KAT_Empty_bloodIV_500,2);
            item_xx(ACE_salineIV,1);
            item_xx(kat_bloodIV_B_N_500,1);
            item_xx(kat_bloodIV_A_N_500,1);
            item_xx(kat_bloodIV_O_500,1);
            item_xx(kat_bloodIV_O_N_250,1);
            item_xx(kat_bloodIV_AB_N_500,1);
            item_xx(kat_Pulseoximeter,1);
            item_xx(ACE_surgicalKit,1);
            item_xx(kat_IO_FAST,4);
            item_xx(kat_ketamine,4);
            item_xx(kat_chestSeal,4);
            item_xx(kat_ncdKit,2);
            item_xx(ACE_suture,15);
            item_xx(kat_aatKit,4);
            item_xx(kat_fentanyl,4);
            item_xx(kat_lidocaine,4);
            item_xx(kat_plate,5);
            item_xx(kat_scalpel,8);
            item_xx(kat_etomidate,5);
            item_xx(kat_EACA,4);
            item_xx(kat_clamp,1);
            item_xx(kat_flumazenil,1);
            item_xx(kat_retractor,1);
            item_xx(kat_AED,1);
            item_xx(ACE_plasmaIV,1);
            item_xx(kat_bloodIV_O_N_500,1);
            item_xx(ACE_plasmaIV_500,1);
            item_xx(kat_vacuum,1);
        };
    };

    class B_Soldier_F;
    class 4thmd_u_base_ar1 : B_Soldier_F
	{
        Items[] = {stditem};
		RespawnItems[] = {stditem};
	};

    class 4thmd_u_rifleman_ar1;
    class 4thmd_u_medic_ar1 : 4thmd_u_rifleman_ar1
    {
        backpack = "4thmd_b_pac2_ar1_m_med_kat";
    };

    class 4thmd_u_doctor_ar1 : 4thmd_u_medic_ar1
    {
        backpack = "4thmd_b_pac3_ar1_m_med_kat";
    };

    class 4thmd_u_docldr_ar1 : 4thmd_u_medic_ar1
    {
        backpack = "4thmd_rad1_DD_ar1m_med_kat";
    };

    class 4thmd_u_tleader_ar1 : 4thmd_u_rifleman_ar1
	{
        Items[] = {stditem,"ItemRadio","ACE_MapTools","ACE_microDAGR","ACE_Flashlight_XL50"};
		RespawnItems[] = {stditem,"ItemRadio","ACE_MapTools","ACE_microDAGR","ACE_Flashlight_XL50"};
	};

    class 4thmd_u_marksman_ar1 : 4thmd_u_rifleman_ar1
	{
        Items[] = {stditem,"ACE_RangeCard"};
		RespawnItems[] = {stditem,"ACE_RangeCard"};
	};

    class 4thmd_u_sniper_ar1 : 4thmd_u_marksman_ar1
	{
        Items[] = {stditem,"ACE_RangeCard","ACE_Kestrel4500"};
		RespawnItems[] = {stditem,"ACE_RangeCard","ACE_Kestrel4500"};
	};
};