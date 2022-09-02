#define ACRE_DELETE delete AcreRacks;\
                    delete AcreIntercoms;

class CfgPatches {
    class SK_3CBFactions_Compat_ACRE {
        addonRootClass = "SK_3CBFactions_Compat";
        

        requiredAddons[] = {
            "UK3CB_Factions_Vehicles_AAV",
            "UK3CB_Factions_Vehicles_HMMWV",
            "UK3CB_Factions_Vehicles_LandRover",
            "UK3CB_Factions_Vehicles_LAV25",
            "UK3CB_Factions_Vehicles_M1117",
            "UK3CB_Factions_Vehicles_Vodnik"
        };
        requiredVersion = 1.0;

        units[] = {};
        weapons[] = {};
    };
};


class CfgVehicles {
    class APC_Tracked_01_base_F;

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

    class UK3CB_LandRover_Base;

    class UK3CB_LAV25_Base;

    class rhsusf_M1117_base;

    class UK3CB_GAZ_Vodnik_Base;



    class UK3CB_AAV : APC_Tracked_01_base_F {
        ACRE_DELETE
    };


    class UK3CB_M1025_Unarmed_Base : rhsusf_m1025_w {
        ACRE_DELETE
    };

    class UK3CB_M1025_M2_Base : rhsusf_m1025_w_m2 {
        ACRE_DELETE
    };

    class UK3CB_M1025_MK19_Base : rhsusf_m1025_w_mk19 {
        ACRE_DELETE
    };

    class UK3CB_M1025_TOW_Base : rhsusf_m966_w {
        ACRE_DELETE
    };



    class UK3CB_M1151_Base : rhsusf_m1151_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_GPK_M2_Base : rhsusf_M1151_GPK_M2_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_GPK_M240_Base : rhsusf_M1151_GPK_M240_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_GPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_GPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_OGPK_M240_Base : rhsusf_M1151_GPK_M240_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_OGPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
        ACRE_DELETE
    };

    class UK3CB_M1151_OGPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
        ACRE_DELETE
    };



    class UK3CB_M998_2DR_Base : rhsusf_m998_w_2dr {
        ACRE_DELETE
    };

    class UK3CB_M998_4DR_Base : rhsusf_m998_w_4dr {
        ACRE_DELETE
    };



    class UK3CB_LandRover : UK3CB_LandRover_Base {
        ACRE_DELETE
    };

    class UK3CB_LandRover_M2 : UK3CB_LandRover_Base {
        ACRE_DELETE
    };

    class UK3CB_LandRover_SF_M2 : UK3CB_LandRover_Base {
        ACRE_DELETE
    };

    class UK3CB_LandRover_AGS30 : UK3CB_LandRover_Base {
        ACRE_DELETE
    };

    class UK3CB_LandRover_SF_AGS30 : UK3CB_LandRover_Base {
        ACRE_DELETE
    };

    class UK3CB_LandRover_SPG9 : UK3CB_LandRover_Base {
        ACRE_DELETE
    };



    class UK3CB_LAV25 : UK3CB_LAV25_Base {
        ACRE_DELETE
    };

    class UK3CB_LAV25_HQ : UK3CB_LAV25_Base {
        ACRE_DELETE
    };



    class UK3CB_M1117_base : rhsusf_M1117_base {
        ACRE_DELETE
    };



    class UK3CB_GAZ_Vodnik : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

    class UK3CB_GAZ_Vodnik_MedEvac : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

    class UK3CB_GAZ_Vodnik_KVPT : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

    class UK3CB_GAZ_Vodnik_HMG : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

        class UK3CB_GAZ_Vodnik_GMG : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

    class UK3CB_GAZ_Vodnik_PKT : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };

    class UK3CB_GAZ_Vodnik_Cannon : UK3CB_GAZ_Vodnik_Base {
        ACRE_DELETE
    };
};
