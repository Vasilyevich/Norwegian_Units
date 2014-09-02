class CfgPatches
{
	class NOR_Backpacks
	{
		units[] = {"NOR_TacticalPack_Black","NOR_TacticalPack_Multi","NOR_Carryall_Desert","NOR_Carryall_Wood","NOR_Kitbag_Medic_Black","NOR_Kitbag_Medic_Multi","NOR_Kitbag_Medic_Desert","NOR_Kitbag_Medic_Wood","NOR_Kitbag_Navy","NOR_Kitbag_Black","NOR_Kitbag_Multi","NOR_Kitbag_Desert","NOR_Kitbag_Wood"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_Carryall_Base;
	class B_TacticalPack_Base;
	class B_FieldPack_cbr;
	class NOR_Kitbag_Wood: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Kitbag (Wood)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_wood_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_wood_co.paa"};
	};
	class NOR_Kitbag_Desert: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Kitbag (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_desert_co.paa"};
	};
	class NOR_Kitbag_Multi: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_multi_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_multi_co.paa"};
	};
	class NOR_Kitbag_Black: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_black_co.paa"};
	};
	class NOR_Kitbag_Navy: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Kitbag (Blue)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_navy_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_navy_co.paa"};
	};
	class NOR_Kitbag_Medic_Wood: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Medic Kitbag (Wood)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_wood_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_wood_co.paa"};
	};
	class NOR_Kitbag_Medic_Desert: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Medic Kitbag (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_desert_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_desert_co.paa"};
	};
	class NOR_Kitbag_Medic_Multi: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Medic Kitbag (Multi)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_multi_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_multi_co.paa"};
	};
	class NOR_Kitbag_Medic_Black: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Nor Medic Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_black_co.paa"};
	};
	class NOR_Carryall_Wood: B_Carryall_Base
	{
		scope = 2;
		displayName = "Nor Carryall (Wood)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\carryall\ui\nor_carryall_wood_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\carryall\nor_carryall_wood_co.paa"};
	};
	class NOR_Carryall_Desert: B_Carryall_Base
	{
		scope = 2;
		displayName = "Nor Carryall (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\carryall\ui\nor_carryall_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\carryall\nor_carryall_desert_co.paa"};
	};
	class NOR_TacticalPack_Multi: B_TacticalPack_Base
	{
		scope = 2;
		displayName = "Nor Tactical Backpack (Multi)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\tacticalpack\ui\nor_tacticalpack_multi_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\tacticalpack\nor_tacticalpack_multi_co.paa"};
	};
	class NOR_TacticalPack_Black: B_TacticalPack_Base
	{
		scope = 2;
		displayName = "Nor Tactical Backpack (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\tacticalpack\ui\nor_tacticalpack_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\tacticalpack\nor_tacticalpack_black_co.paa"};
	};
	class NOR_Backpack_Medic_Wood: B_Kitbag_Base
	{
		scope = 1;
		displayName = "Nor Kitbag (Wood)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_wood_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_wood_co.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class NOR_Backpack_Medic_Desert: NOR_Backpack_Medic_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_desert_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_desert_co.paa"};
	};
	class NOR_Backpack_FSK_Medic_Multi: NOR_Backpack_Medic_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_multi_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_multi_co.paa"};
	};
	class NOR_Backpack_FSK_Medic_Black: NOR_Backpack_Medic_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_medic_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_medic_black_co.paa"};
	};
	class NOR_Backpack_MJK_Medic_Navy: B_FieldPack_cbr
	{
		scope = 1;
		displayName = "Field Pack (Coyote)";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class NOR_Backpack_AR_Wood: NOR_Carryall_Wood
	{
		scope = 1;
		displayName = "Nor Carryall (Wood)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_AR_Desert: NOR_Backpack_AR_Wood
	{
		scope = 1;
		displayName = "Nor Carryall (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\carryall\ui\nor_carryall_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\carryall\nor_carryall_desert_co.paa"};
	};
	class NOR_Backpack_FSK_AR_Multi: NOR_Kitbag_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_AR_Black: NOR_Backpack_FSK_AR_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_black_co.paa"};
	};
	class NOR_Backpack_MJK_AR_Navy: B_FieldPack_cbr
	{
		scope = 1;
		displayName = "Field Pack (Coyote)";
		class TransportMagazines
		{
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine = "200Rnd_mas_556x45_T_Stanag";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_AT_Wood: NOR_Carryall_Wood
	{
		scope = 1;
		displayName = "Nor Carryall (Wood)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 3;
			};
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_AT_Desert: NOR_Backpack_AT_Wood
	{
		scope = 1;
		displayName = "Nor Carryall (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\carryall\ui\nor_carryall_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\carryall\nor_carryall_desert_co.paa"};
	};
	class NOR_Backpack_FSK_AT_Multi: NOR_TacticalPack_Multi
	{
		scope = 1;
		displayName = "Nor Tactical Backpack (Multi)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 3;
			};
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_AT_Black: NOR_Backpack_FSK_AT_Multi
	{
		scope = 1;
		displayName = "Nor Tactical Backpack (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\tacticalpack\ui\nor_tacticalpack_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\tacticalpack\nor_tacticalpack_black_co.paa"};
	};
	class NOR_Backpack_MJK_AT_Navy: NOR_Kitbag_Navy
	{
		scope = 1;
		displayName = "Nor Kitbag (Blue)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_mas_MAAWS
			{
				magazine = "mas_MAAWS";
				count = 3;
			};
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_Soldier_Wood: NOR_Kitbag_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Wood)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_Soldier_Desert: NOR_Backpack_Soldier_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_desert_co.paa"};
	};
	class NOR_Backpack_FSK_Multi: NOR_Kitbag_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_Black: NOR_Backpack_FSK_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_black_co.paa"};
	};
	class NOR_Backpack_MJK_Navy: B_FieldPack_cbr
	{
		scope = 1;
		displayName = "Field Pack (Coyote)";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_Breacher_Multi: NOR_Kitbag_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine = "7Rnd_mas_12Gauge_Slug";
				count = 7;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine = "7Rnd_mas_12Gauge_Pellets";
				count = 7;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_Breacher_Black: NOR_Backpack_FSK_Breacher_Multi
	{
		scope = 1;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_black_co.paa"};
	};
	class NOR_Backpack_MJK_Breacher_navy: B_FieldPack_cbr
	{
		scope = 1;
		displayName = "Bracher Backpack (Multi)";
		class TransportMagazines
		{
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine = "7Rnd_mas_12Gauge_Slug";
				count = 7;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine = "7Rnd_mas_12Gauge_Pellets";
				count = 7;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_UGL_Wood: NOR_Kitbag_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Wood)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_UGL_Desert: NOR_Backpack_UGL_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Desert)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_desert_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_desert_co.paa"};
	};
	class NOR_Backpack_FSK_UGL_Multi: NOR_Backpack_UGL_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Multi)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_multi_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_multi_co.paa"};
	};
	class NOR_Backpack_FSK_UGL_Black: NOR_Backpack_UGL_Wood
	{
		scope = 1;
		displayName = "Nor Kitbag (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\kitbag\ui\nor_kitbag_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\kitbag\nor_kitbag_black_co.paa"};
	};
	class NOR_Backpack_MJK_UGL_Navy: B_FieldPack_cbr
	{
		scope = 1;
		displayName = "Field Pack (Coyote)";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 3;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
	class NOR_Backpack_FSK_Explo_Multi: NOR_TacticalPack_Multi
	{
		scope = 1;
		displayName = "Nor Tactical Backpack (Multi)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_Item_MineDetector
			{
				name = "Item_MineDetector";
				count = 1;
			};
		};
	};
	class NOR_Backpack_FSK_Explo_Black: NOR_Backpack_FSK_Explo_Multi
	{
		scope = 1;
		displayName = "Nor Tactical Backpack (Black)";
		author = "Vasilyevich";
		picture = "\NOR_Backpacks\data\tacticalpack\ui\nor_tacticalpack_black_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Backpacks\data\tacticalpack\nor_tacticalpack_black_co.paa"};
	};
	class NOR_Backpack_MJK_Explo_navy: NOR_Kitbag_Navy
	{
		scope = 1;
		displayName = "Nor Kitbag (Blue)";
		author = "Vasilyevich";
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_mas_556x45_Stanag";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				count = 3;
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_Item_MineDetector
			{
				name = "Item_MineDetector";
				count = 1;
			};
		};
	};
};