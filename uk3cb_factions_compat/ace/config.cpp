class CfgPatches {
    class UK3CB_Factions_ACE_Compat {
        addonRootClass = "CVO_3CBFactions_Compats";

        requiredAddons[] = {
            "UK3CB_Factions_Vehicles_Hilux",
            "UK3CB_Factions_Vehicles_S1203",
            "UK3CB_Factions_Vehicles_UH1H"
        };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class UK3CB_Hilux_Base;
    class UK3CB_S1203_BASE;
    class UK3CB_UH1H_BASE;
    
    class UK3CB_Hilux_Ambulance : UK3CB_Hilux_Base {
        attendant = 1;
    };

    class UK3CB_S1203_Ambulance : UK3CB_S1203_BASE {
        attendant = 1;
    };

    class UK3CB_UH1H_MED_Base : UK3CB_UH1H_BASE {
        attendant = 1;
    };
};