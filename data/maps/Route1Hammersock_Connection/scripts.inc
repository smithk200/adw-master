.equ LOCALID_FRY,  1

Route1Hammersock_Connection_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route1Hammersock_Connection_OnFrame
	.byte 0

Route1Hammersock_Connection_OnFrame::
	.2byte 0

Route1Hammersock_Connection_PhilipJFryIntro::
	goto_if_set FLAG_DEFEATED_FRY_ROUTE1_HAMMERSOCK, Route1Hammersock_Connection_PhilipJFryExit
	addobject LOCALID_FRY
	trainerbattle_single TRAINER_FRY_ROUTE1_HAMMERSOCK, Route1Hammersock_Connection_TextPhilipJFryIntro, Route1Hammersock_Connection_TextPhilipJFryDefeat
	setflag FLAG_DEFEATED_FRY_ROUTE1_HAMMERSOCK
	releaseall
	end

Route1Hammersock_Connection_PhilipJFryExit::
	goto_if_set FLAG_HIDE_FRY_ROUTE1_HAMMERSOCK, Route1Hammersock_Connection_PhilipJFryIsNotThere
	setvar VAR_ROUTE_1_HAMMERSOCK_CONNECTION_STATE, 1
	msgbox Route1Hammersock_Connection_TextPhilipJFryPostBattle, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Route1Hammersock_Connection_PlayerGetsPushedAsideByFry
	applymovement LOCALID_FRY, Route1Hammersock_Connection_FryPushesPlayerAside
	waitmovement 0
	setflag FLAG_HIDE_FRY_ROUTE1_HAMMERSOCK
	removeobject LOCALID_FRY
	msgbox Route1Hammersock_Connection_TextFryDroppedTheMasterBall, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL
	releaseall
	end

Route1Hammersock_Connection_PhilipJFryIsNotThere::
	releaseall
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

Route1Hammersock_Connection_PlayerGetsPushedAsideByFry::
	slide_left
	step_end

Route1Hammersock_Connection_FryPushesPlayerAside::
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

Route1Hammersock_Connection_TextFryDroppedTheMasterBall::
	.string "Fry dropped a Master Ball on the floor.$"