// not documented: postInit

if (isserver) then {{_x setSpeaker "NoVoice"} forEach playableUnits;}; // Here because it has nowhere else to go!

if (!hasinterface) exitwith {};

if !(isClass (configFile >> "CfgPatches" >> "task_force_radio")) exitwith {};

if (isNil "ghostb_Main_TFARTransmitRange") exitwith {};
player setVariable ["tf_sendingDistanceMultiplicator", GHOSTB_Main_TFARTransmitRange];

if (isNil "ghostb_Main_TFARTerrainInterference") exitwith {};
player setVariable ["TF_terrain_interception_coefficient", GHOSTB_Main_TFARTerrainInterference];
