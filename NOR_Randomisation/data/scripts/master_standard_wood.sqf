if (isServer) then {
	waitUntil {!isNull _this};
if ((uniform _this == "NOR_Uniform_Wood") or (uniform _this == "NOR_Uniform_Medic_Wood")) then {
	_this execVM "\NOR_Randomisation\data\scripts\standard_wood\uniform_rnd_standard_wood.sqf"; // Uniform Randomisation
	_this execVM "\NOR_Randomisation\data\scripts\standard_wood\insignias_standard_wood.sqf"; // Insignias
};
}; /* "if (isServer)" END - DO NOT DELETE