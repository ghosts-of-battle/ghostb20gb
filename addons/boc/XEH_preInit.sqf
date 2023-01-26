#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,ghostbrhs_enabled) || !(EGVAR(common,ghostbrhs_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
