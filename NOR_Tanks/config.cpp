class DefaultEventHandlers;
class CfgPatches
{
	class NOR_Tanks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NOR_Core","NOR_Units"};
	};
};
class CfgFactionClasses
{
	class Nor_Units;
};
class CfgVehicles
{
	class I_APC_tracked_03_cannon_F;
	class NOR_APC_Tracked_Wood: I_APC_tracked_03_cannon_F
	{
		_generalMacro = "I_APC_tracked_03_cannon_F";
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Tracked APC (Wood)";
		crew = "NOR_Crew_Wood";
		vehicleClass = "Armored";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep\Norwegian_APC_Tracked_Turret_Wood.paa","\NOR_Tanks\data\apc_indep\Norwegian_APC_Tracked_Body_Wood.paa"};
	};
	class NOR_APC_Tracked_Desert: I_APC_tracked_03_cannon_F
	{
		_generalMacro = "I_APC_tracked_03_cannon_F";
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Tracked APC (Desert)";
		crew = "NOR_Crew_Desert";
		vehicleClass = "Armored";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep\Norwegian_APC_Tracked_Turret_Desert.paa","\NOR_Tanks\data\apc_indep\Norwegian_APC_Tracked_Body_Desert.paa"};
	};
	class I_MBT_03_BASE_F;
	class NOR_MBT_Wood: I_MBT_03_BASE_F
	{
		scope = 2;
		_generalMacro = "I_MBT_03_cannon_F";
		displayName = "MBT (Wood)";
		side = 1;
		author = "Vasilyevich";
		crew = "NOR_Crew_Wood";
		faction = "Nor_Units";
		vehicleClass = "Armored";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","HideHull","HideTurret","pasoffsetl","pasoffsetp"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Body_Wood.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Turret_Wood.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_HMG_Wood.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Turret_Wood.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Turret_Wood.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Tracks.paa","\NOR_Tanks\data\mbt_indep\Norwegian_MBT_Tracks.paa"};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
	};
	class NOR_MBT_Desert: I_MBT_03_BASE_F
	{
		scope = 2;
		_generalMacro = "I_MBT_03_cannon_F";
		displayName = "MBT (Desert)";
		side = 1;
		author = "Vasilyevich";
		crew = "NOR_Crew_Desert";
		faction = "Nor_Units";
		vehicleClass = "Armored";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","HideHull","HideTurret","pasoffsetl","pasoffsetp"};
		hiddenSelectionsTextures[] = {"\Norwegian_units\data\vehicles\Norwegian_MBT_Body_Desert.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_Turret_Desert.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_HMG_Desert.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_Turret_Desert.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_Turret_Desert.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_Tracks.paa","\Norwegian_units\data\vehicles\Norwegian_MBT_Tracks.paa"};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
	};
};