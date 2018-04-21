/*
    File: config.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Master config for crafting system. 
*/
#include "dialog\craft.hpp"
class Cation_Crafting {

    version = 5; // version 3.x -> 3 | 4.0 - 4.3 -> 4 | version 4.4+ -> 5
    duration = 0.3; // duration in the crafting process for 1% in s (possible values between 0.1 and 10)
    
    // texts
     Craftingmenu = "Build Menu";
     CraftStats = "Things to Build";
     CraftingMaterials = "Things Needed";
     CraftButton = "Build!";
     Close = "Close";
     Craft = "Build";
     NoMaterial = "You do not have all building materials!";
     Process = "You made the following:";
     Process_Stay = "You must stay within 10m to craft.";
     NotificationBackpack = "You already have a backpack! Take the old one away.";
     NotificationVest = "You already have a Vest! Take the old one away.";
     NotificationUnifrom = "You already have something! Get naked and try again.";
     SelectItemFirst = "You must first select an item!";
     NothingNeeded = "Nothing is needed!";
     NoRoom = "You do not have enough space for the item.";
     Veh_Block = "A vehicle is currently blocking the spawn point";
     NoSpawnpoint = "No spawnpoint available";
     Color = "color";

    category[] = { // Categories
        {
            "weapon", //Variable
            "weapons", //Text
            {"hgun_P07_F", "", {"diamond_cut", 2, "copper_refined", 1}, "", "", 0}, // {Item 1, Condition (default: ""), {required Item1, needed Number of item1, required item2, required number of item2}, "skin name", "skin page" (skin only for vehicles), 0 (for vItem | 1 for all other items)},
            {"SMG_01_F", "(call life_adminlevel)> 0", {"copper_refined", 3, "iron_refined", 3, "diamond_cut", 1}, "", "", 0} // {Item 2, Condition ( default: ""), {required item1, required number of item1, required item2, required number of item2}, "skin name", "skin page" (Skin only for vehicles), 0 (for vItem | 1 for all other items)} No comma at the last!
         }, // Comma
        {
            "uniform",
            {"U_IG_Guerilla1_1","",{"copper_refined",1},"","",0}
        },
        {
            "backpack",
            {"B_Carryall_oli","",{"diamond_cut",1},"","",0}
        },
        {
            "vest",
            {"V_Press_F","",{"copper_refined",1},"","",0}
        },
        {
            "item",
            {"iron_refined","",{"copper_refined",2},"","",1},
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"","",1}
        } // No comma at last
    };

   craftingStations [] = {// available categories at various crafting stations
         {
             "craftingItems", // variable name
             "craftingItemsMarker", // name of the spawnmarker on the map (must be present in the mission.sqm)
             {"item", "weapon"} // Variable names of the available categories
         }, // comma
        {
            "craftingClothes", // variable name
            "craftingClothesMarker", // name of the spawnmarker on the map (must be present in the mission.sqm)
            {"uniform", "backpack", "vest"} // Variable names of the available categories
         } // No comma last
    };
};