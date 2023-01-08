/*
    Author: Freddo

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\z\ghostb\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class ghostb_adminlog
{
    title = "Ghost Log";
    variable = "ghostb_adminmenu_debrief";
};
