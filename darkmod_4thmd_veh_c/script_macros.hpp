#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#ifdef PREP
    #undef PREP
#endif

#define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(fncName))] call CBA_fnc_compileFunction