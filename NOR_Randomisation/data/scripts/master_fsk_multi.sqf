if (isServer) then {
	waitUntil {!isNull _this};
	_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\rnd_fsk_multi.sqf"; // Weapons
	_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\weapon_rnd_fsk_multi.sqf"; // Uniform, Vest, Headgear, Facewear and Insignias
	};