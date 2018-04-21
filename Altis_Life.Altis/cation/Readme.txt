The crafting system can be called in-game in two ways:

Via addAction in the init of an object in the mission.sqm. Init code:
1
this allowDamage false; this enableSimulation false; this addAction["Craften",{["Variablenname"] spawn cat_crafting_fnc_craft}];
Via button, for example in the Z menu. onButtonClick Code:
1
onButtonClick = "closeDialog 0; [""Variablenname""] spawn cat_crafting_fnc_craft;";
The variable name must be defined here in the <misson> /cation/crafting/config.cpp in craftingStations [] .