class CfgPatches
{
	class NOR_Vehicles
	{
		units[] = {"NOR_MRAP1_GMG_Desert","NOR_MRAP1_HMG_Desert","NOR_MRAP1_Desert","NOR_MRAP1_GMG_Wood","NOR_MRAP1_HMG_Wood","NOR_MRAP1_Wood"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NOR_Units"};
	};
};
class CfgFactionClasses
{
	class Nor_Units;
};
class CfgVehicles
{
	class MRAP_01_base_F;
	class MRAP_01_hmg_base_F;
	class MRAP_01_gmg_base_F;
	class NOR_MRAP1_Wood: MRAP_01_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "B_MRAP_01_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_Wood_Name";
		crew = "NOR_T_S1_Wood";
		typicalCargo[] = {"NOR_T_S1_Wood"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_wood_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_wood_co.paa"};
	};
	class NOR_MRAP1_HMG_Wood: MRAP_01_hmg_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "MRAP_01_hmg_base_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_HMG_Wood_Name";
		crew = "NOR_T_S1_Wood";
		typicalCargo[] = {"NOR_T_S1_Wood"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_wood_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_wood_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_turret_wood_co.paa"};
	};
	class NOR_MRAP1_GMG_Wood: MRAP_01_gmg_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "MRAP_01_gmg_base_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_GMG_Wood_Name";
		crew = "NOR_T_S1_Wood";
		typicalCargo[] = {"NOR_T_S1_Wood"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_wood_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_wood_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_turret_wood_co.paa"};
	};
	class NOR_MRAP1_Desert: MRAP_01_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "B_MRAP_01_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_Desert_Name";
		crew = "NOR_T_S1_Desert";
		typicalCargo[] = {"NOR_T_S1_Desert"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_desert_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_desert_co.paa"};
	};
	class NOR_MRAP1_HMG_Desert: MRAP_01_hmg_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "MRAP_01_hmg_base_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_HMG_Desert_Name";
		crew = "NOR_T_S1_Desert";
		typicalCargo[] = {"NOR_T_S1_Desert"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_desert_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_desert_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_turret_desert_co.paa"};
	};
	class NOR_MRAP1_GMG_Desert: MRAP_01_gmg_base_F
	{
		author = "$STR_NOR_Author_Name";
		_generalMacro = "MRAP_01_gmg_base_F";
		scope = 2;
		displayName = "$STR_NOR_MRAP1_GMG_Desert_Name";
		crew = "NOR_T_S1_Desert";
		typicalCargo[] = {"NOR_T_S1_Desert"};
		side = 1;
		faction = "Nor_Units";
		hiddenSelectionsTextures[] = {"\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_body_desert_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_extras_desert_co.paa","\NOR_Vehicles\data\mrap_hunter\nor_mrap_hunter_turret_desert_co.paa"};
	};
};