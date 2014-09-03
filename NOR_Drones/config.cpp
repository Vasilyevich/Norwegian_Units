class CfgPatches
{
	class NOR_Drones
	{
		units[] = {"NOR_UGV_Wood","NOR_UGV_Wood_RCWS","NOR_UGV_Desert","NOR_UGV_Desert_RCWS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NOR_Core"};
	};
};
class CfgFactionClasses
{
	class Nor_Units;
};
class CfgVehicles
{
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;
	class NOR_UGV_Wood: B_UGV_01_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "Nor_Units";
		displayName = "$STR_NOR_UGV_Wood_Name";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Drones\data\ugv_wood\nor_ugv_ext_wood_co.paa","\NOR_Drones\data\ugv_wood\nor_ugv_int_wood_co.paa","\NOR_Drones\data\ugv_wood\nor_ugv_gun_wood_co.paa"};
		class TransportItems
		{
			class _xx_B_UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
	};
	class NOR_UGV_Wood_RCWS: B_UGV_01_rcws_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "Nor_Units";
		displayName = "$STR_NOR_UGV_Wood_RCWS_Name";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Drones\data\ugv_wood\nor_ugv_ext_wood_co.paa","\NOR_Drones\data\ugv_wood\nor_ugv_int_wood_co.paa","\NOR_Drones\data\ugv_wood\nor_ugv_gun_wood_co.paa"};
		class TransportItems
		{
			class _xx_B_UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
	};
	class NOR_UGV_Desert: B_UGV_01_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "Nor_Units";
		displayName = "$STR_NOR_UGV_Desert_Name";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Drones\data\ugv_desert\nor_ugv_ext_desert_co.paa","\NOR_Drones\data\ugv_desert\nor_ugv_int_desert_co.paa","\NOR_Drones\data\ugv_desert\nor_ugv_gun_desert_co.paa"};
		class TransportItems
		{
			class _xx_B_UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
	};
	class NOR_UGV_Desert_RCWS: B_UGV_01_rcws_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "Nor_Units";
		displayName = "$STR_NOR_UGV_Desert_RCWS_Name";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\NOR_Drones\data\ugv_desert\nor_ugv_ext_desert_co.paa","\NOR_Drones\data\ugv_desert\nor_ugv_int_desert_co.paa","\NOR_Drones\data\ugv_desert\nor_ugv_gun_desert_co.paa"};
		class TransportItems
		{
			class _xx_B_UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
	};
};