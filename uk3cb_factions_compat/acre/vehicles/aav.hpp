class APC_Tracked_01_base_F;

class UK3CB_AAV : APC_Tracked_01_base_F {
    
    class AcreRacks {
        class Rack_1 {
            displayName = "$STR_ACRE_sys_rack_dashUpper";
            shortName = "$STR_ACRE_sys_rack_dashUpperShort";

            componentName = "ACRE_VRC103";
            mountedRadio = "ACRE_PRC117F";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "commander", 
                {"cargo", 7, 16}
            };
            disabledPositions[] = {};

            intercom[] = {"Intercom_1"};
        };
        class Rack_2 {
            displayName = "$STR_ACRE_sys_rack_dashLower";
            shortName = "$STR_ACRE_sys_rack_dashLowerShort";

            componentName = "ACRE_VRC103";
            mountedRadio = "ACRE_PRC117F";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "commander", 
                {"cargo", 7, 16}
            };
            disabledPositions[] = {};

            intercom[] = {"Intercom_1"};
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
                {"ffv", "all"}
            };
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
