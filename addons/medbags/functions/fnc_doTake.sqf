#include "..\script_component.hpp"
/*

 * \ghostb_medical\supplies\functions\fn_doUnpackFirstAid.sqf
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
 * [player] call GHOSTB_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "ghostb_medbags_FirstAid";

[_unit, "ghostb_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
