if (isServer) then {
	waitUntil {!isNull _this};
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\weapon_rnd_fsk_black.sqf"; // Weapon Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\rnd_fsk_black.sqf"; // Vest, Headgear, Facewear and Insignias
}; /* "if (isServer)" END - DO NOT DELETE