/*
 * Name: ghostb_common_fnc_sideToColor
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
if (isNil "ghostb_common_blufor_color") then {
    ghostb_common_blufor_color = [blufor] call bis_fnc_sideColor;
    ghostb_common_opfor_color = [opfor] call bis_fnc_sideColor;
    ghostb_common_indep_color = [independent] call bis_fnc_sideColor;
    ghostb_common_civ_color = [civilian] call bis_fnc_sideColor;
    ghostb_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {ghostb_common_blufor_color};
    case opfor: {ghostb_common_opfor_color};
    case independent: {ghostb_common_indep_color};
    case civilian: {ghostb_common_civ_color};
    default {ghostb_common_empty_color};
};