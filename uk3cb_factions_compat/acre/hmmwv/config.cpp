class CfgPatches {
	class UK3CB_Factions_ACRE_Compat_HMMWV {
		addonRootClass = "UK3CB_Factions_Compat";

		requiredAddons[] = { "UK3CB_Factions_Vehicles_HMMWV" };
		requiredVersion = 1.0;

		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	class rhsusf_m966_w;
	class rhsusf_m998_w_2dr;
	class rhsusf_m998_w_4dr;

	class rhsusf_m1025_w;
	class rhsusf_m1025_w_m2;
	class rhsusf_m1025_w_mk19;

	class rhsusf_m1151_base;
	class rhsusf_M1151_GPK_M2_base;
	class rhsusf_M1151_GPK_M240_base;
	class rhsusf_M1151_GPK_MK19_base;
	class rhsusf_M1151_GPK_PKM_base;


	class UK3CB_M1025_Unarmed_Base : rhsusf_m1025_w {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1025_M2_Base : rhsusf_m1025_w_m2 {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1025_MK19_Base : rhsusf_m1025_w_mk19 {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1025_TOW_Base : rhsusf_m966_w {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};



	class UK3CB_M1151_Base : rhsusf_m1151_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [0]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_GPK_M2_Base : rhsusf_M1151_GPK_M2_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_GPK_M240_Base : rhsusf_M1151_GPK_M240_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_GPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_GPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_OGPK_M240_Base : rhsusf_M1151_GPK_M240_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_OGPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M1151_OGPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M998_2DR_Base : rhsusf_m998_w_2dr {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [2]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};

	class UK3CB_M998_4DR_Base : rhsusf_m998_w_4dr {
		delete AcreRacks;
		class AcreRacks {
			class Rack_1 {
				displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [2]}};
                disabledPositions[] = {};

                intercom[] = {};
			};
		};

		delete AcreIntercoms;
	};
};