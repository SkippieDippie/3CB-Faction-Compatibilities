#include "\z\cvo_rhsafrf_compats\acre\macros.hpp"

#if ACRE_LOADED
class CfgPatches {
    class CVO_3CBFactions_Compats_ACRE {
        addonRootClass = "CVO_3CBFactions_Compats";
        

        requiredAddons[] = {
            "UK3CB_Factions_Vehicles_AAV",
            "UK3CB_Factions_Vehicles_HMMWV",
            "UK3CB_Factions_Vehicles_LandRover",
            "UK3CB_Factions_Vehicles_LAV25",
            "UK3CB_Factions_Vehicles_M1117",
            "UK3CB_Factions_Vehicles_Vodnik"
        };
        requiredVersion = 2.02;

        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "vehicles\hmmwv.hpp"
    #include "vehicles\landrover.hpp"
    #include "vehicles\lav25.hpp"
    #include "vehicles\m1117.hpp"
    #include "vehicles\vodnik.hpp"
};
#endif
