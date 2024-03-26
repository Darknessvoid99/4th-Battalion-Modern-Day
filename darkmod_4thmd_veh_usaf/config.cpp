class CfgPatches 
{
    class darkmod_4thmd_veh_usaf
	{
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        requiredAddons[] = 
        {
            "darkmod_4thmd",
            "darkmod_4thmd_veh",
            "USAF_Main",
            "USAF_Missilebox",
            "USAF_Missilebox_C"
        };
        skipWhenMissingDependencies = 1;
        author = "Darknessvoid99";
        version = "0.1.0.2402120315";
    };
};

class CfgWeapons
{
	class SmokeLauncher;
	class CMFlareLauncher : SmokeLauncher
    {
        class Single;
    };
	class 4thmd_CMFlareLauncher : CMFlareLauncher
	{
		modes[]=
		{
			"Single",
			"Burst",
			"Burst2",
			"Burst3",
			"AIBurst"
		};
        class Single : Single
		{
			reloadTime=0.0024999999;
			autoFire="false";
			displayName="CM 2F/-";
			burst=1;
			multiplier=2;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\HMG\HMG_grenade",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};

		class Burst : Single
		{
			reloadTime=0.25;
			autoFire="true";
			displayName="CM 8F/1S";
			burst=4;
		};

		class Burst2: Burst
		{
			reloadTime=0.5;
			displayName="CM 16F/4S";
			burst=8;
		};

        class Burst3: Burst
		{
			reloadTime=1.2;
			displayName="CM 20F/12S";
			burst=10;
		};
	};
};

class cfgMagazines
{
    class USAF_AIM120C_Base;
    class USAF_MagazineBase_LGB;
    class USAF_MagazineBase_Bo;
    class USAF_Rack_3rnd_BRU42;
    class USAF_1Rnd_RACKS_X2;
    class USAF_MagazineBase_AA;

    class USAF_PylonRack_1Rnd_AIM120C: USAF_AIM120C_Base
	{
		hardpoints[]=
		{
			"B_USAF_AIM_120_Pylon",
            "DM_USAF_AIM_120C_Pylon"
		};
		//model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		//mass=156;
	};

    class USAF_PylonRack_1Rnd_GBU12: USAF_MagazineBase_LGB
	{
		hardpoints[]=
		{
			"B_BOMB_GBU12",
            "DM_USAF_BOMB_GBU12"
		};
	};

    class USAF_PylonRack_1Rnd_GBU12GG : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_GBU12"};
    };

    class USAF_PylonRack_1Rnd_GBU12GM : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_GBU12"};
    };

    class USAF_PylonRack_1Rnd_GBU12T : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_GBU12"};
    };

    class USAF_PylonRack_2Rnd_GBU12_BRU57: USAF_1Rnd_RACKS_X2
	{
		hardpoints[]=
		{
			"B_BOMB_2GBU12_BRU57",
            "DM_USAF_BOMB_2GBU12_BRU57"
		};
	};

    class USAF_PylonRack_2Rnd_GBU12GG_BRU57 : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_2GBU12_BRU57"};
    };

    class USAF_PylonRack_2Rnd_GBU12GM_BRU57 : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_2GBU12_BRU57"};
    };

    class USAF_PylonRack_2Rnd_GBU12T_BRU57 : USAF_PylonRack_1Rnd_GBU12
    {
        hardpoints[] = {"B_BOMB_2GBU12_BRU57"};
    };

    class USAF_PylonRack_1Rnd_ANALQ131 : USAF_MagazineBase_LGB
    {
        hardpoints[] =
        {
            "B_USAF_ECM_2",
            "DM_USAF_ECM"
        };
    };

    class USAF_PylonRack_2Rnd_AIM9M : USAF_MagazineBase_AA  //correcting bug from USAF
    {
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
    };
};

class CfgVehicles
{
    class I_Plane_Fighter_04_F;
    class 4thmd_v_jet4_base1 : I_Plane_Fighter_04_F
	{
		class Components;
	};

    class 4thmd_v_jet4_base2 : 4thmd_v_jet4_base1
    {
        class UserActions;
        class Components : Components
		{
			class TransportPylonsComponent;
		};
    };

    class 4thmd_v_jet4_ar1 : 4thmd_v_jet4_base2 // ALPHA Texture
    {
        weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"4thmd_CMFlareLauncher"
		};

