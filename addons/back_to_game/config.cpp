#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_main"
        };
        author = "Ghost";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"

#include "teleportDialog.hpp"
