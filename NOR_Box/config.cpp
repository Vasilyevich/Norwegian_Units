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
			class _xx_NOR_Carrier_Standard_2_Green
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Green";
			};
			class _xx_NOR_Carrier_Standard_1_Green
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Green";
			};
			class _xx_NOR_Carrier_Standard_2_Navy
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Navy";
			};
			class _xx_NOR_Carrier_Standard_1_Navy
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Navy";
			};
			class _xx_NOR_Carrier_Standard_2_Multi
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Multi";
			};
			class _xx_NOR_Carrier_Standard_1_Multi
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Multi";
			};
			class _xx_NOR_Carrier_Standard_2_Black
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Black";
			};
			class _xx_NOR_Carrier_Standard_1_Black
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Black";
			};
			class _xx_NOR_Carrier_Standard_2_Wood
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Wood";
			};
			class _xx_NOR_Carrier_Standard_1_Wood
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Wood";
			};
			class _xx_NOR_Carrier_Standard_2_Desert
			{
				count = 5;
				name = "NOR_Carrier_Standard_2_Desert";
			};
			class _xx_NOR_Carrier_Standard_1_Desert
			{
				count = 5;
				name = "NOR_Carrier_Standard_1_Desert";
			};
			class _xx_NOR_NVGoggles
			{
				count = 5;
				name = "NOR_NVGoggles";
			};
						class _xx_NOR_Helmet_Wood
			{
				count = 5;
				name = "NOR_Helmet_Wood";
			};
			class _xx_NOR_Helmet_Desert
			{
				count = 5;
				name = "NOR_Helmet_Desert";
			};
			class _xx_NOR_Beret_Officer
			{
				count = 5;
				name = "NOR_Beret_Officer";
			};
			class _xx_NOR_Booniehat_Wood
			{
				count = 5;
				name = "NOR_Booniehat_Wood";
			};
			class _xx_NOR_Booniehat_Desert
			{
				count = 5;
				name = "NOR_Booniehat_Desert";
			};
			class _xx_NOR_Helmet_ECH_Light_Desert
			{
				count = 5;
				name = "NOR_Helmet_ECH_Light_Desert";
			};
			class _xx_NOR_Helmet_ECH_Light_Grey
			{
				count = 5;
				name = "NOR_Helmet_ECH_Light_Grey";
			};
			class _xx_NOR_Helmet_ECH_Light_Multi
			{
				count = 5;
				name = "NOR_Helmet_ECH_Light_Multi";
			};
			class _xx_NOR_Helmet_ECH_Light_Black
			{
				count = 5;
				name = "NOR_Helmet_ECH_Light_Black";
			};
			class _xx_NOR_Helmet_ECH_Light_Navy
			{
				count = 5;
				name = "NOR_Helmet_ECH_Light_Navy";
			};
			class _xx_NOR_Helmet_ECH_Desert
			{
				count = 5;
				name = "NOR_Helmet_ECH_Desert";
			};
			class _xx_NOR_Helmet_ECH_Grey
			{
				count = 5;
				name = "NOR_Helmet_ECH_Grey";
			};
			class _xx_NOR_Helmet_ECH_Multi
			{
				count = 5;
				name = "NOR_Helmet_ECH_Multi";
			};
			class _xx_NOR_Helmet_ECH_Black
			{
				count = 5;
				name = "NOR_Helmet_ECH_Black";
			};
			class _xx_NOR_Helmet_ECH_Navy
			{
				count = 5;
				name = "NOR_Helmet_ECH_Navy";
			};
			class _xx_NOR_Cap_Headphones_Multi
			{
				count = 5;
				name = "NOR_Cap_Headphones_Multi";
			};
			class _xx_NOR_Cap_Headphones_Black
			{
				count = 5;
				name = "NOR_Cap_Headphones_Black";
			};
			class _xx_NOR_Cap_Headphones_Navy
			{
				count = 5;
				name = "NOR_Cap_Headphones_Navy";
			};
			class _xx_NOR_Cap_Headphones_Coyote
			{
				count = 5;
				name = "NOR_Cap_Headphones_Coyote";
			};
			class _xx_NOR_Cap_Headphones_Grey
			{
				count = 5;
				name = "NOR_Cap_Headphones_Grey";
			};
			class _xx_NOR_Uniform_MJK_Grey
			{
				count = 5;
				name = "NOR_Uniform_MJK_Grey";
			};
			class _xx_NOR_Uniform_Short_MJK_Grey
			{
				count = 5;
				name = "NOR_Uniform_Short_MJK_Grey";
			};
			class _xx_NOR_Uniform_MJK_Coyote
			{
				count = 5;
				name = "NOR_Uniform_MJK_Coyote";
			};
			class _xx_NOR_Uniform_Short_MJK_Coyote
			{
				count = 5;
				name = "NOR_Uniform_Short_MJK_Coyote";
			};
			class _xx_NOR_Uniform_FSK_Grey
			{
				count = 5;
				name = "NOR_Uniform_FSK_Grey";
			};
			class _xx_NOR_Uniform_Short_FSK_Grey
			{
				count = 5;
				name = "NOR_Uniform_Short_FSK_Grey";
			};
			class _xx_NOR_Uniform_FSK_Coyote
			{
				count = 5;
				name = "NOR_Uniform_FSK_Coyote";
			};
			class _xx_NOR_Uniform_Short_FSK_Coyote
			{
				count = 5;
				name = "NOR_Uniform_Short_FSK_Coyote";
			};
			class _xx_NOR_Uniform_FSK_Multi
			{
				count = 5;
				name = "NOR_Uniform_FSK_Multi";
			};
			class _xx_NOR_Uniform_FSK_Black
			{
				count = 5;
				name = "NOR_Uniform_FSK_Black";
			};
			class _xx_NOR_Uniform_MJK_Navy
			{
				count = 5;
				name = "NOR_Uniform_MJK_Navy";
			};
			class _xx_NOR_Uniform_Short_FSK_Multi
			{
				count = 5;
				name = "NOR_Uniform_Short_FSK_Multi";
			};
			class _xx_NOR_Uniform_Short_FSK_Black
			{
				count = 5;
				name = "NOR_Uniform_Short_FSK_Black";
			};
			class _xx_NOR_Uniform_Short_MJK_Navy
			{
				count = 5;
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