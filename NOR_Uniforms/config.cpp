class CfgPatches
{
	class NOR_Uniforms
	{
		units[] = {"NOR_Uniform_Base_MJK_Grey_Short","NOR_Uniform_Base_MJK_Grey","NOR_Uniform_Base_MJK_Coyote_Short","NOR_Uniform_Base_MJK_Coyote","NOR_Uniform_Base_FSK_Grey_Short","NOR_Uniform_Base_FSK_Grey","NOR_Uniform_Base_FSK_Coyote_Short","NOR_Uniform_Base_FSK_Coyote","NOR_Uniform_Base_Medic_Desert","NOR_Uniform_Base_Medic_Wood","NOR_Uniform_Base_MJK_Medic_Navy","NOR_Uniform_Base_FSK_Medic_Black","NOR_Uniform_Base_FSK_Medic_Multi","NOR_Uniform_Base_MJK_Navy_Short","NOR_Uniform_Base_FSK_Black_Short","NOR_Uniform_Base_FSK_Multi_Short","NOR_Uniform_Base_MJK_Navy","NOR_Uniform_Base_FSK_Black","NOR_Uniform_Base_FSK_Multi","NOR_Uniform_Base_Officer_Desert","NOR_Uniform_Base_Officer_Wood","NOR_Uniform_Base_Desert","NOR_Uniform_Base_Wood","NOR_Uniform_Base_Crew_Standard","NOR_Uniform_Base_Ghillie_Desert","NOR_Uniform_Base_Ghillie_Wood"};
		weapons[] = {"NOR_Uniform_MJK_Grey","NOR_Uniform_Short_MJK_Grey","NOR_Uniform_MJK_Coyote","NOR_Uniform_Short_MJK_Coyote","NOR_Uniform_Short_FSK_Coyote","NOR_Uniform_FSK_Coyote","NOR_Uniform_Short_FSK_Grey","NOR_Uniform_FSK_Grey","NOR_Uniform_Medic_Desert","NOR_Uniform_Medic_Wood","NOR_Uniform_MJK_Medic_Navy","NOR_Uniform_FSK_Medic_Black","NOR_Uniform_FSK_Medic_Multi","NOR_Uniform_Short_MJK_Navy","NOR_Uniform_Short_FSK_Black","NOR_Uniform_Short_FSK_Multi","NOR_Uniform_MJK_Navy","NOR_Uniform_FSK_Black","NOR_Uniform_FSK_Multi","NOR_Uniform_Officer_Desert","NOR_Uniform_Desert","NOR_Ghillie_Desert","NOR_Uniform_Officer_Wood","NOR_Uniform_Wood","NOR_Uniform_Crew_Standard","NOR_Ghillie_Wood"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Soldier_F;
	class NOR_BasicBody_Base: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Grey";
		hiddenSelections[] = {"camo1","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\underwear\nor_basicbody_flag_co.paa"};
		model = "\A3\Characters_F\Common\basicbody";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class NOR_Uniform_Base_MJK_Grey_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Grey";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_variations\nor_nato_uniform_mjk_grey_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_MJK_Grey: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Grey";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_variations\nor_nato_uniform_mjk_grey_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_MJK_Coyote_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Coyote";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_variations\nor_nato_uniform_mjk_coyote_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_MJK_Coyote: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Coyote";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_variations\nor_nato_uniform_mjk_coyote_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_FSK_Grey_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Grey";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_variations\nor_nato_uniform_fsk_grey_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_FSK_Grey: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Grey";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_variations\nor_nato_uniform_fsk_grey_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_FSK_Coyote_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Coyote";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_variations\nor_nato_uniform_fsk_coyote_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_FSK_Coyote: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Coyote";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_variations\nor_nato_uniform_fsk_coyote_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_Medic_Wood: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Medic_Wood";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_wood\nor_indep_uniform_wood_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	class NOR_Uniform_Base_Medic_Desert: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Medic_Desert";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_desert\nor_indep_uniform_desert_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	class NOR_Uniform_Base_Ghillie_Wood: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Ghillie_Wood";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_wood\nor_nato_uniform_wood_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	class NOR_Uniform_Base_Ghillie_Desert: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Ghillie_Desert";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_desert\nor_nato_uniform_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	class NOR_Uniform_Base_Crew_Standard: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Crew_Standard";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\coveralls\nor_coverall_green_co.paa"};
		model = "\A3\Characters_F\Common\coveralls.p3d";
	};
	class NOR_Uniform_Base_Wood: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Wood";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_wood\nor_indep_uniform_wood_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	class NOR_Uniform_Base_Desert: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Desert";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_desert\nor_indep_uniform_desert_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	};
	class NOR_Uniform_Base_Officer_Wood: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Officer_Wood";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_wood\nor_indep_uniform_officer_wood_co.paa","\NOR_Uniforms\data\standard_wood\nor_indep_uniform_wood_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	class NOR_Uniform_Base_Officer_Desert: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Officer_Desert";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\standard_desert\nor_indep_uniform_officer_desert_co.paa","\NOR_Uniforms\data\standard_desert\nor_indep_uniform_desert_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	};
	class NOR_Uniform_Base_FSK_Multi: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Multi";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_multi\nor_nato_uniform_multi_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_FSK_Black: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Black";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_black\nor_nato_uniform_black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_MJK_Navy: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_MJK_Navy";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_navy\nor_nato_uniform_navy_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_FSK_Multi_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Multi";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_multi\nor_nato_uniform_multi_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_FSK_Black_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_FSK_Black";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_black\nor_nato_uniform_black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_MJK_Navy_Short: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_Short_MJK_Navy";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_navy\nor_nato_uniform_navy_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class NOR_Uniform_Base_FSK_Medic_Multi: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Medic_Multi";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_multi\nor_nato_uniform_multi_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_FSK_Medic_Black: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_FSK_Medic_Black";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\fsk_black\nor_nato_uniform_black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class NOR_Uniform_Base_MJK_Medic_Navy: B_Soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		modelsides[] = {3,2,1,0};
		uniformClass = "NOR_Uniform_MJK_Medic_Navy";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NOR_Uniforms\data\mjk_navy\nor_nato_uniform_navy_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class NOR_BasicBody: Uniform_Base
	{
		author = "Vasilyevich";
		scope = 1;
		displayName = "Norwegian Underwear";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_BasicBody_Base";
			containerClass = "Supply0";
			mass = 5;
		};
	};
	class NOR_Uniform_MJK_Grey: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform (Grey)";
		picture = "\NOR_Uniforms\data\mjk_variations\ui\nor_uniform_grey_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Grey";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_MJK_Grey: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform Short (Grey)";
		picture = "\NOR_Uniforms\data\mjk_variations\ui\nor_uniform_grey_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Grey_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_MJK_Coyote: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform (Coyote)";
		picture = "\NOR_Uniforms\data\mjk_variations\ui\nor_uniform_coyote_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Coyote";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_MJK_Coyote: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform Short (Coyote)";
		picture = "\NOR_Uniforms\data\mjk_variations\ui\nor_uniform_coyote_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Coyote_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_FSK_Grey: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform (Grey)";
		picture = "\NOR_Uniforms\data\fsk_variations\ui\nor_uniform_grey_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Grey";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_FSK_Grey: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform Short (Grey)";
		picture = "\NOR_Uniforms\data\fsk_variations\ui\nor_uniform_grey_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Grey_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_FSK_Coyote: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform (Coyote)";
		picture = "\NOR_Uniforms\data\fsk_variations\ui\nor_uniform_coyote_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Coyote";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_FSK_Coyote: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform Short (Coyote)";
		picture = "\NOR_Uniforms\data\fsk_variations\ui\nor_uniform_coyote_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Coyote_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Ghillie_Wood: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Ghillie Suit (Wood)";
		picture = "\NOR_Uniforms\data\standard_wood\ui\nor_ghillie_wood_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Ghillie_Wood";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class NOR_Uniform_Crew_Standard: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Crew Uniform";
		picture = "\NOR_Uniforms\data\standard_wood\ui\nor_coverall_wood_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Crew_Standard";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class NOR_Uniform_Wood: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Combat Uniform (Wood)";
		picture = "\NOR_Uniforms\data\standard_wood\ui\nor_uniform_wood_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Wood";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Officer_Wood: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Officer Uniform (Wood)";
		picture = "\NOR_Uniforms\data\standard_wood\ui\nor_uniform_officer_wood_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Officer_Wood";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class NOR_Ghillie_Desert: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Ghillie Suit (Desert)";
		picture = "\NOR_Uniforms\data\standard_desert\ui\nor_ghillie_desert_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Ghillie_Desert";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class NOR_Uniform_Desert: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Combat Uniform (Desert)";
		picture = "\NOR_Uniforms\data\standard_desert\ui\nor_uniform_desert_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Desert";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Officer_Desert: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "Nor Officer Uniform (Desert)";
		picture = "\NOR_Uniforms\data\standard_desert\ui\nor_uniform_officer_desert_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Officer_Desert";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class NOR_Uniform_FSK_Multi: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform (Multi)";
		picture = "\NOR_Uniforms\data\fsk_multi\ui\nor_uniform_multi_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Multi";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_FSK_Black: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform (Black)";
		picture = "\NOR_Uniforms\data\fsk_black\ui\nor_uniform_black_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Black";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_MJK_Navy: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform (Blue)";
		picture = "\NOR_Uniforms\data\mjk_navy\ui\nor_uniform_navy_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Navy";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_FSK_Multi: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform Short (Multi)";
		picture = "\NOR_Uniforms\data\fsk_multi\ui\nor_uniform_multi_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Multi_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_FSK_Black: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "FSK Uniform Short (Black)";
		picture = "\NOR_Uniforms\data\fsk_black\ui\nor_uniform_black_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Black_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Short_MJK_Navy: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 2;
		displayName = "MJK Uniform Short (Blue)";
		picture = "\NOR_Uniforms\data\mjk_navy\ui\nor_uniform_navy_short_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Navy_Short";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_FSK_Medic_Multi: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 1;
		displayName = "FSK Medic Uniform (Multi)";
		picture = "\NOR_Uniforms\data\fsk_multi\ui\nor_uniform_multi_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Medic_Multi";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_FSK_Medic_Black: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 1;
		displayName = "FSK Medic Uniform (Black)";
		picture = "\NOR_Uniforms\data\fsk_black\ui\nor_uniform_black_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_FSK_Medic_Black";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_MJK_Medic_Navy: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 1;
		displayName = "MJK Medic Uniform (Blue)";
		picture = "\NOR_Uniforms\data\mjk_navy\ui\nor_uniform_navy_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_MJK_Medic_Navy";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Medic_Desert: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 1;
		displayName = "Nor Combat Uniform (Desert)";
		picture = "\NOR_Uniforms\data\standard_desert\ui\nor_uniform_desert_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Medic_Desert";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class NOR_Uniform_Medic_Wood: Uniform_Base
	{
		author = "$STR_NOR_Author_Name";
		scope = 1;
		displayName = "Nor Combat Uniform (Wood)";
		picture = "\NOR_Uniforms\data\standard_wood\ui\nor_uniform_wood_icon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NOR_Uniform_Base_Medic_Wood";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};