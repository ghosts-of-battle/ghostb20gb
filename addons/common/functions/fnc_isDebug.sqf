/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\GHOSTB_common\functions\diagnostics\fn_isDebug.sqf
 *	by Ojemineh
 *	
 *	check if debug is enabled
 *	
 *	Arguments:
 *	nothing
 *	
 *	Return:
 *	<BOOLEAN>
 *	
 *	Example:
 *	[] call GHOSTB_common_fnc_isDebug;
 *	
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["GHOSTB_debug_enabled", false]);

_return;