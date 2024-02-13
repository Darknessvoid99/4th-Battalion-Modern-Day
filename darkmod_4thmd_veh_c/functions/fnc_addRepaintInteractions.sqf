/*
  Name: 4thmd_fnc_addRepaintInteractions

  Author: Darknessvoid99 & Puretide
    Adds ACE interactions for Repaint Interaction

  Arguments:

  Return Value:
    None

  Example:
*/

/*
  WIP Requirements
  1. Reference to a vehicle
  2. Identify that vehicle determining which textures are modified.

  fnc_changeCamo
  params [ "_vehicle",""]

_vehicle setObjectTextureGlobal [0,"path_to_tex_file"];

"darkmod_4thmd_veh_c\data\dv_mbt2_body_c01.paa",
                "darkmod_4thmd_veh_c\data\dv_mbt2_turret_c01.paa",
                "darkmod_4thmd_veh_c\data\dv_mbt2_extra_c01.paa",
                "A3\Armor_F\Data\camonet_CSAT_HEX_Green_Co.paa"
*/

params ["_vehicle"]

_action = 
[
    "4thmdRepaint",
    "Apply ARMCO Paint",
    "",
    {
        _vehicle setObjectTextureGlobal [0,"darkmod_4thmd_veh_c\data\dv_mbt2_body_c01.paa"];
        _vehicle setObjectTextureGlobal [1,"darkmod_4thmd_veh_c\data\dv_mbt2_turret_c01.paa"];
        _vehicle setObjectTextureGlobal [2,"darkmod_4thmd_veh_c\data\dv_mbt2_extra_c01.paa"];
        _vehicle setObjectTextureGlobal [3,"darkmod_4thmd_veh\data\camonet\dm_camonet_tropical_01.paa"];
    },
    {
        true
    },
] call ace_interact_menu_fnc_createAction;

[
    "O_T_MBT_02_cannon_ghex_F",
    0,
    ["ACE_MainActions"],
    _action
] call ace_interact_menu_fnc_addActionToObject;