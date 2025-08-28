ElwoodCityGym_MapScripts::
	.byte 0

ElwoodCityGym_EventScriptChip::
	trainerbattle_single TRAINER_CHIP, ElwoodCityGym_Text_ChipIntro, ElwoodCityGym_Text_ChipDefeat
	msgbox ElwoodCityGym_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
	end

ElwoodCityGym_EventScriptDusty::
	trainerbattle_single TRAINER_DUSTY, ElwoodCityGym_Text_DustyIntro, ElwoodCityGym_Text_DustyDefeat
	msgbox ElwoodCityGym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end

ElwoodCityGym_EventScriptRocky::
	trainerbattle_single TRAINER_ROCKY, ElwoodCityGym_Text_RockyIntro, ElwoodCityGym_Text_RockyDefeat
	setflag FLAG_BADGE01_GET
	msgbox ElwoodCityGym_Text_RockyPostBattle, MSGBOX_AUTOCLOSE
	end

ElwoodCityGym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, ElwoodCityGym_EventScript_GymStatueCertified
	goto ElwoodCityGym_EventScript_GymStatue
	end

ElwoodCityGym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, ElwoodCityGym_EventScript_GymStatueCertified
	goto ElwoodCityGym_EventScript_GymStatue
	end

ElwoodCityGym_EventScript_GymStatueCertified::
	msgbox ElwoodCityGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

ElwoodCityGym_EventScript_GymStatue::
	msgbox ElwoodCityGym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end
	
ElwoodCityGym_Text_DustyIntro:
	.string "Whoa there! You can't just waltz in\n"
	.string "and try to beat Rocky like that!\p"
	.string "You have to go through me first!$"

ElwoodCityGym_Text_DustyDefeat:
	.string "Waah! I couldn't beat you!$"

ElwoodCityGym_Text_DustyPostBattle:
	.string "Rocky watches trainers battle for\n"
	.string "hours just so he can learn strategies\l"
	.string "that he can use in his battles.$"

ElwoodCityGym_Text_ChipIntro:
	.string "You think you got off easy?\p"
	.string "These rock-solid Pokémon come\n"
	.string "straight from Tate and Liza themselves!$"

ElwoodCityGym_Text_ChipDefeat:
	.string "WHAT?!? These Pokémon were a dud!$"

ElwoodCityGym_Text_ChipPostBattle:
	.string "You better watch out for Rocky!\n"
	.string "He's even tougher than me!$"

ElwoodCityGym_Text_RockyIntro:
	.string "Hi there! I'm Rocky!\n"
	.string "I'm the gym leader here!\p"
	.string "Your Pokémon will find this battle\n"
	.string "very hard! Tough as granite!\p"
	.string "You know how I’m going to win?\n"
	.string "My rock-hard determination!\p"
	.string "Hahaha!\p"
	.string "My Pokémon are BOULDER than yours!\p"
	.string "So brace yourself… you're about to face\n"
	.string "the hardest fight of your life…\l"
	.string "and I mean that literally!\p"
	.string "Let’s ROCK!!!$"

ElwoodCityGym_Text_RockyDefeat:
	.string "Waah! Why did I pick the Rock type?\p"
	.string "I took you for granite…\n"
	.string "and I lost!\p"
	.string "I will give you the gym badge now,\n"
	.string "'cause I lost, you know…$"

ElwoodCityGym_Text_RockyPostBattle:
	.string "I'm just the first of what you will\n"
	.string "face of the Gym League.\p"
	.string "All the other Gym Leaders\n"
	.string "are stronger than me!$"

ElwoodCityGym_Text_GymStatue:
	.string "Elwood City Pokémon Gym\p"
	.string "Certified Trainers:\n"
	.string "Fry, Matt Walsh$"

ElwoodCityGym_Text_GymStatueCertified:
	.string "Elwood City Pokémon Gym\p"
	.string "Certified Trainers:\n"
	.string "Fry, Matt Walsh, {PLAYER}$"