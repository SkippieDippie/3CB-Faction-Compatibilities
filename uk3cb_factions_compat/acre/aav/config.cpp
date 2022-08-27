class CfgPatches {
    class UK3CB_Factions_ACRE_Compat_AAV {
        addonRootClass = "UK3CB_Factions_Compat";

        requiredAddons[] = { "UK3CB_Factions_Vehicles_AAV" };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class APC_Tracked_01_base_F;

    class UK3CB_AAV : APC_Tracked_01_base_F {
        delete AcreRacks;
        delete AcreIntercoms;
        
        class AcreRacks {
            class Rack_Upper {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "commander", 
                    {"cargo", 7}
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
                    {"ffv", "all"}
                };
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

                connectedByDefault = 1;
            };
        };
    };
};