/*
Norwegian Units equip function, by Vasilyevich
this code is made for the ArmA 3 Norwegian Units modification
http://forums.bistudio.com/showthread.php?179995-Norwegian-Units
i don't support changed code based on this work
*/
if (isServer) then {
if ((uniform _this == "NOR_Uniform_Desert") or (uniform _this == "NOR_Uniform_Medic_Desert")) then {
_rnd1 = floor random 2;
	_this setObjectTextureGlobal [0, [
	"\NOR_Uniforms\data\standard_desert\nor_indep_uniform_desert_co.paa",
	"\NOR_Uniforms\data\standard_desert\nor_indep_uniform_desert_var_mirrord.paa"
] select _rnd1];
};
}; /* "if (isServer)" END - DO NOT DELETE