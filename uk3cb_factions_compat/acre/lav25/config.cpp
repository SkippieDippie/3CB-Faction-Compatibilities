class CfgPatches {
    class UK3CB_Factions_ACRE_Compat_LAV {
        addonRootClass = "SK_3CBFactions_Compat_ACRE";

        requiredAddons[] = { "SK_3CBFactions_Compat_ACRE" };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class UK3CB_LAV25_Base;

    class UK3CB_LAV25 : UK3CB_LAV25_Base {
        class AcreRacks {
            class Rack_Upper {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "commander"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_Lower : Rack_Upper {
                displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "crew"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {
                    {"cargo", "all"}, 
                    {"ffv", "all"}};
                numLimitedPositions = 2;

                connectedByDefault = 1;
            };

            class Intercom_Pax {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {
                    "inside"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {};
                numLimitedPositions = 0;

                connectedByDefault = 0;
            };
        };
    };

    class UK3CB_LAV25_HQ : UK3CB_LAV25_Base {        
        class AcreRacks {
            class Rack_RTO_Left_Upper {
                displayName = "Dash Left Upper";
                shortName = "D.LU.";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"ffv", 1, [3]}, 
                    {"cargo", "all"}
                };
                disabledPositions[] = {
                    {"turnedOut", "all"}
                };

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_RTO_Left_Lower : Rack_RTO_Left_Upper {
                displayName = "Dash Left Lower";
                shortName = "D.LL.";
            };
            class Rack_RTO_Right_Upper : Rack_RTO_Left_Upper {
                displayName = "Dash Right Upper";
                shortName = "D.RU.";
            };
            class Rack_RTO_Right_Lower : Rack_RTO_Left_Upper {
                displayName = "Dash Right Lower";
                shortName = "D.RL.";
            };

            class Rack_Commander : Rack_RTO_Left_Upper {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                allowedPositions[] = {
                    "commander", 
                    {"ffv", 0, [2]}
                };
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "inside"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander", 
                    {"ffv", 0, [2]}
                };

                limitedPositions[] = {
                    {"cargo", "all"}, 
                    {"ffv", "all"}
                };
                numLimitedPositions = 2;

                connectedByDefault = 1;
            };
        };
    };
};
