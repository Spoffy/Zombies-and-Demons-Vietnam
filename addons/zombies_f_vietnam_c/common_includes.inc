
#define DECLARE_ZOMBIE_PARENT_PARENT class HitPoints;

#define DECLARE_ZOMBIE_PARENT 		class HitPoints : HitPoints\
		{\
			class HitFace;\
			class HitNeck;\
			class HitHead;\
			class HitPelvis;\
			class HitAbdomen;\
			class HitDiaphragm;\
			class HitChest;\
			class HitBody;\
			class HitArms;\
			class HitHands;\
			class HitLegs;\
		};

#define ZOMBIE_BASE			threat[]={1,0.5,0.1};\
		icon="\Ryanzombies\icons\zombie1.paa";\
		minHeadTurnAI=-25;\
		maxHeadTurnAI=25;\
		fsmFormation="";\
		fsmDanger="";\
		accuracy=2;\
		camouflage=2;\
		oxygenCapacity=1000000;\
		class HitPoints: HitPoints\
		{\
			class HitFace: HitFace\
			{\
				armor=2;\
				passThrough=0.5;\
			};\
			class HitNeck: HitNeck\
			{\
				armor=5;\
				passThrough=0.5;\
			};\
			class HitHead: HitHead\
			{\
				armor=2;\
				passThrough=0.5;\
			};\
			class HitPelvis: HitPelvis\
			{\
				armor=20;\
				passThrough=0.25;\
			};\
			class HitAbdomen: HitAbdomen\
			{\
				armor=20;\
				passThrough=0.5;\
			};\
			class HitDiaphragm: HitDiaphragm\
			{\
				armor=15;\
				passThrough=0.5;\
			};\
			class HitChest: HitChest\
			{\
				armor=15;\
				passThrough=0.5;\
			};\
			class HitBody: HitBody\
			{\
				armor=1000;\
				passThrough=0.5;\
			};\
			class HitArms: HitArms\
			{\
				armor=20;\
				passThrough=1;\
			};\
			class HitHands: HitHands\
			{\
				armor=25;\
				passThrough=1;\
			};\
			class HitLegs: HitLegs\
			{\
				armor=20;\
				passThrough=1;\
			};\
		};\
		armor=8;\
		armorStructural=20;\
		explosionShielding=0.1;\
		weapons[]=\
		{\
			"Throw",\
			"Put"\
		};\
		respawnWeapons[]=\
		{\
			"Throw",\
			"Put"\
		};

#define MOVES_WALKER moves="CfgRyanZombiesMovesMaleSdrwalker";
#define MOVES_SLOW moves="CfgRyanZombiesMovesMaleSdrSlow";
#define MOVES_SLOW2 moves="CfgRyanZombiesMovesMaleSdrSlow2";
#define MOVES_MEDIUM moves="CfgRyanZombiesMovesMaleSdrMedium";
#define MOVES_FAST moves="CfgRyanZombiesMovesMaleSdr";
#define MOVES_CRAWLER moves="CfgRyanZombiesMovesMaleSdrCrawler";
#define MOVES_SPIDER moves="CfgRyanZombiesMovesMaleSdrSpider";

#define ZOMBIFY_WALKER ZOMBIE_BASE\
	MOVES_WALKER

#define ZOMBIFY_SLOW ZOMBIE_BASE\
	MOVES_SLOW

#define ZOMBIFY_SLOW2 ZOMBIE_BASE\
	MOVES_SLOW2

#define ZOMBIFY_MEDIUM ZOMBIE_BASE\
	MOVES_MEDIUM

#define ZOMBIFY_FAST ZOMBIE_BASE\
	MOVES_FAST

#define ZOMBIFY_CRAWLER ZOMBIE_BASE\
	MOVES_CRAWLER

#define ZOMBIFY_SPIDER ZOMBIE_BASE\
	MOVES_SPIDER