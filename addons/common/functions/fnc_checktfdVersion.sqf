#include "\z\ghostbrhs\addons\common\script_component.hpp"
/*
 * Name: ghostbrhs_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if ghostbrhs Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _ghostbrhsersion = getMissionConfigValue ["ghostbrhs_version",[0,0,0]];

([_ghostbrhsersion,_input] call EFUNC(common,checkVersionArray));

