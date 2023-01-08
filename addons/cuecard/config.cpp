#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"GHOSTB_main","ghostb_common"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};



#include "CfgEventHandlers.hpp"
#include "dialogs\CfgDisplays.hpp"

class CfgScriptPaths {
    GHOSTBisplays = "z\ghostb\addons\cuecard\Scripts\UI\Displays\";
};

