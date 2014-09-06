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
	class B_MBT_01_arty_F;
	class B_APC_Tracked_01_AA_F;
	class NOR_Arty_Tracked_Wood: B_MBT_01_arty_F
	{
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Sholef (Wood)";
		crew = "NOR_Crew_Standard";
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\aa_and_arty_wood\nor_mbt_nato_body_wood_co.paa","\NOR_Tanks\data\aa_and_arty_wood\nor_arty_standard_turret_wood_co.paa","\NOR_Tanks\data\aa_and_arty_wood\nor_arty_standard_extras_wood_co.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class NOR_AA_Tracked_Wood: B_APC_Tracked_01_AA_F
	{
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Bardelas (Wood)";
		crew = "NOR_Crew_Standard";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\aa_and_arty_wood\nor_apc_nato_body_wood_co.paa","\NOR_Tanks\data\aa_and_arty_wood\nor_mbt_nato_body_wood_co.paa","\NOR_Tanks\data\aa_and_arty_wood\nor_aa_standard_turret_wood_co.paa"};
	};
	class NOR_Arty_Tracked_Desert: B_MBT_01_arty_F
	{
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Sholef (Desert)";
		crew = "NOR_Crew_Standard";
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\aa_and_arty_desert\nor_mbt_nato_body_desert_co.paa","\NOR_Tanks\data\aa_and_arty_desert\nor_arty_standard_turret_desert_co.paa","\NOR_Tanks\data\aa_and_arty_desert\nor_arty_standard_extras_desert_co.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class NOR_AA_Tracked_Desert: B_APC_Tracked_01_AA_F
	{
		scope = 2;
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		displayName = "Bardelas (Desert)";
		crew = "NOR_Crew_Standard";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Tanks\data\aa_and_arty_desert\nor_apc_nato_body_desert_co.paa","\NOR_Tanks\data\aa_and_arty_desert\nor_mbt_nato_body_desert_co.paa","\NOR_Tanks\data\aa_and_arty_desert\nor_aa_standard_turret_desert_co.paa"};
	};
	class NOR_APC_Wheeled_Wood: I_APC_Wheeled_03_cannon_F
	{
		side = 1;
		faction = "Nor_Units";
		author = "Vasilyevich";
		_generalMacro = "I_APC_Wheeled_03_cannon_F";
		scope = 2;
		crew = "NOR_Crew_Standard";
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
		crew = "NOR_Crew_Standard";
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
		crew = "NOR_Crew_Standard";
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
		crew = "NOR_Crew_Standard";
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
		crew = "NOR_Crew_Standard";
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
		crew = "NOR_Crew_Standard";
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