        class UserActions : UserActions
		{
            class USAF_GPS_targeting_system
			{
				displayName="GPS/INS Guidance System";
				shortcut="User3";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				condition="(driver this == player) && {[this] call USAF_GPS_DIALOG_fnc_isGPSDialogAvailable}";
				statement="createDialog 'USAF_GPS_DIALOG'";
			};
            class USAF_HOB_Setting
			{
				displayName="Configure Height of Burst";
				shortcut="";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				condition="[this] call USAF_HOB_DIALOG_fnc_isHOBDialogAvailable";
				statement="createDialog 'USAF_HOB_DIALOG'";
			};
			class ECM
			{
				displayName="ECM";
				onlyforplayer=0;
				position="pilotcontrol";
				radius=25;
				showWindow=0;
				condition="count([this] call USAF_ECM_fnc_ECM_MAG) > 0 && player in this";
				statement="[this] spawn USAF_ECM_fnc_ECM_INIT;";
			};
        };

        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
			{
				class pylons
				{
					class Pylon1            //Light / Wingtip
                    {
                        attachment="USAF_PylonRack_1Rnd_AIM9M";
                        hardpoints[] =
                        {
                            "B_USAF_AIM9M_Pylon",
                            "DM_USAF_AIM_120C_Pylon",
                            "B_BOMB_FFAR7",
                            "B_BOMB_APKWS7"
                        };

						priority=5;
						maxweight=300;
						UIposition[]={0.55000001,0.40000001};
                    };
					class pylon2 : pylon1
                    {
                        UIposition[]={0.1,0.40000001};
						mirroredMissilePos=1;
                    };

					class pylon3            //Medium
					{
                        attachment="USAF_PylonRack_1Rnd_AIM120C";
                        hardpoints[] =
                        {
                            "B_USAF_AIM9M_Pylon",
                            "B_AIM9M_DUAL_RAIL",
                            "DM_USAF_AIM_120C_Pylon",
                            "B_BOMB_FFAR7",
                            "B_BOMB_FFAR19",
                            "B_BOMB_APKWS7",
                            "DM_USAF_BOMB_GBU12",
                            "B_BOMB_CBU87",
                            "B_BOMB_CBU89",
                            "B_BOMB_CBU97",
                            "B_BOMB_MK20",
                            "B_BOMB_MK77",
                            "B_BOMB_MK82SE",
                            "DM_ACE_4AGM114_Pylon",
                            "DM_AGM65_RAIL",
                        };

                        priority=4;
						maxweight=800;
						UIposition[]={0.5,0.34999999};
					};
					class pylon4 : pylon3
					{
                        attachment="USAF_PylonRack_1Rnd_AIM120C";
                        hardpoints[] =
                        {
                            "B_USAF_AIM9M_Pylon",
                            "B_AIM9M_DUAL_RAIL",
                            "DM_USAF_AIM_120C_Pylon",
                            "B_BOMB_FFAR7",
                            "B_BOMB_FFAR19",
                            "B_BOMB_APKWS7",
                            "DM_USAF_BOMB_GBU12",
                            "B_BOMB_CBU87",
                            "B_BOMB_CBU89",
                            "B_BOMB_CBU97",
                            "B_BOMB_MK20",
                            "B_BOMB_MK77",
                            "B_BOMB_MK82SE",
                            "DM_ACE_4AGM114_Pylon",
                            "DM_AGM65_RAIL",

                            "B_BOMB_ADM160",
                            "DM_USAF_ECM"
                        };

                        UIposition[]={0.15000001,0.34999999};
						mirroredMissilePos=3;
					};

					class pylon5            //Heavy
					{
                        attachment="USAF_PylonRack_19Rnd_HYDRA70";
                        hardpoints[] =
                        {
                            "B_USAF_AIM9M_Pylon",
                            "B_AIM9M_DUAL_RAIL",
                            "DM_USAF_AIM_120C_Pylon",
                            "B_BOMB_FFAR7",
                            "B_BOMB_FFAR19",
                            "B_BOMB_APKWS7",
                            "DM_USAF_BOMB_GBU12",
                            "B_BOMB_CBU87",
                            "B_BOMB_CBU89",
                            "B_BOMB_CBU97",
                            "B_BOMB_MK20",
                            "B_BOMB_MK77",
                            "DM_USAF_BOMB_MK82",
                            "B_BOMB_MK82SE",
                            "DM_ACE_4AGM114_Pylon",
                            "DM_AGM65_RAIL",

	                        "DM_USAF_BOMB_2GBU12_BRU57",
                            "B_BOMB_GBU24",
                            "B_USAF_AGM88_RACK",
                            "B_BOMB_GBU39",
                            "B_BOMB_2CBU87",
                            "B_BOMB_2CBU892",
                            "B_BOMB_2CBU97",
                            "B_BOMB_2MK20",
                            "B_BOMB_3MK82SE"
                        };

						priority=3;
						maxweight=1500;
						UIposition[]={0.44999999,0.30000001};
					};
					class Pylon6 : pylon5
					{
						attachment="PylonRack_4Rnd_ACE_Hellfire_AGM114K";
                        hardpoints[] =
                        {
                            "B_USAF_AIM9M_Pylon",
                            "B_AIM9M_DUAL_RAIL",
                            "DM_USAF_AIM_120C_Pylon",
                            "B_BOMB_FFAR7",
                            "B_BOMB_FFAR19",
                            "B_BOMB_APKWS7",
                            "DM_USAF_BOMB_GBU12",
                            "B_BOMB_CBU87",
                            "B_BOMB_CBU89",
                            "B_BOMB_CBU97",
                            "B_BOMB_MK20",
                            "B_BOMB_MK77",
                            "DM_USAF_BOMB_MK82",
                            "B_BOMB_MK82SE",
                            "DM_ACE_4AGM114_Pylon",
                            "DM_AGM65_RAIL",

	                        "DM_USAF_BOMB_2GBU12_BRU57",
                            "B_BOMB_GBU24",
                            "B_USAF_AGM88_RACK",
                            "B_BOMB_GBU39",
                            "B_BOMB_2CBU87",
                            "B_BOMB_2CBU892",
                            "B_BOMB_2CBU97",
                            "B_BOMB_2MK20",
                            "B_BOMB_3MK82SE",

                            "B_MISSILE_AGM84"
                        };

						UIposition[]={0.2,0.30000001};
						mirroredMissilePos=5;
					};
				};

                class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};

