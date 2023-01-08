if !(isserver) exitwith {};

// Enable/Disable Channels
[0, [GHOSTB_Channels_GlobalText, GHOSTB_Channels_GlobalVoice]] remoteExec ["enablechannel",0,true];
[1, [GHOSTB_Channels_SideText, GHOSTB_Channels_SideVoice]] remoteExec ["enablechannel",0,true];
[2, [GHOSTB_Channels_CommandText, GHOSTB_Channels_CommandVoice]] remoteExec ["enablechannel",0,true];
[3, [GHOSTB_Channels_GroupText, GHOSTB_Channels_GroupVoice]] remoteExec ["enablechannel",0,true];
[4, [GHOSTB_Channels_VehicleText, GHOSTB_Channels_VehicleVoice]] remoteExec ["enablechannel",0,true];
[5, [GHOSTB_Channels_DirectText, GHOSTB_Channels_DirectVoice]] remoteExec ["enablechannel",0,true];


// Global Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_GlobalDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_GlobalDuration * 60)) then {
            [0, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Side Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_SideDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_SideDuration * 60)) then {
            [1, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Command Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_CommandDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_CommandDuration * 60)) then {
            [2, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Group Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_GroupDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_GroupDuration * 60)) then {
            [3, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Vehicle Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_VehicleDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_VehicleDuration * 60)) then {
            [4, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Direct Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (GHOSTB_Channels_DirectDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (GHOSTB_Channels_DirectDuration * 60)) then {
            [5, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;
