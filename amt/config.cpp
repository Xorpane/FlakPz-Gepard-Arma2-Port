class CfgPatches
{
	class AMT
	{
		units[]=
		{
			"AMT_Gepard",
			"amt_gepard_win",
			"amt_gepard_des"
		};
		weapons[]=
		{
			"35mmGepard"
		};
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		fileName="AMT.pbo";
		author[]=
		{
			"Frankyman, Notcor"
		};
	};
};
class CommanderTurret;
class BaseTurret;
class WeaponFireGun;
class WeaponFireMGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class DefaultEventhandlers;
//Declare The Faction (BWA3)
class CfgFactionClasses
{
	class BWA3_Faction
	{
		icon="\bwa3_units\data\bwa3_faction_icon.paa";
		displayName="Bundeswehr";
		priority=5;
		side=1;
	};
};
//Declare The Vehicleclass (Kettenfahrzeuge)
class CfgVehicleClasses
{
	class BW_VehClass_Kettenfahrzeuge_Fleck
	{
		displayName="Kettenfahrzeuge (Flecktarn)";
	};
	class BW_VehClass_Kettenfahrzeuge_Tropen
	{
		displayName="Kettenfahrzeuge (Tropentarn)";
	};
	class BW_VehClass_Kettenfahrzeuge_Winter
	{
		displayName="Kettenfahrzeuge (Winter)";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class VehicleMagazine;
	class 640Rnd_35mmAA_Gepard: VehicleMagazine
	{
		ammo="B_35mm_FAPDS";
		count=640;
		displayName="B_35mm_FAPDS";
		initSpeed=1770;
		maxLeadSpeed=800;
		tracersEvery=1;
		lastRoundsTracer=0;
	};
};
class CfgWeapons
{
	class CannonCore;
	class autocannon_35mm;
	class 35mmGepard: autocannon_35mm
	{
		scope=1;
		displayName="35mm Gepard";
		nameSound="cannon";
		magazines[]=
		{
			"640Rnd_35mmAA_Gepard"
		};
		magazineReloadTime=240;
		multiplier=1;
		reloadTime=0.098999999;
		autoFire=0;
		canLock=2;
		irLock=0;
		airLock=1;
		laserLock=0;
		nvlock=1;
		ballisticsComputer=1;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		soundContinuous="false";
		dispersion=0.00019999999;
		cursorAim="mg";
		cursor="EmptyCursor";
		cursorSize=0.89999998;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		soundBurst=1;
		dexterity=6;
		initspeed=1470;
		showToPlayer=1;
		burst=8;
		aiRateOfFire=1.5;
		aiRateOfFireDistance=1200;
		minRange=10;
		minRangeProbab=1;
		midRange=1200;
		midRangeProbab=1;
		maxRange=3000;
		maxRangeProbab=1;
		class gunParticles
        {
            class effect1 
            {
                positionName = "gun1dir";
                directionName = "gun1";
                effectName = "AutoCannonFired";
            };
            class effect2
            {
                positionName = "gun2dir";
                directionName = "gun2";
                effectName = "AutoCannonFired";
            };
			class Sheels_1
			{
				positionName = "35mmspawn";
                directionName = "pos gunner";
                effectName = "HeavyGunCartridge1";
			};
			class Sheels_2
			{
				positionName = "35mmspawn1";
                directionName = "pos gunner dir";
                effectName = "HeavyGunCartridge1";
			};
			class Sheels_ext_smoke_r
			{
				positionName = "smoke_exhaust_r1";
                directionName = "smoke_exhaust_r1";
                effectName = "MachineGun1";
			};
			class Sheels_ext_smoke_l
			{
				positionName = "smoke_exhaust_l1";
                directionName = "smoke_exhaust_l1";
                effectName = "MachineGun1";
			};
       };
		class manual: CannonCore
		{
			displayName="35mm Gepard";
			autoFire=0;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\amt_sound\35mm_2_17",
					1.7782794,
					1,
					2000
				};
				begin2[]=
				{
					"\amt_sound\35mm_2_17",
					1.7782794,
					1,
					2000
				};
				begin3[]=
				{
					"\amt_sound\35mm_2_17",
					1.7782794,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					33,
					"begin2",
					33,
					"begin3",
					33
				};
			};
			initspeed=1470;
			reloadTime=0.098999999;
			dispersion=1.9999999e-005;
			multiplier=1;
			showToPlayer=1;
			burst=8;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.80000001;
			midRange=2;
			midRangeProbab=1;
			maxRange=3;
			maxRangeProbab=0.80000001;
		};
		class close: manual
		{
			showToPlayer=0;
			soundBurst=1;
			burst=8;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=20;
			minRangeProbab=0.80000001;
			midRange=600;
			midRangeProbab=1;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=600;
			minRangeProbab=0.80000001;
			midRange=1200;
			midRangeProbab=1;
			maxRange=1800;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			burst=8;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=1200;
			minRangeProbab=0.80000001;
			midRange=2000;
			midRangeProbab=1;
			maxRange=2400;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			burst=8;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=2400;
			minRangeProbab=0.80000001;
			midRange=2800;
			midRangeProbab=1;
			maxRange=3000;
			maxRangeProbab=0.80000001;
		};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
		class Sounds;
	};
	class Tank: LandVehicle
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
			class Turrets;
		};
		driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
		commanderCanSee=31;
		gunnerCanSee=30;
		getInAction="GetInMedium";
		getOutAction="GetOutMedium";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		audible=18;
		sensitivityEar="0.0075 /3";
		armorStructural=2;
		class AnimationSources;
		class HitPoints
		{
			class HitHull
			{
				armor=1;
				material=-1;
				name="NEtelo";
				visual="telo";
				passThrough=1;
			};
			class HitLTrack
			{
				armor=0.15000001;
				material=-1;
				name="pas_L";
				visual="pas_L";
				passThrough=0.30000001;
			};
			class HitRTrack
			{
				armor=0.15000001;
				material=-1;
				name="pas_P";
				visual="pas_P";
				passThrough=0.30000001;
			};
			class HitEngine
			{
				armor=0.34999999;
				material=-1;
				name="motor";
				visual="motor";
				passThrough=0.2;
			};
		};
		weapons[]={};
		magazines[]={};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerAction="apctracked2_slot1_out";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel="";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				viewGunnerInExternal=0;
				primaryGunner=1;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				gunnerOutOpticsEffect[]={};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=1;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						visual="zbran";
						passThrough=0;
					};
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType="CPCommander";
						proxyIndex=1;
						gunnerName="$STR_POSITION_COMMANDER";
						primaryGunner=0;
						primaryObserver=1;
						stabilizedInAxes="StabilizedInAxesNone";
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						animationSourceHatch="hatchCommander";
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						gunBeg="";
						gunEnd="";
						minElev=-4;
						maxElev=20;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						commanding=2;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						viewGunnerInExternal=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_OPFOR_F";
						gunnerOutOpticsModel="";
						gunnerOutOpticsColor[]={0,0,0,1};
						gunnerOutForceOptics=0;
						gunnerOutOpticsShowCursor=0;
						gunnerOpticsEffect[]={};
						gunnerOutOpticsEffect[]={};
						memoryPointGunnerOutOptics="commander_weapon_view";
						memoryPointGunnerOptics="commanderview";
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						memoryPointGun="gun_muzzle";
						selectionFireAnim="zasleh_1";
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.0625;
							maxFov=0.46599999;
						};
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
					};
				};
			};
		};
		soundDammage[]=
		{
			"\amt_sound\alarm_loop1",
			0.00031622799,
			1
		};
		supplyRadius=1.5;
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.46599999;
			minFov=0.46599999;
			maxFov=0.46599999;
		};
		class Eventhandlers: DefaultEventhandlers
		{
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=15;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
	};

	class Wreck;
	class ReammoBox;
	class FlagCarrier;
	class amt_gepard: Tank
	{
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=1;
		tBody=250;
		scope=2;
		side=1;
		faction="BWA3_Faction";
		displayname="Gepard 1A2";
		displayNameShort="Gepard";
		Author = "Frankyman & Xorpane";
		vehicleClass="BW_VehClass_Kettenfahrzeuge_Fleck";
		model="\amt_gepard\amt_gepard.p3d";
		picture="\amt_gepard\data\Gepard_UI_ca.paa";
		icon="\amt_gepard\data\gepard_ico_ca.paa";
		selectionLeftOffset="track left";
		selectionRightOffset="track right";
		radarType=4;
		mapSize=8;
		maxSpeed=65;
		fuelCapacity=500;
		cost=2000000;
		wheelCircumference=2.01;
		armorStructural=1.25;
		armor=400;
		damageResistance=0.027109999;
		forceHideDriver=1;
		unitInfoType="UnitInfotank";
		alphaTracks=0.69999999;
		textureTrackWheel=0;
		memoryPointTrack1L="Stopa LL";
		memoryPointTrack1R="Stopa LR";
		memoryPointTrack2L="Stopa RL";
		memoryPointTrack2R="Stopa RR";
		class HitPoints: HitPoints
		{
			class HitLTrack
			{
				armor=0.60000002;
				material=-1;
				name="track left";
				visual="track left";
				passThrough=0.40000001;
				minimalHit=0.02;
			};
			class HitRTrack
			{
				armor=0.60000002;
				material=-1;
				name="track right";
				visual="track right";
				passThrough=0.40000001;
				minimalHit=0.02;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				visual="motor";
				passThrough=0.89999998;
				minimalHit=0.0125;
			};
			class Hitradar1
			{
				armor=0.69999999;
				material=-1;
				name="radarbighide";
				visual="radarbighide";
				passThrough=0.30000001;
				minimalHit=0.0125;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="telo";
				visual="telo";
				passThrough=1;
				minimalHit=0.025;
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="35mmGepard";
			};
			class Hitradar1
			{
				source="Hit";
				hitpoint="Hitradar1";
			};
			class tarnnetz
			{
				source="user";
				animperiod=1;
			};
		};
		class UserActions
		{
			class tarnen
			{
				displayName="Fahrzeug tarnen";
				position="tarnung01";
				radius=3;
				condition="this animationPhase ""tarnen"" == 1";
				statement="this animate [""tarnen"",0];this animate [""tarnen01"",0];this animate [""tarnen02"",0];this animate [""tarnen03"",0]";
				onlyForPlayer=0;
			};
			class enttarnen
			{
				displayName="Fahrzeug enttarnen";
				position="tarnung01";
				radius=3;
				condition="this animationPhase ""tarnen"" == 0";
				statement="this animate [""tarnen"",1];this animate [""tarnen01"",1];this animate [""tarnen02"",1];this animate [""tarnen03"",1]";
				onlyForPlayer=0;
			};
		};
		class Library
		{
			libTextDesc="gepard";
		};
		crew="BWA3_Crew_Fleck";
		typicalCargo[]=
		{
			"BWA3_Crew_Fleck",
			"BWA3_Crew_Fleck",
			"BWA3_Crew_Fleck"
		};
		transportSoldier=0;
		commandercansee="1+2+4+8+16";
		drivercansee="2+4+8+16";
		gunnerCanSee="1+16+4+8";
		extCameraPosition[]={0,2,-10};
		driverAction= "crew_tank01_out";
		driverInAction= "crew_tank01_in";
		driverForceOptics=1;
		accuracy=0.30000001;
		threat[]={1,1,1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//FFA
				personTurretAction="vehicle_turnout_2";
				isPersonTurret=1;
				
				
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.17782794,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.17782794,
					1,
					30
				};
				forceHideGunner=0;
				minElev=-5;
				maxElev=87;
				animationSourceBody="mainturret";
				animationSourceGun="maingun";
				shotfromturret="false";
				memoryPointGun[]=
				{
					"gun1",
					"gun2"
				};
				gunBeg="gunbegin";
				gunEnd="gunend";
				weapons[]=
				{
					"35mmGepard"
				};
				magazines[]=
				{
					"640Rnd_35mmAA_Gepard"
				};
				gunnerAction="apctracked2_slot1_out";
				gunnerInAction="apctracked2_slot1_in";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				ingunnermayfire=1;
				outGunnerMayFire=0;
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1200,1400,1600,2000,2400,2800};
				discreteDistanceInitIndex=9;
				maxHorizontalRotSpeed=6;
				maxVerticalRotSpeed=6;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.69999999;
						material=52;
						name="mainturret";
						visual="mainturret";
						passThrough=1;
						minimalHit=0.02;
					};
					class HitGun
					{
						armor=0.69999999;
						material=-1;
						name="maingun";
						visual="maingun";
						passThrough=0.30000001;
						minimalHit=0.013;
					};
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.2;
					minFov=0.015;
					maxFov=0.34999999;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6,7};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding=2;
						ingunnermayfire=1;
						outGunnerMayFire=0;
						ace_sys_nvg_nvrange=570;
						gunBeg="gun_muzzle";
						gunEnd="gun_chamber";
						body="ObsTurret";
						gun="ObsGun";
						memoryPointsGetInGunner="pos gunner";
						memoryPointsGetInGunnerDir="pos gunner dir";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_OPFOR_F";
						gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsEffect[]={};
						gunnerAction="crew_tank01_out";
						gunnerInAction="crew_tank01_in";
						minElev=0;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						startengine=0;
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
						stabilizedInAxes="StabilizedInAxesBoth";
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.30000001;
							minFov=0.015;
							maxFov=0.30000001;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={0,1};
						};
						//FFA
						personTurretAction="vehicle_turnout_2";
						isPersonTurret=1;
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="Exhaust_Source";
				direction="Exhaust_Target";
				effect="ExhaustsEffectBig";
			};
			class Exhaust
			{
				position="2Exhaust_Source";
				direction="2Exhaust_Target";
				effect="ExhaustsEffectBig";
			};
		};
		insideSoundCoef=0.89999998;
		soundCrash[]=
		{
			"\ca\Tracked\Data\Sound\crash1",
			10,
			1
		};
		soundGear[]=
		{
			"",
			5.6234101e-005,
			1
		};
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",
			1,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[]=
				{
					"\amt_sound\int\int-tracked-acce-02",
					1,
					1
				};
				limit=0.15000001;
				expression="engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[]=
				{
					"\amt_sound\int\int-tracked-acce-02",
					1,
					1,
					700
				};
				limit=0.15000001;
				expression="engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"\AMT_sound\engineGEP.wss",
					1.58489,
					1,
					1000
				};
				frequency="(randomizer*0.05+0.8)*rpm";
				volume="engineOn*camPos*(rpm factor[0.6, 0.9])";
			};
			class IdleOut
			{
				sound[]=
				{
					"\AMT_sound\engine_idle_int.wss",
					0.707946,
					1,
					400
				};
				frequency="1";
				volume="engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"\amt_sound\ext\noise2",
					1,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class Movement
			{
				sound[]=
				{
					"",
					1,
					1
				};
				frequency="0";
				volume="0";
			};
			class EngineIn
			{
				sound[]=
				{
					"\amt_sound\int\int-tracked-engine-02",
					1,
					1
				};
				frequency="(randomizer*0.05+0.8)*rpm";
				volume="engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[]=
				{
					"\amt_sound\int\int-tracked-idle-02",
					0.707946,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					3.1622777,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
		};
		selectionBackLights="brzdove svetlo";
		class Reflectors
		{
			class Left
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="headlight left pos";
				direction="headlight left dir";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=0.5;
			};
			class Right
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="headLight right pos";
				direction="headLight right dir";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		irScanRangeMin=5000;
		irScanRangeMax=10000;
		irScanToEyeFactor=5;
		irScanGround=1;
		hiddenSelections[]=
		{
			"tex1",
			"tex2",
			"tex3",
			"tex4",
			"clan",
			"clan_sign"
		};
		hiddenSelectionsTextures[]=
		{
			"AMT_gepard\data\wanne_co.paa",
			"AMT_gepard\data\turm_co.paa",
			"AMT_gepard\data\wannetarn_co.paa",
			"AMT_gepard\data\kanonetarn_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"AMT_gepard\karrosse.rvmat",
				"AMT_gepard\karrosse_dam.rvmat",
				"AMT_gepard\karrosse_des.rvmat",
				"AMT_gepard\turm.rvmat",
				"AMT_gepard\turm_dam.rvmat",
				"AMT_gepard\turm_des.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kette.rvmat",
				"AMT_gepard\kette_dam.rvmat",
				"AMT_gepard\kette_des.rvmat"
			};
		};
	};
	class amt_gepard_win: amt_gepard
	{
		displayname="Gepard 1A2 winter";
		displayNameShort="Gepard";
		vehicleClass="BW_VehClass_Kettenfahrzeuge_Winter";
		hiddenSelections[]=
		{
			"tex1",
			"tex2",
			"tex3",
			"tex4",
			"clan",
			"clan_sign"
		};
		hiddenSelectionsTextures[]=
		{
			"AMT_gepard\winter\wanne_co.paa",
			"AMT_gepard\winter\turm_co.paa",
			"AMT_gepard\winter\wannetarn_co.paa",
			"AMT_gepard\winter\kanonetarn_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"AMT_gepard\karrosse.rvmat",
				"AMT_gepard\karrosse_dam.rvmat",
				"AMT_gepard\karrosse_des.rvmat",
				"AMT_gepard\turm.rvmat",
				"AMT_gepard\turm_dam.rvmat",
				"AMT_gepard\turm_des.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kette.rvmat",
				"AMT_gepard\kette_dam.rvmat",
				"AMT_gepard\kette_des.rvmat"
			};
		};
	};
	class amt_gepard_des: amt_gepard
	{
		displayname="Gepard 1A2 Desert";
		displayNameShort="Gepard";
		vehicleClass="BW_VehClass_Kettenfahrzeuge_Tropen";
		hiddenSelections[]=
		{
			"tex1",
			"tex2",
			"tex3",
			"tex4",
			"clan",
			"clan_sign"
		};
		hiddenSelectionsTextures[]=
		{
			"AMT_gepard\desert\wanne_co.paa",
			"AMT_gepard\desert\turm_co.paa",
			"AMT_gepard\desert\wannetarn_co.paa",
			"AMT_gepard\desert\kanonetarn_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"AMT_gepard\karrosse.rvmat",
				"AMT_gepard\karrosse_dam.rvmat",
				"AMT_gepard\karrosse_des.rvmat",
				"AMT_gepard\turm.rvmat",
				"AMT_gepard\turm_dam.rvmat",
				"AMT_gepard\turm_des.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\wanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kanTarn.rvmat",
				"AMT_gepard\kette.rvmat",
				"AMT_gepard\kette_dam.rvmat",
				"AMT_gepard\kette_des.rvmat"
			};
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class B_35mm_AA; 
	class B_35mm_FAPDS: B_35mm_AA 
	{
		dispersion=1e-006;
		timeToLive=12;
		hit=105;
		indirectHit=80;
		indirectHitRange=10;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=5;
		explosive=0.34999999;
		cost=800;
		typicalSpeed=1770;
		trackLead=1;
		canLock=2;
		irLock=0;
		airLock=1;
		laserLock=0;
		nvLock=1;
		whistleOnFire=1;
		whistleDist=14;
		tracerScale=2;
		tracerStartTime=0.090000004;
		tracerEndTime=2;
		airFriction=-3.9999999e-005;
		muzzleEffect="geppiFireFX";
		caliber=4.3899999;
	};
};

