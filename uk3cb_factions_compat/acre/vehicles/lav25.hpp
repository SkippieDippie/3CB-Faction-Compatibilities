class UK3CB_LAV25_Base;

class UK3CB_LAV25 : UK3CB_LAV25_Base {
    class AcreRacks {
        class Rack_1 {
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

            intercom[] = {"Intercom_1"};
        };
        class Rack_Lower : Rack_1 {
            displayName = "$STR_ACRE_sys_rack_dashLower";
            shortName = "$STR_ACRE_sys_rack_dashLowerShort";
        };
    };

    class AcreIntercoms {
        class Intercom_1 {
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

        class Intercom_2 {
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
        class Rack_1 {
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

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 : Rack_1 {
            displayName = "Dash Left Lower";
            shortName = "D.LL.";
        };

        class Rack_3 : Rack_1 {
            displayName = "Dash Right Upper";
            shortName = "D.RU.";
        };
        
        class Rack_4 : Rack_1 {
            displayName = "Dash Right Lower";
            shortName = "D.RL.";
        };

        class Rack_5 : Rack_1 {
            displayName = "$STR_ACRE_sys_rack_dash";
            shortName = "$STR_ACRE_sys_rack_dashShort";

            allowedPositions[] = {
                "commander", 
                {"ffv", 0, [2]}
            };
        };
    };

    class AcreIntercoms {
        class Intercom_1{
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
