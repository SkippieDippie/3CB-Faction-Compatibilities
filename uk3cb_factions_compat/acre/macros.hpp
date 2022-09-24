#include "\z\cvo_rhsafrf_compats\macros_common.hpp"

#define ACRE_LOADED __has_include("\idi\acre\addons\main\script_component.hpp")

#define CESTRING(CLNAME) QUOTE(DOUBLES($STR_CVO_ACRE,CLNAME))
#define CESTRING(PREFIX,CLNAME) QUOTE(TRIPLES($STR_CVO_ACRE,PREFIX,CLNAME))
#define CESTRING(PREFIX,CLNAME,POSTFIX) QUOTE(QUADRUPLES($STR_CVO_ACRE,PREFIX,CLNAME,POSTFIX))
