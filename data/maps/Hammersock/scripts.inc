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

Hammersock_Text_TrainerClub_Sign::
	.string "Hammersock Trainers' Club\p"
	.string "A place for dedicated Trainers to\n"
	.string "grind it out!$"