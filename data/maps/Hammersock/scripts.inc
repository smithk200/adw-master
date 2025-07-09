Hammersock_MapScripts::
	.byte 0

Hammersock_Event_Script_Gym_Sign::
	lock
	goto_if_set FLAG_BADGE07_GET, Hammersock_Event_Script_Gym_Sign_Raihan
	msgbox Hammersock_Text_Gym_Sign, MSGBOX_DEFAULT
	release
	end

Hammersock_Text_Gym_Sign::
	.string "Hammersock Pokémon Gym$"

Hammersock_Event_Script_Gym_Sign_Raihan::
		.string "Hammersock Pokémon Gym\n"
		.string "Leader: Raihan\p"
		.string "The master of Dragon-types!$"