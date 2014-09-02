if (isServer) then {
	waitUntil {!isNull _this};
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\weapon_rnd_mjk_navy.sqf"; // Weapons
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\rnd_mjk_navy.sqf"; // Uniform, Vest, Headgear, Facewear and Insignias
	};