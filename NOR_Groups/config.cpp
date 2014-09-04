class CfgPatches
{
	class NOR_Groups
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
class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		class Nor_Units
		{
			name = "Norwegian Army";
			class Infantry
			{
				name = "Infantry";
				class NOR_Wood
				{
					name = "Fireteam (Wood)";
					side = 1;
					rarityGroup = 0.3;
					faction = "Nor_Units";
					class Unit0
					{
						side = 1;
						vehicle = "NOR_SL_Wood";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NOR_FTL_Wood";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "NOR_T_MEDIC_Wood";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "NOR_T_S1_Wood";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "NOR_T_AT_Wood";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "NOR_T_AR_Wood";
						rank = "PRIVATE";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "NOR_MM_Wood";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
				};
				class NOR_Wood_CO
				{
					name = "Command (Wood)";
					side = 1;
					rarityGroup = 0.0;
					faction = "Nor_Units";
					class Unit6
					{
						side = 1;
						vehicle = "NOR_T_CO_Wood";
						rank = "MAJOR";
						position[] = {0,5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_T_NCO_Wood";
						rank = "MAJOR";
						position[] = {3,0,0};
					};
				};
				class NOR_Desert
				{
					name = "Fireteam (Desert)";
					side = 1;
					rarityGroup = 0.3;
					faction = "Nor_Units";
					class Unit0
					{
						side = 1;
						vehicle = "NOR_SL_Desert";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NOR_FTL_Desert";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "NOR_T_MEDIC_Desert";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "NOR_T_S1_Desert";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "NOR_T_AT_Desert";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "NOR_T_AR_Desert";
						rank = "PRIVATE";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "NOR_MM_Desert";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
				};
				class NOR_Desert_CO
				{
					name = "Command (Desert)";
					side = 1;
					rarityGroup = 0.0;
					faction = "Nor_Units";
					class Unit6
					{
						side = 1;
						vehicle = "NOR_T_CO_Desert";
						rank = "MAJOR";
						position[] = {0,5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_T_NCO_Desert";
						rank = "MAJOR";
						position[] = {3,0,0};
					};
				};
				class NOR_Sniper_Team_Desert
				{
					name = "Sniper Team (Desert)";
					side = 1;
					rarityGroup = 0.0;
					faction = "Nor_Units";
					class Unit6
					{
						side = 1;
						vehicle = "NOR_Sniper_Desert";
						rank = "MAJOR";
						position[] = {0,5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_Spotter_Desert";
						rank = "MAJOR";
						position[] = {3,0,0};
					};
				};
				class NOR_Sniper_Team_Wood
				{
					name = "Sniper Team (Wood)";
					side = 1;
					rarityGroup = 0.0;
					faction = "Nor_Units";
					class Unit6
					{
						side = 1;
						vehicle = "NOR_Sniper_Wood";
						rank = "MAJOR";
						position[] = {0,5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_Spotter_Wood";
						rank = "MAJOR";
						position[] = {3,0,0};
					};
				};
				class NOR_FSK_Multi
				{
					name = "FSK Team (Multi)";
					side = 1;
					rarityGroup = 0.1;
					faction = "Nor_Units";
					class Unit0
					{
						side = 1;
						vehicle = "NOR_FSK_SL_Multi";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NOR_FSK_FTL_Multi";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "NOR_FSK_MEDIC_Multi";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "NOR_FSK_S1_Multi";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "NOR_FSK_AR_Multi";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "NOR_FSK_AT_Multi";
						rank = "PRIVATE";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "NOR_FSK_MM_Multi";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_FSK_Breacher_Multi";
						rank = "PRIVATE";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "NOR_FSK_ExploSpec_Multi";
						rank = "PRIVATE";
						position[] = {18,0,0};
					};
				};
				class NOR_FSK_Black
				{
					name = "FSK Team (Black)";
					side = 1;
					rarityGroup = 0.1;
					faction = "Nor_Units";
					class Unit0
					{
						side = 1;
						vehicle = "NOR_FSK_SL_Black";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NOR_FSK_FTL_Black";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "NOR_FSK_MEDIC_Black";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "NOR_FSK_S1_Black";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "NOR_FSK_AR_Black";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "NOR_FSK_AT_Black";
						rank = "PRIVATE";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "NOR_FSK_MM_Black";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_FSK_Breacher_Black";
						rank = "PRIVATE";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "NOR_FSK_ExploSpec_Black";
						rank = "PRIVATE";
						position[] = {18,0,0};
					};
				};
				class NOR_MJK_Navy
				{
					name = "MJK Team (Blue)";
					side = 1;
					rarityGroup = 0.1;
					faction = "Nor_Units";
					class Unit0
					{
						side = 1;
						vehicle = "NOR_MJK_SL_Navy";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NOR_MJK_FTL_Navy";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "NOR_MJK_MEDIC_Navy";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "NOR_MJK_S1_Navy";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "NOR_MJK_AR_Navy";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "NOR_MJK_AT_Navy";
						rank = "PRIVATE";
						position[] = {12,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "NOR_MJK_MM_Navy";
						rank = "PRIVATE";
						position[] = {14,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "NOR_MJK_Breacher_Navy";
						rank = "PRIVATE";
						position[] = {16,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "NOR_MJK_ExploSpec_Navy";
						rank = "PRIVATE";
						position[] = {18,0,0};
					};
				};
			};
		};
	};
};