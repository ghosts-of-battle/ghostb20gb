#include "..\script_component.hpp"
/*

 * \ghostbrhs_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call ghostbrhs_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "ghostbrhs_medbags_FirstAid";

[_unit, "ghostbrhs_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
