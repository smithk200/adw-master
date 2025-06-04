.equ LOCALID_FRY,  1

Route1Hammersock_Connection_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route1Hammersock_Connection_OnFrame
	.byte 0

Route1Hammersock_Connection_OnFrame::
	map_script_2 VAR_ROUTE_1_HAMMERSOCK_CONNECTION_STATE, 0, Route1Hammersock_Connection_PhilipJFryIntro
	.2byte 0

Route1Hammersock_Connection_PhilipJFryIntro::
	clearflag FLAG_HIDE_FRY_ROUTE1_HAMMERSOCK
	applymovement LOCALID_FRY, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	applymovement LOCALID_FRY, Route1Hammersock_Connection_Movement_PhilipJFry
	waitmovement 0
	delay 30
	trainerbattle_single TRAINER_FRY_ROUTE1_HAMMERSOCK, Route1Hammersock_Connection_TextPhilipJFryIntro, Route1Hammersock_Connection_TextPhilipJFryDefeat
	msgbox Route1Hammersock_Connection_TextPhilipJFryPostBattle, MSGBOX_DEFAULT
	setvar VAR_ROUTE_1_HAMMERSOCK_CONNECTION_STATE, 1
	setflag FLAG_HIDE_FRY_ROUTE1_HAMMERSOCK
	end

Route1Hammersock_Connection_Movement_PhilipJFry:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route1Hammersock_Connection_TextPhilipJFryIntro:
	.string "Hello! I come from the future!\p"
	.string "Professor Farnsworth, the professor\n"
	.string "of the Straightlar region, sent me back\l"
	.string "in time to capture Rayquaza for him.\p"
	.string "There's no more Raquazas in the future.\p"
	.string "Anyways, I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "I've gotta get that\n"
	.string "Rayquaza for Professor Farnsworth!\p"
	.string "AND YOU'RE NOT GONNA STAND IN MY WAY!!!$"

Route1Hammersock_Connection_TextPhilipJFryDefeat:
	.string "Wow, you're a strong Trainer!$"

Route1Hammersock_Connection_TextPhilipJFryPostBattle::
	.string "Anyway, I have to go now.\p"
	.string "I'm going to meet up with the old\n"
	.string "professor of the Straightlar region,\l"
	.string "Professor Rodney Twig!\p"
	.string "See ya!$"