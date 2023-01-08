#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    class B_AssaultPack_rgr;
    class B_AssaultPack_Kerry;
    class B_Carryall_cbr;
    class B_Kitbag_rgr;
    class B_TacticalPack_blk;
    class B_Kitbag_Base;

    class ghostb_Multicam_lite_B_AssaultPack_Multicam: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_lite_B_AssaultPackEnhanced_Multicam: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_co.paa),
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Multicam_lite_B_Carryall_Multicam: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_lite_B_Kitbag_rgr_Multicam: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_lite_B_TacticalPack_Multicam: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Snow_lite_B_AssaultPack_Multicam_Snow: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Snow_lite_B_AssaultPackEnhanced_Multicam_Snow: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Snow_co.paa),
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Multicam_Snow_lite_B_Carryall_Multicam_Snow: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Snow_lite_B_Kitbag_rgr_Multicam_Snow: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Snow_lite_B_TacticalPack_Multicam_Snow: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Woodland_lite_B_AssaultPack_Multicam_Woodland: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Woodland_lite_B_AssaultPackEnhanced_Multicam_Woodland: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Woodland_co.paa),
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Multicam_Woodland_lite_B_Carryall_Multicam_Woodland: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Woodland_lite_B_Kitbag_rgr_Multicam_Woodland: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Multicam_Woodland_lite_B_TacticalPack_Multicam_Woodland: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Black_lite_B_AssaultPack_Solid_Black: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Black_lite_B_AssaultPackEnhanced_Solid_Black: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Black_co.paa),
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Solid_Black_lite_B_Carryall_Solid_Black: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Black_lite_B_Kitbag_rgr_Solid_Black: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Black_lite_B_TacticalPack_Solid_Black: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_CoyoteBrown_lite_B_AssaultPack_Solid_CoyoteBrown: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_CoyoteBrown_lite_B_AssaultPackEnhanced_Solid_CoyoteBrown: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Solid_CoyoteBrown_lite_B_Carryall_Solid_CoyoteBrown: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_CoyoteBrown_lite_B_Kitbag_rgr_Solid_CoyoteBrown: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_CoyoteBrown_lite_B_TacticalPack_Solid_CoyoteBrown: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Ranger_Green_lite_B_AssaultPack_Solid_Ranger_Green: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Ranger_Green_lite_B_AssaultPackEnhanced_Solid_Ranger_Green: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Solid_Ranger_Green_lite_B_Carryall_Solid_Ranger_Green: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Ranger_Green_lite_B_Kitbag_rgr_Solid_Ranger_Green: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Ranger_Green_lite_B_TacticalPack_Solid_Ranger_Green: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_Tigerstripe_lite_B_AssaultPack_US_Tigerstripe: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_Tigerstripe_lite_B_AssaultPackEnhanced_US_Tigerstripe: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_Tigerstripe_co.paa),
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_US_Tigerstripe_lite_B_Carryall_US_Tigerstripe: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_Tigerstripe_lite_B_Kitbag_rgr_US_Tigerstripe: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_Tigerstripe_lite_B_TacticalPack_US_Tigerstripe: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Olive_lite_B_AssaultPack_Solid_Olive: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Olive_lite_B_AssaultPackEnhanced_Solid_Olive: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Olive_co.paa),
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Solid_Olive_lite_B_Carryall_Solid_Olive: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Olive_lite_B_Kitbag_rgr_Solid_Olive: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_Olive_lite_B_TacticalPack_Solid_Olive: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_White_lite_B_AssaultPack_Solid_White: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_White_lite_B_AssaultPackEnhanced_Solid_White: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_White_co.paa),
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_Solid_White_lite_B_Carryall_Solid_White: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_White_lite_B_Kitbag_rgr_Solid_White: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_Solid_White_lite_B_TacticalPack_Solid_White: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_DCU_lite_B_AssaultPack_US_DCU: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_DCU_lite_B_AssaultPackEnhanced_US_DCU: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_DCU_co.paa),
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_US_DCU_lite_B_Carryall_US_DCU: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_DCU_lite_B_Kitbag_rgr_US_DCU: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_DCU_lite_B_TacticalPack_US_DCU: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_M81_lite_B_AssaultPack_US_M81: B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_M81_lite_B_AssaultPackEnhanced_US_M81: B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_M81_co.paa),
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_US_M81_lite_B_Carryall_US_M81: B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_M81_lite_B_Kitbag_rgr_US_M81: B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class ghostb_US_M81_lite_B_TacticalPack_US_M81: B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Backpack_Kitbag_Medic_White): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (White)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_white_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Black): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Black)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_black_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Coyote): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Coyote)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_coyote_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_MTP): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (MTP)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_mtp_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Green): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Green)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_green_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Sage): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Sage)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_sage_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Tan): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Tan)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_tan_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_RGR): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, Tyrone";
        displayName="[GHOST] Kitbag Medic (RGR)";
        picture = QPATHTOF(data\ui\backpack_kitbag_medic_rgr_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_rgr_co.paa)
        };
    };
};
