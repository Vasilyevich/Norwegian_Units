class CfgPatches
{
	class NOR_Equip
	{
		units[] = {};
		weapons[] = {"NOR_Carrier_Standard_1_Green","NOR_Carrier_Standard_2_Green","NOR_Cap_Headphones_FSK_Coyote","NOR_Cap_Headphones_FSK_Grey","NOR_Carrier_Standard_2_Desert","NOR_Carrier_Standard_1_Desert","NOR_Carrier_Standard_2_Wood","NOR_Carrier_Standard_1_Wood","NOR_Cap_Headphones_MJK_Navy","NOR_Cap_Headphones_FSK_Black","NOR_Cap_Headphones_FSK_Multi","NOR_Helmet_ECH_Navy","NOR_Helmet_ECH_Black","NOR_Helmet_ECH_Multi","NOR_Helmet_ECH_Grey","NOR_Helmet_ECH_Desert","NOR_Helmet_ECH_Light_Navy","NOR_Helmet_ECH_Light_Black","NOR_Helmet_ECH_Light_Multi","NOR_Helmet_ECH_Light_Grey","NOR_Helmet_ECH_Light_Desert","NOR_Booniehat_Desert","NOR_Booniehat_Wood","NOR_Beret_Officer","NOR_Helmet_Desert","NOR_Helmet_Wood","NOR_Helmet_Crew","NOR_NVGoggles"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgWeapons
{
	class ItemInfo;
	class NVGoggles;
	class H_HelmetIA;
	class H_HelmetB_light;
	class H_Booniehat_khk;
	class H_Beret_02;
	class H_HelmetCrew_I;
	class H_HelmetSpecB;
	class H_Cap_headphones;
	class V_PlateCarrier2_rgr;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class NOR_Carrier_Standard_2_Green: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Green)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_green_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Green: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Green)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_green_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
	class NOR_Carrier_Standard_2_Navy: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_navy_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Navy: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_navy_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
	class NOR_Carrier_Standard_2_Multi: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_multi_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Multi: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_multi_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
	class NOR_Carrier_Standard_2_Black: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_black_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Black: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_black_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
	class NOR_Carrier_Standard_2_Wood: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_wood_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Wood: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_wood_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_2_Desert: V_PlateCarrier2_rgr
    {
    	_generalMacro = "V_PlateCarrier2_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier Big (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_desert_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 80;
			armor = 30;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class NOR_Carrier_Standard_1_Desert: V_PlateCarrier1_rgr
    {
    	_generalMacro = "V_PlateCarrier1_rgr";
        scope = 2;
        picture = "\NOR_Equip\data\carrier_rig\ui\icon_carrier_1.paa";
        displayName = "Nor Carrier (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\NOR_Equip\data\carrier_rig\nor_carrier_standard_desert_co.paa"};
        author = "$STR_NOR_Author_Name";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
			mass = 60;
			armor = 20;
			passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
	class NOR_NVGoggles: NVGoggles
	{
		scope = 2;
		displayName = "Norwegian NVG";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\nvg\nor_nvg_grey_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "-";
			hiddenSelections[] = {"camo"};
		};
	};
	class NOR_Helmet_Crew: H_HelmetCrew_I
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Crew Helmet";
	};
	class NOR_Helmet_Wood: H_HelmetIA
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "$STR_NOR_Author_Name";
		displayName = "Combat Helmet (Wood)";
		picture = "\NOR_Equip\data\helmet_indep\uinor_helmet_indep_wood_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_indep\nor_helmet_indep_wood_co.paa"};
	};
	class NOR_Helmet_Desert: H_HelmetIA
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "$STR_NOR_Author_Name";
		displayName = "Combat Helmet (Desert)";
		picture = "\NOR_Equip\data\helmet_indep\uinor_helmet_indep_desert_icon_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_indep\nor_helmet_indep_desert_co.paa"};
	};
	class NOR_Beret_Officer: H_Beret_02
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "$STR_NOR_Author_Name";
		displayName = "Officer Beret";
		picture = "\NOR_Equip\data\beret\ui\nor_beret_green_icon_ca.paa";
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\beret\nor_beret_green_co.paa"};
	};
	class NOR_Booniehat_Wood: H_Booniehat_khk
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "$STR_NOR_Author_Name";
		displayName = "Nor Booniehat (Wood)";
		picture = "\NOR_Equip\data\booniehat\ui\icon_booniehat_Wood.paa";
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\booniehat\nor_booniehat_wood_icon_ca.paa"};
	};
	class NOR_Booniehat_Desert: H_Booniehat_khk
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "$STR_NOR_Author_Name";
		displayName = "Nor Booniehat (Desert)";
		picture = "\NOR_Equip\data\booniehat\ui\icon_booniehat_Desert.paa";
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\booniehat\nor_booniehat_desert_icon_ca.paa"};
	};
	class NOR_Helmet_ECH_Light_Desert: H_HelmetB_light
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet Light (Desert)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_desert.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_desert_co.paa"};
	};
	class NOR_Helmet_ECH_Light_Grey: H_HelmetB_light
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet Light (Grey)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_grey.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_grey_co.paa"};
	};
	class NOR_Helmet_ECH_Light_Multi: H_HelmetB_light
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet Light (Multi)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_multi.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_multi_co.paa"};
	};
	class NOR_Helmet_ECH_Light_Black: H_HelmetB_light
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet Light (Black)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_black.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_black_co.paa"};
	};
	class NOR_Helmet_ECH_Light_Navy: H_HelmetB_light
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MJK Helmet Light (Desert)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_desert.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_mjk_desert_co.paa"};
	};
	class NOR_Helmet_ECH_Desert: H_HelmetSpecB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet (Desert)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_desert.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_desert_co.paa"};
	};
	class NOR_Helmet_ECH_Grey: H_HelmetSpecB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet (Grey)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_grey.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_grey_co.paa"};
	};
	class NOR_Helmet_ECH_Multi: H_HelmetSpecB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet (Multi)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_multi.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_multi_co.paa"};
	};
	class NOR_Helmet_ECH_Black: H_HelmetSpecB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "FSK Helmet (Black)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_black.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_fsk_black_co.paa"};
	};
	class NOR_Helmet_ECH_Navy: H_HelmetSpecB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MJK Helmet (Desert)";
		picture = "\NOR_Equip\data\helmet_nato\ui\icon_helmet_ech_light_desert.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\helmet_nato\nor_helmet_nato_mjk_desert_co.paa"};
	};
	class NOR_Cap_Headphones_Multi: H_Cap_headphones
	{
		displayName = "Nor Headphone Cap (Multi)";
		picture = "\NOR_Equip\data\headphone_cap\ui\nor_headphone_cap_multi_icon_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: HeadgearItem
		{
			scope = 2;
			weaponPoolAvailable = 1;
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\headphone_cap\nor_headphonecap_multi_co.paa"};
	};
	class NOR_Cap_Headphones_Black: H_Cap_headphones
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Nor Headphone Cap (Black)";
		picture = "\NOR_Equip\data\headphone_cap\ui\nor_headphone_cap_black_icon_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\headphone_cap\nor_headphonecap_black_co.paa"};
	};
	class NOR_Cap_Headphones_Navy: H_Cap_headphones
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Nor Headphone Cap (Blue)";
		picture = "\NOR_Equip\data\headphone_cap\ui\nor_headphone_cap_blue_icon_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\headphone_cap\nor_headphonecap_navy_co.paa"};
	};
	class NOR_Cap_Headphones_Coyote: H_Cap_headphones
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Nor Headphone Cap (Blue)";
		picture = "\NOR_Equip\data\headphone_cap\ui\nor_headphone_cap_coyote_icon_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\headphone_cap\nor_headphonecap_coyote_co.paa"};
	};
	class NOR_Cap_Headphones_Grey: H_Cap_headphones
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Nor Headphone Cap (Blue)";
		picture = "\NOR_Equip\data\headphone_cap\ui\nor_headphone_cap_grey_icon_ca.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			allowedSlots[] = {801,901,701,605};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NOR_Equip\data\headphone_cap\nor_headphonecap_grey_co.paa"};
	};
};