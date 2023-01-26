#include "script_component.hpp"

if (isNil QEGVAR(common,ghostbrhs_enabled) || !(EGVAR(common,ghostbrhs_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

ghostbrhs_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance ghostbrhs_unit) == "PRONE" && {ghostbrhs_unit getvariable [QGVAR(preventProne),false]} && {!(ghostbrhs_unit getVariable ["ACE_isUnconscious", false]) || lifeState ghostbrhs_unit != "INCAPACITATED"}
       ) then {
        ghostbrhs_unit playAction "PlayerCrouch";
        hint localize "str_ghostbrhs_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
