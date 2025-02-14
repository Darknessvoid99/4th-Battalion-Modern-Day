_veh = _this select 0;
_fuel1 = '4thmd_s_ft1_apc2t_ar1' createVehicle position _veh;
_fuel1 attachTo [_veh, [0.688,-1,-0.9]];
_fuel2 = '4thmd_s_ft1_apc2t_ar1' createVehicle position _veh;
_fuel2 attachTo [_veh, [-0.688,-1,-0.9]];
_trac1 = 'Land_TankTracks_01_short_F' createVehicle position _veh;
_trac1 attachTo [_veh, [0.749,-2.118,-0.355]];
_trac2 = 'Land_TankTracks_01_short_F' createVehicle position _veh;
_trac2 attachTo [_veh, [-0.551,-1.801,-0.388]];
_trac2 setDir 270;
_trac2 setPosWorld getPosWorld _trac2;
_spok1 = 'Land_TankRoadWheels_01_single_F' createVehicle position _veh;
_spok1 attachTo [_veh, [-0.597,-2.521,-0.302]];


// lt1_ca_es - AEV-2 Weasel Engineer Vehicle 
_veh = _this select 0;
_fuel1 = '4thmd_s_ft1_lt1_ar1' createVehicle position _veh;
_fuel1 allowDamage false;
_fuel1 attachTo [_veh, [0.05,-0.65,0.15]];
_fuel1 setVectorDirAndUp [[0,1,0], [1,0,1.19249e-08]];
_fuel2 = '4thmd_s_ft1_lt1_ar1' createVehicle position _veh;
_fuel2 attachTo [_veh, [0.05,-0.05,0.15]];
_fuel2 setVectorDirAndUp [[0,1,0], [1,0,1.19249e-08]];
_fuel2 allowDamage false;
_crat1 = 'SFIA_Box_Support_lxWS' createVehicle position _veh;
_crat1 attachTo [_veh, [-0.05,-1.6,0.95]];
_crat1 setDir 90;
_crat1 setObjectTextureGlobal [0,''];
_trak1 = 'ACE_Track' createVehicle position _veh;
_trak1 attachTo [_veh, [-0.7,-0.7,0.1]];
_trak1 setDir 90;
_trak2 = 'ACE_Track' createVehicle position _veh;
_trak2 attachTo [_veh, [-0.72,-0.05,0.1]];
_trak2 setDir 105;

