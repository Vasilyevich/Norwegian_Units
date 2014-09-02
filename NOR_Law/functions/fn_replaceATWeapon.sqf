/*
BWA3 function, by commy2
this code is property of the ArmA 3 Bundeswehr modification
ask us nicely at http://www.bwmod.de/ if you want to re-use any of this script
we don't support changed code based on this work
*/
_unit = _this select 0;
_weapon = _this select 1;

sleep 0.5;
_unit removeWeapon _weapon;
_unit addWeapon (_weapon + "_Used");
_unit selectWeapon secondaryWeapon _unit;

	if ((currentWeapon player) == "NOR_M72_LAW_Used") then {
		player removeMagazines "NOR_M72_LAW_R";
	};