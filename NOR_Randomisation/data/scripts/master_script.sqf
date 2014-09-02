/*if (isServer) then {
// FSK MULTI
if ((uniform _this == "NOR_Uniform_FSK_Multi") or (uniform _this == "NOR_Uniform_Short_FSK_Multi") or (uniform _this == "NOR_Uniform_FSK_Medic_Multi")) then {
	//_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\uniform_rnd_fsk_multi.sqf"; // Uniform Randomisation
	//_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\helmet_rnd_fsk_multi.sqf"; // Helmet Randomisation
	//_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\facewear_rnd_fsk_multi.sqf"; // Facewear Randomisation
	//_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\weapon_rnd_fsk_multi.sqf"; // Weapon Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\fsk_multi\insignias_fsk_multi.sqf"; // Insignias
};
// FSK BLACK
if ((uniform _this == "NOR_Uniform_FSK_Black") or (uniform _this == "NOR_Uniform_Short_FSK_Black") or (uniform _this == "NOR_Uniform_FSK_Medic_Black")) then {
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\helmet_rnd_fsk_black.sqf"; // Helmet Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\facewear_rnd_fsk_black.sqf"; // Facewear Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\weapon_rnd_fsk_black.sqf"; // Weapon Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\fsk_black\insignias_fsk_black.sqf"; // Insignias
};
// MJK BLUE
if ((uniform _this == "NOR_Uniform_MJK_Navy") or (uniform _this == "NOR_Uniform_Short_MJK_Navy") or (uniform _this == "NOR_Uniform_MJK_Medic_Navy")) then {
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\uniform_rnd_mjk_navy.sqf"; // Uniform Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\helmet_rnd_mjk_navy.sqf"; // Helmet Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\facewear_rnd_mjk_navy.sqf"; // Facewear Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\weapon_rnd_mjk_navy.sqf"; // Weapon Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\mjk_navy\insignias_mjk_navy.sqf"; // Insignias
};
// STANDARD WOOD
if ((uniform _this == "NOR_Uniform_Wood") or (uniform _this == "NOR_Uniform_Medic_Wood")) then {
	_this execVM "\NOR_Randomisation\data\scripts\standard_wood\uniform_rnd_standard_wood.sqf"; // Uniform Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\standard_wood\insignias_standard_wood.sqf"; // Insignias
};
// STANDARD DESERT
if ((uniform _this == "NOR_Uniform_Desert") or (uniform _this == "NOR_Uniform_Medic_Desert")) then {
	_this execVM "\NOR_Randomisation\data\scripts\standard_desert\uniform_rnd_standard_desert.sqf"; // Uniform Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\standard_desert\insignias_standard_desert.sqf"; // Insignias
};
}; /* "if (isServer)" END - DO NOT DELETE