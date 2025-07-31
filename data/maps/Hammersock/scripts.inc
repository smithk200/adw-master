Hammersock_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Hammersock_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Hammersock_OnLoad
	.byte 0

Hammersock_OnLoad::
	setrespawn HEAL_LOCATION_HAMMERSOCK
	end

Hammersock_OnTransition::
	setflag FLAG_VISITED_HAMMERSOCK
	end

Hammersock_Event_Script_CitySign::
	lock
	msgbox Hammersock_Text_CitySign, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Gym_Sign::
	lock
	goto_if_set FLAG_BADGE07_GET, Hammersock_Event_Script_Gym_Sign_Raihan
	msgbox Hammersock_Text_Gym_Sign, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_TrainerClub_Sign::
	lock
	msgbox Hammersock_Text_TrainerClub_Sign, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Gym_Sign_Raihan::
	lock
	msgbox Hammersock_Text_Gym_Sign_Raihan, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_TrainerClubWoman::
	lock
	faceplayer
	msgbox Hammersock_Text_TrainerClubWoman, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Woman1::
	lock
	faceplayer
	msgbox Hammersock_Text_Woman1, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Woman2::
	lock
	faceplayer
	msgbox Hammersock_Text_Woman2, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Man1::
	lock
	faceplayer
	msgbox Hammersock_Text_Man1, MSGBOX_DEFAULT
	release
	end

Hammersock_Event_Script_Boy1::
	lock
	faceplayer
	msgbox Hammersock_Text_Boy1, MSGBOX_DEFAULT
	release
	end

Hammersock_EventScript_WiseSage::
	lock
	faceplayer
	msgbox Hammersock_Text_WiseSage, MSGBOX_DEFAULT
	release
	end

Hammersock_Text_CitySign::
	.string "Hammersock\p"
	.string "An ancient city, full of\n"
	.string "lore and stuff.$"

Hammersock_Text_Gym_Sign::
	.string "Hammersock Pokémon Gym$"

Hammersock_Text_Gym_Sign_Raihan::
	.string "Hammersock Pokémon Gym\n"
	.string "Leader: Raihan\p"
	.string "The master of Dragon-types!$"

Hammersock_Text_TrainerClub_Sign:
	.string "Hammersock Trainers' Club\p"
	.string "A place for dedicated Trainers to\n"
	.string "grind it out!$"

Hammersock_Text_TrainerClubWoman:
	.string "You should check out the\n"
	.string "Trainers' Club here.\p"
	.string "It's home to some dedicated Trainers!$"

Hammersock_Text_Woman1:
	.string "The houses here are amazing!\n"
	.string "Such a vibrant shade of green!$"

Hammersock_Text_Woman2:
	.string "I think cobbled streets are\n"
	.string "the best feature of Hammersock!$"

Hammersock_Text_Man1:
	.string "I wonder who planted these trees\n"
	.string "here? It would most certainly be an\l"
	.string "interesting story!$"

Hammersock_Text_Boy1:
	.string "Weeeee!\n"
	.string "I want to be a Pokémon Trainer someday!\p"
	.string "You need to be 10, and I'm only 8.$"

Hammersock_Text_WiseSage:
	.string "You know how this town came\n"
	.string "to be, dear?\p"
	.string "Years of hard work, sweat, and\n"
	.string "determination.\p"
	.string "If you can work hard, you\n"
	.string "can achieve almost anything.$"