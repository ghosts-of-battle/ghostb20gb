#include "..\script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakecom = [
    "ghostbmakecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        player
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakeeng = [
    "ghostbmakeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakemed = [
    "ghostbmakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakewep = [
    "ghostbmakewep",
    "Weapons",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakewep] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbFIX = [
    "ghostbfix",
    "FIX Perms",
    "", {
        player call FUNC(role);
        player call FUNC(rank);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbFIX] call ACE_interact_menu_fnc_addActionToObject;


// private _ghostbmakepilot = [
//     "ghostbmakepilot",
//     "Pilot",
//     "", {
//         player call FUNC(makepilot);
//     }, {true}, {},
//     [_area]
// ] call ACE_interact_menu_fnc_createAction;

// [this, 0, ["ACE_MainActions"], _ghostbmakepilot] call ACE_interact_menu_fnc_addActionToObject;

