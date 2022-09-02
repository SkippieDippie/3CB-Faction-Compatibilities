class CfgPatches {
    class UK3CB_Factions_ACRE_Compat_Vodnik {
        addonRootClass = "SK_3CBFactions_Compat_ACRE";

        requiredAddons[] = { "SK_3CBFactions_Compat_ACRE" };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class UK3CB_GAZ_Vodnik_Base;

    class UK3CB_GAZ_Vodnik : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_MedEvac : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_KVPT : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_HMG : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "gunner"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "gunner"
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

        class UK3CB_GAZ_Vodnik_GMG : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "gunner"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "gunner"
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_PKT : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "commander", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}}
                    ;
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_Cannon : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "commander", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };
};
