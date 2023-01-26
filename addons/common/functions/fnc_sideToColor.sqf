/*
 * Name: ghostbrhs_common_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "ghostbrhs_common_blufor_color") then {
    ghostbrhs_common_blufor_color = [blufor] call bis_fnc_sideColor;
    ghostbrhs_common_opfor_color = [opfor] call bis_fnc_sideColor;
    ghostbrhs_common_indep_color = [independent] call bis_fnc_sideColor;
    ghostbrhs_common_civ_color = [civilian] call bis_fnc_sideColor;
    ghostbrhs_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {ghostbrhs_common_blufor_color};
    case opfor: {ghostbrhs_common_opfor_color};
    case independent: {ghostbrhs_common_indep_color};
    case civilian: {ghostbrhs_common_civ_color};
    default {ghostbrhs_common_empty_color};
};
