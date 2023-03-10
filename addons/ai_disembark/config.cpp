#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostbrhs_common"
        };
        author = "Ghost";
        authors[] = {"Madin", "veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
