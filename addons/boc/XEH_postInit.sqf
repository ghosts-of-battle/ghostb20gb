#include "script_component.hpp"

if (isNil QEGVAR(common,GHOSTB_enabled) || !(EGVAR(common,GHOSTB_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

GHOSTB_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance GHOSTB_unit) == "PRONE" && {GHOSTB_unit getvariable [QGVAR(preventProne),false]} && {!(GHOSTB_unit getVariable ["ACE_isUnconscious", false]) || lifeState GHOSTB_unit != "INCAPACITATED"}
       ) then {
        GHOSTB_unit playAction "PlayerCrouch";
        hint localize "str_GHOSTB_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
