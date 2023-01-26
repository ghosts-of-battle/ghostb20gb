/*
    Author: Freddo

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\z\ghostbrhs\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class ghostbrhs_adminlog
{
    title = "Ghost Log";
    variable = "ghostbrhs_adminmenu_debrief";
};
