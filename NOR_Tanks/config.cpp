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
	class I_APC_Wheeled_03_cannon_F;
	class NOR_APC_Wheeled_Wood: I_APC_Wheeled_03_cannon_F
	{
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		_generalMacro = "I_APC_Wheeled_03_cannon_F";
		scope = 2;
		crew = "NOR_Crew_Wood";
		displayName = "APC Wheeled (Wood)";
		model = "\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_body_wood_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_extras_wood_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_turret_wood_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_spacers_co.paa"};
	};
	class NOR_APC_Wheeled_Desert: I_APC_Wheeled_03_cannon_F
	{
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		_generalMacro = "I_APC_Wheeled_03_cannon_F";
		scope = 2;
		crew = "NOR_Crew_Desert";
		displayName = "APC Wheeled (Desert)";
		model = "\A3\armor_f_gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_body_desert_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_extras_desert_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_turret_desert_co.paa","\NOR_Tanks\data\apc_indep_wheeled\nor_apc_indep_wheeled_spacers_co.paa"};
	};
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
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep_tracked\nor_apc_indep_tracked_turret_wood_co.paa","\NOR_Tanks\data\apc_indep_tracked\nor_apc_indep_tracked_body_wood_co.paa"};
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
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\apc_indep_tracked\nor_apc_indep_tracked_turret_desert_co.paa","\NOR_Tanks\data\apc_indep_tracked\nor_apc_indep_tracked_body_desert_co.paa"};
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
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\mbt_indep\nor_mbt_indep_body_wood_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_wood_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_extras_wood_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_wood_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_wood_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_tracks_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_tracks_co.paa"};
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
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\mbt_indep\nor_mbt_indep_body_desert_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_desert_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_extras_desert_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_desert_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_turret_desert_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_tracks_co.paa","\NOR_Tanks\data\mbt_indep\nor_mbt_indep_tracks_co.paa"};
		class EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
	};
};