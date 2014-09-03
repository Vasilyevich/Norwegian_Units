class CfgPatches
{
	class NOR_Weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class srifle_mas_m107;
	class srifle_mas_m107_d;
	class srifle_mas_m107_v;
	class hgun_mas_glock_F;
	class srifle_mas_hk417_h;
	class srifle_mas_hk417_d;
	class srifle_mas_hk417_v;
	class arifle_mas_hk416c;
	class arifle_mas_hk416c_d;
	class arifle_mas_hk416c_v;
	class arifle_mas_hk416_m203c;
	class arifle_mas_hk416_m203c_d;
	class arifle_mas_hk416_m203c_v;
	class arifle_mas_hk416_m203;
	class arifle_mas_hk416_m203_d;
	class arifle_mas_hk416_m203_v;
	class arifle_mas_hk416;
	class arifle_mas_hk416_d;
	class arifle_mas_hk416_v;
	class arifle_mas_l119;
	class arifle_mas_l119_d;
	class arifle_mas_l119_v;
	class arifle_mas_l119_m203;
	class arifle_mas_l119_m203_d;
	class arifle_mas_l119_m203_v;
	class LMG_mas_M249_F;
	class LMG_mas_M249_F_d;
	class LMG_mas_M249_F_v;
	class NOR_M249_ACO_IR: LMG_mas_M249_F
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_M249_ACO_IR_Desert: LMG_mas_M249_F_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_M249_ACO_IR_Wood: LMG_mas_M249_F_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_UGL_RCO_IR_S: arifle_mas_l119_m203
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW m203";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_UGL_RCO_IR_S_Desert: arifle_mas_l119_m203_d
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW m203";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_UGL_RCO_IR_S_Wood: arifle_mas_l119_m203_v
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW m203";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_MRCO_IR_S: arifle_mas_l119
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_MRCO_IR_S_Desert: arifle_mas_l119_d
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_C8_MRCO_IR_S_Wood: arifle_mas_l119_v
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "C8 SFW";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_Barrett_M82_LRPS: srifle_mas_m107
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Barrett M82";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	class NOR_Barrett_M82_LRPS_Wood: srifle_mas_m107_v
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Barrett M82";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	class NOR_Barrett_M82_LRPS_Desert: srifle_mas_m107_d
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Barrett M82";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	class NOR_HK416c_MRCO_IR_S: arifle_mas_hk416c
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416c_MRCO_IR_S_Desert: arifle_mas_hk416c_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416c_MRCO_IR_S_Wood: arifle_mas_hk416c_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416c_UGL_RCO_IR_S: arifle_mas_hk416_m203c
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416c_UGL_RCO_IR_S_Desert: arifle_mas_hk416_m203c_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416c_UGL_RCO_IR_S_Wood: arifle_mas_hk416_m203c_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_TVS_IR_S: srifle_mas_hk417_h
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_tws";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_TVS_IR_S_Desert: srifle_mas_hk417_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_tws";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_TVS_IR_S_Wood: srifle_mas_hk417_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_tws";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_DMS_IR: srifle_mas_hk417_h
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_DMS_IR_Desert: srifle_mas_hk417_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK417_DMS_IR_Wood: srifle_mas_hk417_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_ACO_IR: arifle_mas_hk416
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_ACO_IR_Desert: arifle_mas_hk416_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_ACO_IR_Wood: arifle_mas_hk416_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_UGL_RCO_IR: arifle_mas_hk416_m203
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_UGL_RCO_IR_Desert: arifle_mas_hk416_m203_d
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_HK416_UGL_RCO_IR_Wood: arifle_mas_hk416_m203_v
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class NOR_Glock_17_S: hgun_mas_glock_F
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "muzzle_mas_snds_L";
				slot = "MuzzleSlot";
			};
		};
	};
};