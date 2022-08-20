class CfgPatches {
	class uk3cb_factions_acre_compat_landrover {
		addonRootClass = "uk3cb_factions_compat";

		requiredAddons[] = { "UK3CB_Factions_Vehicles_LandRover" };
		requiredVersion = 1.0;

		units[] = {};
		weapons[] = {};
	};
};


class CfgVehicles {
	class UK3CB_LandRover_Base;

	class UK3CB_LandRover : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", {"turret", "all"}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
	};


	class UK3CB_LandRover_M2 : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", {"ffv", 0, [0]}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"Intercom_1"};
			};
		};

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
			};
		};
	};


	class UK3CB_LandRover_SF_M2 : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", "commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"Intercom_1"};
			};
		};

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
			};
		};
	};


	class UK3CB_LandRover_AGS30 : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", {"ffv", 0, [0]}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"Intercom_1"};
			};
		};

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
			};
		};
	};


	class UK3CB_LandRover_SF_AGS30 : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", "commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"Intercom_1"};
			};
		};

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
			};
		};
	};


	class UK3CB_LandRover_SPG9 : UK3CB_LandRover_Base {
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
				shortName = "$STR_ACRE_sys_rack_dashShort";
				componentName = "ACRE_VRC103";

				allowedPositions[] = {"driver", {"ffv", 0, [0]}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"Intercom_1"};
			};
		};

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
			};
		};
	};


	class UK3CB_B_G_LandRover_Closed : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_I_G_LandRover_Closed : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_O_G_LandRover_Closed : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};


	class UK3CB_B_G_LandRover_Open : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_I_G_LandRover_Open : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_O_G_LandRover_Open : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};


	class UK3CB_B_G_LandRover_M2 : UK3CB_LandRover_M2 {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_I_G_LandRover_M2 : UK3CB_LandRover_M2 {
		class AcreRacks {
			delete Rack_1;
		};
	};
	class UK3CB_O_G_LandRover_M2 : UK3CB_LandRover_M2 {
		class AcreRacks {
			delete Rack_1;
		};
	};


	class UK3CB_C_LandRover_Closed : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};


	class UK3CB_C_LandRover_Open : UK3CB_LandRover {
		class AcreRacks {
			delete Rack_1;
		};
	};
};