                    class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_19Rnd_HYDRA70",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K"
						};
					};

                    class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C",
							"USAF_PylonRack_1Rnd_AIM120C"
						};
					};

                    class AAL
					{
						displayName="Anti-Air (Light)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_2Rnd_AIM9M",
							"USAF_PylonRack_2Rnd_AIM9M",
							"USAF_PylonRack_2Rnd_AIM9M",
							"USAF_PylonRack_2Rnd_AIM9M"
						};
					};
    
                    class AS
					{
						displayName="Anti-Ship";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"",
							"",
							"",
							"USAF_PylonRack_1Rnd_AGM84"
						};
					};

                    class AT
					{
						displayName="STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114N",
							"USAF_PylonRack_1Rnd_ANALQ131",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L"
						};
					};

                    class ATH
					{
						displayName="Anti-Tank (Heavy)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_CBU97",
							"USAF_PylonRack_1Rnd_CBU97",
							"ace_maverick_L_PylonRack_x2",
							"ace_maverick_L_PylonRack_x2"
						};
					};

                    class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
							"USAF_PylonRack_7Rnd_APKWS",
                            "USAF_PylonRack_2Rnd_GBU12_BRU57",
							"USAF_PylonRack_2Rnd_GBU12_BRU57"
						};
					};

                    class BMR
					{
						displayName="Carpet Bomber";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_MK82SE",
							"USAF_PylonRack_1Rnd_MK82SE",
                            "USAF_PylonRack_3Rnd_MK82SE",
							"USAF_PylonRack_3Rnd_MK82SE"
						};
					};

                    class CASC
					{
						displayName="CAS (Contested)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_7Rnd_APKWS",
                            "USAF_PylonRack_1Rnd_ANALQ131",
                            "USAF_PylonRack_4Rnd_GBU39",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114L"
						};
					};

                    class CASH
					{
						displayName="CAS (Heavy)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
                            "PylonRack_4Rnd_ACE_Hellfire_AGM114N",
                            "USAF_PylonRack_1Rnd_GBU24",
							"USAF_PylonRack_1Rnd_GBU24"
						};
					};

                    class CLU
					{
						displayName="Cluster";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_MK20",
							"USAF_PylonRack_1Rnd_MK20",
                            "USAF_PylonRack_2Rnd_CBU87",
							"USAF_PylonRack_2Rnd_CBU87"
						};
					};

					class SEAD
					{
						displayName="AA Suppression";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"",
							"",
                            "USAF_PylonRack_1Rnd_AGM88",
							"USAF_PylonRack_1Rnd_AGM88"
						};
					};

					class CASB
					{
						displayName="CAS (SDB)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_7Rnd_APKWS",
							"PylonRack_4Rnd_ACE_Hellfire_AGM114K",
                            "USAF_PylonRack_4Rnd_GBU39",
							"USAF_PylonRack_4Rnd_GBU39"
						};
					};

					class SDB
					{
						displayName="Bomber (SDB)";
						attachment[]=
						{
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_AIM9M",
							"USAF_PylonRack_1Rnd_GBU12",
							"USAF_PylonRack_1Rnd_GBU12",
                            "USAF_PylonRack_4Rnd_GBU39",
							"USAF_PylonRack_4Rnd_GBU39"
						};
					};
                };
			};
        };
    };
};