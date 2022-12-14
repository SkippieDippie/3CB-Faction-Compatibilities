class CfgPatches {
    class SK_3CBFactions_Compat_ACRE_M1117 {
        addonRootClass = "SK_3CBFactions_Compat_ACRE";

        requiredAddons[] = { "SK_3CBFactions_Compat_ACRE" };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class rhsusf_M1117_base;

    class UK3CB_M1117_base : rhsusf_M1117_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {"commander"};
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_2 {
                displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {"commander"};
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                masterPositions[] = {"commander"};

                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };
};