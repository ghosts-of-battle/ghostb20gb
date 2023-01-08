#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,GHOSTB_enabled) || !(EGVAR(common,GHOSTB_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
