class CfgPatches
{
	class NOR_Law
	{
		units[] = {};
		weapons[] = {"NOR_M72_LAW"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","Extended_EventHandlers","mas_weapons"};
	};
};
class Extended_Fired_EventHandlers
{
	class CAManBase
	{
		class NOR_LAW_Fired
		{
			Fired = "if (local (_this select 0)) then {if ((_this select 1) in ['NOR_M72_LAW']) then {_this execVM ""\NOR_Law\functions\fn_replaceATWeapon.sqf""}}";
		};
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class NOR_LAW_Init
		{
			clientInit = "_this execVM ""\NOR_Law\functions\fn_LawRocket.sqf""";
		};
	};
};
class CfgWeapons
{
	class launch_RPG32_F;
	class NOR_M72_LAW: launch_RPG32_F
	{
		aiRateOfFire = 7;
		aiRateOfFireDistance = 200;
		cameraDir = "look";
		canLock = 0;
		displayName = "$STR_NOR_M72_LAW_Name";
		descriptionShort = "Light Anti-tank Weapon";
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\mas_ru_rifle\anim\Handanim_rpg18.rtm"};
		lockAcquire = 0;
		magazines[] = {"NOR_M72_LAW_R"};
		maxRange = 210;
		maxRangeProbab = 0.1;
		midRange = 150;
		midRangeProbab = 0.8;
		minRange = 20;
		minRangeProbab = 0.3;
		model = "\mas_ru_rifle\rpg18.p3d";
		modelOptics = "-";
		optics = 1;
		muzzles[] = {"this"};
		opticsZoomInit = 1.005;
		opticsZoomMax = 1.02;
		opticsZoomMin = 1.01;
		picture = "\mas_ru_rifle\ui\gear_rpg18_x_ca.paa";
		recoil = "recoil_single_law";
		reloadAction = "ReloadRPG";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};
		scope = 2;
		sound[] = {"\NOR_Law\sounds\ATLaunch.wav",10,1,800};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 3;
		weaponSoundEffect = "DefaultRifle";
		class GunParticles
		{
			class Effect1
			{
				directionName = "Usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
				positionName = "Konec hlavne";
			};
			class Effect2
			{
				directionName = "Usti hlavne";
				effectName = "CannonFiredDust";
				positionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo
		{
			allowedslots[] = {801,901};
			mass = 90;
		};
		class OpticsModes
		{
			class optic
			{
				cameraDir = "look";
				distanceZoomMax = 300;
				distanceZoomMin = 10;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				optics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG"};
			};
		};
	};
	class NOR_M72_LAW_Used: NOR_M72_LAW
	{
		displayName = "$STR_NOR_M72_LAW_Used_Name";
		descriptionShort = "$STR_NOR_M72_LAW_Used_Description";
		magazines[] = {"NOR_M72_LAW_UsedTube"};
		picture = "\mas_ru_rifle\ui\gear_rpg18_x_ca.paa";
		model = "\mas_ru_rifle\rpg18_loaded.p3d";
		class WeaponSlotsInfo
		{
			allowedslots[] = {801,901};
			mass = 30;
		};
	};
};
class CfgMagazines
{
	class RPG32_F;
	class NOR_M72_LAW_R: RPG32_F
	{
		allowedSlots[] = {801,701,901};
		ammo = "NOR_M72_LAW_R_R";
		displayname = "$STR_NOR_M72_LAW_R_Name1";
		descriptionshort = "$STR_NOR_M72_LAW_R_Description";
		displayNameShort = "$STR_NOR_M72_LAW_R_Name2";
		mass = 0;
		model = "\mas_us_rifle\M136_ammo.p3d";
		modelSpecial = "\mas_ru_rifle\rpg18_loaded.p3d";
		initSpeed = 90;
		picture = "\mas_ru_rifle\ui\gear_rpg18_rocket_ca.paa";
	};
	class NOR_M72_LAW_UsedTube: RPG32_F
	{
		displayname = "$STR_NOR_M72_LAW_Used_Name";
		descriptionshort = "$STR_NOR_M72_LAW_Used_Description";
		count = 0;
		displayNameShort = "-";
		modelSpecial = "";
	};
};
class CfgAmmo
{
	class R_TBG32V_F;
	class NOR_M72_LAW_R_R: R_TBG32V_F
	{
		displayname = "$STR_NOR_M72_LAW_R_Name1";
		descriptionshort = "";
		hit = 400;
		indirectHit = 10;
		indirectHitRange = 10;
		timeToLive = 6;
		explosioneffects = "ExploAmmoExplosion";
		airFriction = 0.55;
		maxSpeed = 115;
		thrustTime = 0.2;
		thrust = -165;
		initTime = 0.95;
	};
};
class NOR_LAW_RPGFired
{
	class CannonFired
	{
		intensity = 0.2;
		interval = 0.2;
		lifeTime = 0.06;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CannonFired2";
	};
	class CannonFiredDust
	{
		intensity = 0.2;
		interval = 0.2;
		lifeTime = 0.4;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CircleDustTankSmall";
	};
};