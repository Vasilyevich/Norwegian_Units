class DefaultEventHandlers;
class CfgPatches
{
	class NOR_Units
	{
		units[] = {"NOR_Sniper_Wood","NOR_Sniper_Desert","NOR_Crew_Desert","NOR_Crew_WOOD","NOR_MM_Desert","NOR_MM_Wood","NOR_MJK_MM_Navy","NOR_FSK_MM_Multi","NOR_SL_Wood","NOR_FSK_MM_Black","NOR_Spotter_Desert","NOR_Spotter_Wood","NOR_FSK_SL_Multi","NOR_SL_Desert","NOR_MJK_SL_Navy","NOR_FSK_SL_Black","NOR_T_AT_Desert","NOR_T_AT_Wood","NOR_FSK_AT_Black","NOR_FSK_AT_Multi","NOR_T_AR_Wood","NOR_MJK_AT_Navy","NOR_FSK_AR_Multi","NOR_T_AR_Desert","NOR_MJK_AR_Navy","NOR_FSK_AR_Black","NOR_FTL_Desert","NOR_FTL_Wood","NOR_FSK_FTL_Black","NOR_FSK_FTL_Multi","NOR_T_S1_Wood","NOR_MJK_FTL_Navy","NOR_FSK_S1_Black","NOR_T_S1_Desert","NOR_MJK_S1_Navy","NOR_FSK_S1_Multi","NOR_T_MEDIC_Desert","NOR_T_MEDIC_Wood","NOR_T_CO_Wood","NOR_FSK_MEDIC_Multi","NOR_FSK_MEDIC_Black","NOR_MJK_MEDIC_Navy","NOR_T_NCO_Wood","NOR_T_CO_Desert","NOR_FSK_Breacher_Multi","NOR_T_NCO_Desert","NOR_MJK_Breacher_Navy","NOR_FSK_Breacher_Black","NOR_FSK_ExploSpec_Black","NOR_FSK_ExploSpec_Multi","NOR_MJK_ExploSpec_Navy"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NOR_Core","NOR_Backpacks","NOR_Equip","NOR_Law","NOR_Uniforms"};
	};
};
class CfgFactionClasses
{
	class Nor_Units;
};
class CfgVehicleClasses
{
	class Wood_Fireteam
	{
		displayName = "Men (Woodland)";
	};
	class Desert_Fireteam
	{
		displayName = "Men (Desert)";
	};
	class FSK_Multi
	{
		displayName = "Men (FSK Multi)";
	};
	class FSK_Black
	{
		displayName = "Men (FSK Black)";
	};
	class MJK_Navy
	{
		displayName = "Men (MJK Blue)";
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class I_officer_F;
	class B_medic_F;
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	class B_soldier_AT_F;
	class B_soldier_M_F;
	class B_sniper_F;
	class B_crew_F;
	class B_spotter_F;
	class B_soldier_exp_F;
	class NOR_Sniper_Wood: B_sniper_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		displayName = "Sniper (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		vehicleClass = "Wood_Fireteam";
		uniformClass = "NOR_Ghillie_Wood";
		genericNames = "NOR_Names_Male";
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		linkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"NOR_Barrett_M82_LRPS","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_Barrett_M82_LRPS","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		Magazines[] = {"5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_Sniper_Desert: NOR_Sniper_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		vehicleClass = "Desert_Fireteam";
		uniformClass = "NOR_Ghillie_Desert";
		author = "$STR_NOR_Author_Name";
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_Crew_WOOD: B_crew_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		displayName = "Crewman (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		vehicleClass = "Wood_Fireteam";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Crew_Wood";
		linkedItems[] = {"V_TacVest_khk","NOR_Helmet_Crew","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","NOR_Helmet_Crew","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"hgun_PDW2000_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"hgun_PDW2000_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_Crew_Desert: NOR_Crew_WOOD
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Crewman (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Crew_Desert";
		linkedItems[] = {"V_TacVest_khk","NOR_Helmet_Crew","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","NOR_Helmet_Crew","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_MM_Wood: B_soldier_M_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Marksman (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Booniehat_Wood","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Booniehat_Wood","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK417_DMS_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"NOR_HK417_DMS_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		Magazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_MM_Desert: NOR_MM_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Marksman (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Booniehat_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Booniehat_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_MM_Multi: NOR_MM_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Marksman (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK417_TVS_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK417_TVS_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_MM_Black: NOR_FSK_MM_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Marksman (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Black";
		linkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_MM_Navy: NOR_FSK_MM_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Marksman (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_SL_Wood: B_Soldier_SL_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Squad Leader (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_UGL_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_UGL_RCO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416_UGL_RCO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_Spotter_Wood: B_spotter_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		displayName = "Spotter (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		vehicleClass = "Wood_Fireteam";
		uniformClass = "NOR_Ghillie_Wood";
		genericNames = "NOR_Names_Male";
		author = "$STR_NOR_Author_Name";
		linkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S_Wood","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S_Wood","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_Spotter_Desert: NOR_Spotter_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		displayName = "Spotter (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		vehicleClass = "Desert_Fireteam";
		uniformClass = "NOR_Ghillie_Desert";
		genericNames = "NOR_Names_Male";
		author = "$STR_NOR_Author_Name";
		linkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S_Desert","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S_Desert","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_SL_Desert: NOR_SL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Squad Leader (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		backpack = "NOR_Backpack_UGL_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_SL_Multi: NOR_SL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Squad Leader (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Multi";
		backpack = "NOR_Backpack_FSK_UGL_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Grey","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Grey","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_UGL_RCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_UGL_RCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_SL_Black: NOR_FSK_SL_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Squad Leader (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Black";
		backpack = "NOR_Backpack_FSK_UGL_Black";
		linkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_SL_Navy: NOR_SL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Squad Leader (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Navy";
		backpack = "NOR_Backpack_MJK_UGL_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_UGL_RCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_UGL_RCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_T_AT_Wood: B_soldier_AT_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Soldier AT (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_AT_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","mas_launch_maaws_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_AT_Desert: NOR_T_AT_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Soldier AT (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		backpack = "NOR_Backpack_AT_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_AT_Multi: NOR_T_AT_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Soldier AT (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Multi";
		backpack = "NOR_Backpack_FSK_AT_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","mas_launch_maaws_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","mas_launch_maaws_F","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_AT_Black: NOR_FSK_AT_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Soldier AT (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Black";
		backpack = "NOR_Backpack_FSK_AT_Black";
		linkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_AT_Navy: NOR_FSK_AT_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Soldier AT (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_MJK_Navy";
		backpack = "NOR_Backpack_MJK_AT_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","mas_launch_maaws_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","mas_launch_maaws_F","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_T_AR_Wood: B_soldier_AR_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Autorifleman (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_AR_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_M249_ACO_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"NOR_M249_ACO_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		Magazines[] = {"200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_AR_Desert: NOR_T_AR_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Autorifleman (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		backpack = "NOR_Backpack_AR_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_AR_Multi: NOR_T_AR_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Autorifleman (Multi)";
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Multi";
		backpack = "NOR_Backpack_FSK_AR_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Grey","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Light_Grey","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_AR_Black: NOR_FSK_AR_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Autorifleman (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Black";
		backpack = "NOR_Backpack_FSK_AR_Black";
		linkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_AR_Navy: NOR_T_AR_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Autorifleman (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_MJK_Navy";
		backpack = "NOR_Backpack_MJK_AR_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_M249_ACO_IR","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_FTL_Wood: B_Soldier_TL_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Team Leader (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_Soldier_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_ACO_IR","NOR_M72_LAW","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416_ACO_IR","NOR_M72_LAW","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FTL_Desert: NOR_FTL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Team Leader (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		backpack = "NOR_Backpack_Soldier_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_FTL_Multi: NOR_FTL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Team Leader (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Multi";
		backpack = "NOR_Backpack_FSK_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_FTL_Black: NOR_FSK_FTL_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Team Leader (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Black";
		backpack = "NOR_Backpack_FSK_Black";
		linkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_FTL_Navy: NOR_FTL_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Team Leader (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Navy";
		backpack = "NOR_Backpack_MJK_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_T_S1_Wood: I_soldier_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Soldier (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_Soldier_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","NOR_M72_LAW","Throw","Put","Binocular"};
		respawnWeapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","NOR_M72_LAW","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_S1_Desert: NOR_T_S1_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Soldier (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Desert";
		backpack = "NOR_Backpack_Soldier_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_S1_Multi: NOR_T_S1_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Soldier (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Multi";
		backpack = "NOR_Backpack_FSK_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_S1_Black: NOR_FSK_S1_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Soldier (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Black";
		backpack = "NOR_Backpack_FSK_Black";
		linkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_S1_Navy: NOR_FSK_S1_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Soldier (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Navy";
		backpack = "NOR_Backpack_MJK_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_T_MEDIC_Wood: B_medic_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Medic (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Medic_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_Medic_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Helmet_Wood","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","Throw","Put","Binocular"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_MEDIC_Desert: NOR_T_MEDIC_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Medic (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Medic_Desert";
		backpack = "NOR_Backpack_Medic_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Helmet_Desert","NOR_NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_MEDIC_Multi: NOR_T_MEDIC_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Medic (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Medic_Multi";
		backpack = "NOR_Backpack_FSK_Medic_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_MEDIC_Black: NOR_FSK_MEDIC_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Medic (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Medic_Black";
		backpack = "NOR_Backpack_FSK_Medic_Black";
		linkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_MEDIC_Navy: NOR_T_MEDIC_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Medic (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Medic_Navy";
		backpack = "NOR_Backpack_MJK_Medic_Navy";
		linkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_T_CO_Wood: I_officer_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Troop CO (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Officer_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_Soldier_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416_ACO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_CO_Desert: NOR_T_CO_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Troop CO (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Officer_Desert";
		backpack = "NOR_Backpack_Soldier_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_NCO_Wood: I_officer_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "Wood_Fireteam";
		displayName = "Troop NCO (Wood)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		nakedUniform = "NOR_BasicBody";
		uniformClass = "NOR_Uniform_Officer_Wood";
		genericNames = "NOR_Names_Male";
		backpack = "NOR_Backpack_UGL_Wood";
		linkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Wood","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416_UGL_RCO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416_UGL_RCO_IR","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_T_NCO_Desert: NOR_T_NCO_Wood
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Desert_Fireteam";
		displayName = "Troop NCO (Desert)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Officer_Desert";
		backpack = "NOR_Backpack_UGL_Desert";
		linkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Desert","NOR_Beret_Officer","NOR_NVGoggles","ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_script.sqf""";
		};
	};
	class NOR_FSK_Breacher_Multi: NOR_FSK_S1_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Multi";
		displayName = "FSK Breacher (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Multi";
		backpack = "NOR_Backpack_FSK_Breacher_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Multi","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"arifle_mas_m1014","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_mas_m1014","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		Magazines[] = {"7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","7Rnd_mas_12Gauge_Slug","7Rnd_mas_12Gauge_Pellets","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_Breacher_Black: NOR_FSK_Breacher_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Breacher (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_FSK_Black";
		backpack = "NOR_Backpack_FSK_Breacher_Black";
		linkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Black","NOR_Helmet_ECH_Light_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_Breacher_Navy: NOR_FSK_Breacher_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Breacher (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_MJK_Navy";
		backpack = "NOR_Backpack_MJK_Breacher_navy";
		linkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_2_Navy","NOR_Helmet_ECH_Light_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
	class NOR_FSK_ExploSpec_Multi: B_soldier_exp_F
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Nor_Units";
		vehicleClass = "FSK_Multi";
		displayName = "FSK Explosive Specialist (Multi)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Multi";
		backpack = "NOR_Backpack_FSK_Explo_Multi";
		linkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Multi","NOR_Helmet_ECH_Multi","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_multi.sqf""";
		};
	};
	class NOR_FSK_ExploSpec_Black: NOR_FSK_ExploSpec_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "FSK_Black";
		displayName = "FSK Explosive Specialist (Black)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_FSK_Black";
		backpack = "NOR_Backpack_FSK_Explo_Black";
		linkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Black","NOR_Helmet_ECH_Black","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_HK416c_MRCO_IR_S","NOR_Glock_17_S","NOR_M72_LAW","Throw","Put","Rangefinder"};
		Magazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","Chemlight_green","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag","15Rnd_mas_9x21_Mag"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_fsk_black.sqf""";
		};
	};
	class NOR_MJK_ExploSpec_Navy: NOR_FSK_ExploSpec_Multi
	{
		_generalMacro = "B_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MJK_Navy";
		displayName = "MJK Explosive Specialist (Blue)";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		author = "$STR_NOR_Author_Name";
		uniformClass = "NOR_Uniform_Short_MJK_Navy";
		backpack = "NOR_Backpack_MJK_Explo_navy";
		linkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NOR_Carrier_Standard_1_Navy","NOR_Helmet_ECH_Desert","NOR_NVGoggles","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		Weapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"NOR_C8_MRCO_IR_S","NOR_Glock_17_S","Throw","Put","Rangefinder"};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\NOR_Randomisation\data\scripts\master_mjk_navy.sqf""";
		};
	};
};