/*
 * Name: ghostbrhs_common_fnc_sideTohexColor
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
if (isNil "ghostbrhs_common_blufor_hex_color") then {
    ghostbrhs_common_blufor_hex_color = ghostbrhs_common_blufor_color call BIS_fnc_colorRGBtoHTML;
    ghostbrhs_common_opfor_hex_color = ghostbrhs_common_opfor_color call BIS_fnc_colorRGBtoHTML;
    ghostbrhs_common_indep_hex_color = ghostbrhs_common_indep_color call BIS_fnc_colorRGBtoHTML;
    ghostbrhs_common_civ_hex_color = ghostbrhs_common_civ_color call BIS_fnc_colorRGBtoHTML;
    ghostbrhs_common_empty_hex_color = ghostbrhs_common_empty_color call BIS_fnc_colorRGBtoHTML;
};
switch _this do {
    case blufor: {ghostbrhs_common_blufor_hex_color};
    case opfor: {ghostbrhs_common_opfor_hex_color};
    case independent: {ghostbrhs_common_indep_hex_color};
    case civilian: {ghostbrhs_common_civ_hex_color};
    default {ghostbrhs_common_empty_hex_color};
};
