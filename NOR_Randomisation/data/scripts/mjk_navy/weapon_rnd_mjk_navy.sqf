
/*
Norwegian Units equip function, by Vasilyevich
this code is made for the ArmA 3 Norwegian Units modification
http://forums.bistudio.com/showthread.php?179995-Norwegian-Units
i don't support changed code based on this work
*/
if (isServer) then {
if (primaryweapon _this == "NOR_HK416c_MRCO_IR_S") then {
_this removeweapon "NOR_HK416c_MRCO_IR_S";
_wep = [
"NOR_HK416c_MRCO_IR_S",
"NOR_HK416c_MRCO_IR_S",
"NOR_HK416c_MRCO_IR_S_Desert",
"NOR_HK416c_MRCO_IR_S_Wood",
"NOR_C8_MRCO_IR_S",
"NOR_C8_MRCO_IR_S_Desert",
"NOR_C8_MRCO_IR_S_Wood"
];
_count = count _wep;
_this addWeaponGlobal (_wep select floor random _count);
_this selectWeapon primaryWeapon _this;
};
if (primaryweapon _this == "NOR_HK416c_UGL_RCO_IR_S") then {
_this removeweapon "NOR_HK416c_UGL_RCO_IR_S";
_wep = [
"NOR_HK416c_UGL_RCO_IR_S",
"NOR_HK416c_UGL_RCO_IR_S",
"NOR_HK416c_UGL_RCO_IR_S_Desert",
"NOR_HK416c_UGL_RCO_IR_S_Wood",
"NOR_C8_UGL_RCO_IR_S",
"NOR_C8_UGL_RCO_IR_S_Desert",
"NOR_C8_UGL_RCO_IR_S_Wood"
];
_count = count _wep;
_this addWeaponGlobal (_wep select floor random _count);
_this selectWeapon primaryWeapon _this;
};
if (primaryweapon _this == "NOR_HK417_TVS_IR_S") then {
_this removeweapon "NOR_HK417_TVS_IR_S";
_wep = [
"NOR_HK417_TVS_IR_S_Wood",
"NOR_HK417_TVS_IR_S_Desert",
"NOR_HK417_TVS_IR_S",
"NOR_HK417_TVS_IR_S"
];
_count = count _wep;
_this addWeaponGlobal (_wep select floor random _count);
_this selectWeapon primaryWeapon _this;
};
if (primaryweapon _this == "NOR_M249_ACO_IR") then {
_this removeweapon "NOR_M249_ACO_IR";
_wep = [
"NOR_M249_ACO_IR_Desert",
"NOR_M249_ACO_IR_Wood",
"NOR_M249_ACO_IR",
"NOR_M249_ACO_IR"
];
_count = count _wep;
_this addWeaponGlobal (_wep select floor random _count);
_this selectWeapon primaryWeapon _this;
};
}; /* "if (isServer)" END - DO NOT DELETE