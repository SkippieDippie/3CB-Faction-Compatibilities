class CfgPatches {
	class UK3CB_Factions_ACRE_Compat_M1117 {
		addonRootClass = "UK3CB_Factions_Compat";

		requiredAddons[] = { "UK3CB_Factions_Vehicles_M1117" };
		requiredVersion = 1.0;

		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	class rhsusf_M1117_base;

	class UK3CB_M1117_base : rhsusf_M1117_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_Upper {
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
			class Rack_Lower : Rack_Upper {
				displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";
			};
		};

		delete AcreIntercoms;
		class AcreIntercoms {
			class Intercom_Crew {
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