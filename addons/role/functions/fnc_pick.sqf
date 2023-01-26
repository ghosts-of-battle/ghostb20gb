#include "..\script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbrhsmakecom = [
    "ghostbrhsmakecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        player
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbrhsmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbrhsmakeeng = [
    "ghostbrhsmakeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbrhsmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbrhsmakemed = [
    "ghostbrhsmakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbrhsmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbrhsmakewep = [
    "ghostbrhsmakewep",
    "Weapons",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbrhsmakewep] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbrhsFIX = [
    "ghostbrhsfix",
    "FIX Perms",
    "", {
        player call FUNC(role);
        player call FUNC(rank);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbrhsFIX] call ACE_interact_menu_fnc_addActionToObject;


// private _ghostbrhsmakepilot = [
//     "ghostbrhsmakepilot",
//     "Pilot",
//     "", {
//         player call FUNC(makepilot);
//     }, {true}, {},
//     [_area]
// ] call ACE_interact_menu_fnc_createAction;

// [this, 0, ["ACE_MainActions"], _ghostbrhsmakepilot] call ACE_interact_menu_fnc_addActionToObject;

