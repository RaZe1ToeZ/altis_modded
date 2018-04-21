#include "\life_server\script_macros.hpp"
/*
    File: fn_gangCash.sqf
    Author: Fuel RebornRoleplay.com

    Description:
    checks the gang areas, then rewards the gang if they own them
*/

 /*
	#########################
 	#   north east outpost	#
 	#########################
 */

//gets the flag locations
_area = [23522.3,21118.5,0.0270004] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;
 
 /*
	#########################
 	#	south pen outpost	#
 	#########################
 */

//gets the flag locations
_area2 = [14887.7,11087.1,0.0109997] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area2 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

 /*
	#########################
 	#	south west outpost	#
 	#########################
 */

//gets the flag locations
_area3 = [9230.41,8055.99,0] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area3 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

//time between scripts
Sleep 900;

[] spawn TON_fnc_gangCash;