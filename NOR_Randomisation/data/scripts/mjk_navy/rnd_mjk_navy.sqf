
/*
Norwegian Units equip function, by Vasilyevich
this code is made for the ArmA 3 Norwegian Units modification
http://forums.bistudio.com/showthread.php?179995-Norwegian-Units
i don't support changed code based on this work
*/
if (isServer) then {
// Checks Items
_vest = vest _this;
_magazines = magazines _this;
_items = items _this;
_assitems = assignedItems _this;
// Removes Items
Removeuniform _this;
Removevest _this;
removeAllItems _this;
Removeheadgear _this;
// Randomize Uniform
_uniform = (ceil (random 6));
switch (_uniform ) do
{
	case 1: {
		_this forceAddUniform "NOR_Uniform_MJK_Grey";
		};
	case 2: {
		_this forceAddUniform "NOR_Uniform_Short_MJK_Grey";
		};
	case 3: {
		_this forceAddUniform "NOR_Uniform_MJK_Coyote";
		};
	case 4: {
		_this forceAddUniform "NOR_Uniform_Short_MJK_Coyote";
		};
	case 5: {
		_this forceAddUniform "NOR_Uniform_MJK_Navy";
		};
	case 6: {
		_this forceAddUniform "NOR_Uniform_Short_MJK_Navy";
		};
};
// Randomize Vest
_vest = (ceil (random 8));
switch (_vest ) do
{
	case 1: {
		_this addvest "NOR_Carrier_Standard_2_Navy";
		};
	case 2: {
		_this addvest "NOR_Carrier_Standard_1_Navy";
		};
	case 3: {
		_this addvest "NOR_Carrier_Standard_2_Navy";
		};
	case 4: {
		_this addvest "NOR_Carrier_Standard_1_Navy";
		};
	case 5: {
		_this addvest "NOR_Carrier_Standard_2_Black";
		};
	case 6: {
		_this addvest "NOR_Carrier_Standard_1_Black";
		};
	case 7: {
		_this addvest "NOR_Carrier_Standard_2_Desert";
		};
	case 8: {
		_this addvest "NOR_Carrier_Standard_1_Desert";
		};
};
// Randomize Headgear
_helmet = (ceil (random 12));
switch (_helmet ) do
{
	case 1: {
		_this addheadgear "NOR_Helmet_ECH_Light_Desert";
		};
	case 2: {
		_this addheadgear "NOR_Helmet_ECH_Light_Grey";
		};
	case 3: {
		_this addheadgear "NOR_Helmet_ECH_Desert";
		};
	case 4: {
		_this addheadgear "NOR_Helmet_ECH_Grey";
		};
	case 5: {
		_this addheadgear "NOR_Helmet_ECH_Light_Desert";
		};
	case 6: {
		_this addheadgear "NOR_Helmet_ECH_Light_Grey";
		};
	case 7: {
		_this addheadgear "NOR_Helmet_ECH_Desert";
		};
	case 8: {
		_this addheadgear "NOR_Helmet_ECH_Grey";
		};
	case 9: {
		_this addheadgear "NOR_Helmet_ECH_Multi";
		};
	case 10: {
		_this addheadgear "NOR_Cap_Headphones_Coyote";
		};
	case 11: {
		_this addheadgear "NOR_Cap_Headphones_Grey";
		};
	case 12: {
		_this addheadgear "NOR_Cap_Headphones_Navy";
		};
};
// Randomize Facewear
_facewear = (ceil (random 9));
switch (_facewear ) do
{
	case 1: {
		_this addWeaponGlobal "G_Bandanna_oli";
		};
	case 2: {
		_this addWeaponGlobal "G_Bandanna_khk";
		};
	case 3: {
		_this addWeaponGlobal "G_Bandanna_tan";
		};
	case 4: {
		_this addWeaponGlobal "G_Tactical_Clear";
		};
	case 5: {
		_this addWeaponGlobal "G_Tactical_Black";
		};
	case 6: {
		_this addWeaponGlobal "G_Bandanna_shades";
		};
	case 7: {
		_this addWeaponGlobal "G_Lowprofile";
		};
		case 8: {};
		case 9: {};
};
// Randomize Insignias
_insignia = (ceil (random 3));
switch (_insignia ) do
{
	case 1: {
		[_this,"NOR_Insignia_Flag_IR"] call BIS_fnc_setUnitInsignia;
		};
	case 2: {
		[_this,"NOR_Insignia_MJK_BW"] call BIS_fnc_setUnitInsignia;
		};
	case 3: {
		[_this,"NOR_Insignia_viking_BW"] call BIS_fnc_setUnitInsignia;
		};
};

// Read Items
{_this addItem _x} forEach _items;
{_this addMagazine _x} forEach _magazines;
{_this addItem _x} forEach _assitems;
{_this assignItem _x} forEach _assitems;
};