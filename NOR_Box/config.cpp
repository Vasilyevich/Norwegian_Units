class CfgPatches {
    class Norwegian_retexture {
        units[] = {"NOR_Box_Everything"};
        weapons[] = {};
        requiredVersion = 0.1;
	    requiredAddons[] = {"NOR_Equip"};
    };
};
class CfgVehicles {
	class B_supplyCrate_F;
	class NOR_Box_Everything: B_supplyCrate_F
	{
		author = "Vasilyevich";
		scopeCurator = 2;
		displayName = "Supply Box (NOR)";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportItems
		{
			class _xx_NOR_Uniform_MJK_Grey
			{
				count = 1;
				name = "NOR_Uniform_MJK_Grey";
			};
			class _xx_NOR_Uniform_Short_MJK_Grey
			{
				count = 1;
				name = "NOR_Uniform_Short_MJK_Grey";
			};
			class _xx_NOR_Uniform_MJK_Coyote
			{
				count = 1;
				name = "NOR_Uniform_MJK_Coyote";
			};
			class _xx_NOR_Uniform_Short_MJK_Coyote
			{
				count = 1;
				name = "NOR_Uniform_Short_MJK_Coyote";
			};
			class _xx_NOR_Uniform_FSK_Grey
			{
				count = 1;
				name = "NOR_Uniform_FSK_Grey";
			};
			class _xx_NOR_Uniform_Short_FSK_Grey
			{
				count = 1;
				name = "NOR_Uniform_Short_FSK_Grey";
			};
			class _xx_NOR_Uniform_FSK_Coyote
			{
				count = 1;
				name = "NOR_Uniform_FSK_Coyote";
			};
			class _xx_NOR_Uniform_Short_FSK_Coyote
			{
				count = 1;
				name = "NOR_Uniform_Short_FSK_Coyote";
			};
			class _xx_NOR_Uniform_FSK_Multi
			{
				count = 1;
				name = "NOR_Uniform_FSK_Multi";
			};
			class _xx_NOR_Uniform_FSK_Black
			{
				count = 1;
				name = "NOR_Uniform_FSK_Black";
			};
			class _xx_NOR_Uniform_MJK_Navy
			{
				count = 1;
				name = "NOR_Uniform_MJK_Navy";
			};
			class _xx_NOR_Uniform_Short_FSK_Multi
			{
				count = 1;
				name = "NOR_Uniform_Short_FSK_Multi";
			};
			class _xx_NOR_Uniform_Short_FSK_Black
			{
				count = 1;
				name = "NOR_Uniform_Short_FSK_Black";
			};
			class _xx_NOR_Uniform_Short_MJK_Navy
			{
				count = 1;
				name = "NOR_Uniform_Short_MJK_Navy";
			};
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
};