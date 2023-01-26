#include "script_component.hpp"
// Global Text
[
    "ghostbrhs_Channels_GlobalText",
    "CHECKBOX",
    ["Global Text", "Allow players to use Global Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Global Voice
[
    "ghostbrhs_Channels_GlobalVoice",
    "CHECKBOX",
    ["Global Voice", "Allow players to speak in Global Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Global Duration
[
    "ghostbrhs_Channels_GlobalDuration",
    "SLIDER",
    ["Global Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;

// Side Text
[
    "ghostbrhs_Channels_SideText",
    "CHECKBOX",
    ["Side Text", "Allow players to use Side Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Side Voice
[
    "ghostbrhs_Channels_SideVoice",
    "CHECKBOX",
    ["Side Voice", "Allow players to speak in Side Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Side Duration
[
    "ghostbrhs_Channels_SideDuration",
    "SLIDER",
    ["Side Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;

// Command Text
[
    "ghostbrhs_Channels_CommandText",
    "CHECKBOX",
    ["Command Text", "Allow players to use Command Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Command Voice
[
    "ghostbrhs_Channels_CommandVoice",
    "CHECKBOX",
    ["Command Voice", "Allow players to speak in Command Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Command Duration
[
    "ghostbrhs_Channels_CommandDuration",
    "SLIDER",
    ["Command Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;

// Group Text
[
    "ghostbrhs_Channels_GroupText",
    "CHECKBOX",
    ["Group Text", "Allow players to use Group Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Group Voice
[
    "ghostbrhs_Channels_GroupVoice",
    "CHECKBOX",
    ["Group Voice", "Allow players to speak in Group Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Group Duration
[
    "ghostbrhs_Channels_GroupDuration",
    "SLIDER",
    ["Group Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;

// Vehicle Text
[
    "ghostbrhs_Channels_VehicleText",
    "CHECKBOX",
    ["Vehicle Text", "Allow players to use Vehicle Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Vehicle Voice
[
    "ghostbrhs_Channels_VehicleVoice",
    "CHECKBOX",
    ["Vehicle Voice", "Allow players to speak in Vehicle Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Vehicle Duration
[
    "ghostbrhs_Channels_VehicleDuration",
    "SLIDER",
    ["Vehicle Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;

// Direct Text
[
    "ghostbrhs_Channels_DirectText",
    "CHECKBOX",
    ["Direct Text", "Allow players to use Direct Text Channel and draw on map."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Direct Voice
[
    "ghostbrhs_Channels_DirectVoice",
    "CHECKBOX",
    ["Direct Voice", "Allow players to speak in Direct Voice Channel."],
    COMPONENT_NAME,
    true,
    true, {

    }
] call CBA_fnc_addSetting;

// Direct Duration
[
    "ghostbrhs_Channels_DirectDuration",
    "SLIDER",
    ["Direct Duration", "If enabled, how long till selected channels are disabled. 0 is permanent."],
    COMPONENT_NAME,
    [0, 300, 0, 0],
    true, {

    }
] call CBA_fnc_addSetting;
