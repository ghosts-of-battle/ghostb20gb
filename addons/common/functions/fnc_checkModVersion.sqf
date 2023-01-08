#include "\z\ghostb\addons\common\script_component.hpp"
/*
 * Name: ghostb_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if ghostb Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _ghostbVersion = getMissionConfigValue ["ghostb_version",[0,0,0]];

([_ghostbVersion,_input] call EFUNC(common,checkVersionArray));

