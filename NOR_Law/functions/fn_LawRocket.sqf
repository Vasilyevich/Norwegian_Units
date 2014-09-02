


while {true} do {

	if ((currentWeapon player) == "NOR_M72_LAW_Used") then {
		player removeMagazines "NOR_M72_LAW_R";
	};

	waituntil {sleep 2; (currentWeapon player) == "NOR_M72_LAW"};

	if ((player ammo "NOR_M72_LAW" == 0) and !("NOR_M72_LAW_R" in (magazines player))) then {
		player addMagazine "NOR_M72_LAW_R";
	};

};