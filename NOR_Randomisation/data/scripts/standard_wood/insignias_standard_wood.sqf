/*
Norwegian Units equip function, by Vasilyevich
this code is made for the ArmA 3 Norwegian Units modification
http://forums.bistudio.com/showthread.php?179995-Norwegian-Units
i don't support changed code based on this work
*/
if (isServer) then {
if (uniform _this == "NOR_Uniform_Medic_Wood") then {
[_this,"NOR_Insignia_Medic_Color"] call BIS_fnc_setUnitInsignia;
};
}; /* "if (isServer)" END - DO NOT DELETE