
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
Removevest _this;
removeAllItems _this;
Removeheadgear _this;
// Randomize Vest
_vest = (ceil (random 2));
switch (_vest ) do
{
	case 1: {
		_this addvest "NOR_Carrier_Standard_2_Black";
		};
	case 2: {
		_this addvest "NOR_Carrier_Standard_1_Black";
		};
};
// Randomize Headgear
_helmet = (ceil (random 3));
switch (_helmet ) do
{
	case 1: {
		_this addheadgear "NOR_Helmet_ECH_Black";
		};
	case 2: {
		_this addheadgear "NOR_Helmet_ECH_Light_Black";
		};
	case 3: {
		_this addheadgear "NOR_Cap_Headphones_FSK_Black";
		};
};
// Randomize Facewear
_facewear = (ceil (random 9));
switch (_facewear ) do
{
	case 1: {
		_this addWeaponGlobal "G_Bandanna_beast";
		};
	case 2: {
		_this addWeaponGlobal "G_Bandanna_blk";
		};
	case 3: {
		_this addWeaponGlobal "G_Bandanna_blk";
		};
	case 4: {
		_this addWeaponGlobal "G_Tactical_Clear";
		};
	case 5: {
		_this addWeaponGlobal "G_Tactical_Black"
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
		[_this,"NOR_Insignia_FSK_BW"] call BIS_fnc_setUnitInsignia;
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