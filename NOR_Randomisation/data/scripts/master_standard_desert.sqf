if (isServer) then {
	waitUntil {!isNull _this};
if ((uniform _this == "NOR_Uniform_Desert") or (uniform _this == "NOR_Uniform_Medic_Desert")) then {
	_this execVM "\NOR_Randomisation\data\scripts\standard_desert\uniform_rnd_standard_desert.sqf"; // Uniform Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\standard_desert\insignias_standard_desert.sqf"; // Insignias
};
}; /* "if (isServer)" END - DO NOT DELETE