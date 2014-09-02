/*
Norwegian Units equip function, by Vasilyevich
this code is made for the ArmA 3 Norwegian Units modification
http://forums.bistudio.com/showthread.php?179995-Norwegian-Units
i don't support changed code based on this work
*/
if (isServer) then {
if ((uniform _this == "NOR_Uniform_Wood") or (uniform _this == "NOR_Uniform_Medic_Wood")) then {
_rnd1 = floor random 2;
	_this setObjectTextureGlobal [0, [
	"\NOR_Uniforms\data\standard_wood\nor_indep_uniform_wood_co.paa",
	"\NOR_Uniforms\data\standard_wood\nor_indep_uniform_wood_var_mirrord.paa"
] select _rnd1];
};
}; /* "if (isServer)" END - DO NOT DELETE