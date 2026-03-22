.equ LOCALID_MATT_WALSH, 5

Route8_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route8_EventScript_OnFrame
	.byte 0

Route8_EventScript_OnFrame::
	map_script_2 VAR_TEMP_1, 0, Route8_EventScript_MattWalshEncounter
	.2byte 0

Route8_EventScript_MattWalshEncounter::
	goto_if_set FLAG_HIDE_MATT_WALSH_ROUTE_8, Route1Hammersock_Connection_PhilipJFryIsNotThere
	goto_if_set FLAG_DEFEATED_MATT_WALSH_ROUTE_8, Route1Hammersock_Connection_PhilipJFryIsNotThere
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	delay 30
	msgbox Route8_TextMattWalshIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MATT_WALSH_ROUTE_8, Route8_TextMattWalshDefeat
	setflag FLAG_DEFEATED_MATT_WALSH_ROUTE_8
	msgbox Route8_TextMattWalshPostBattle, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	closemessage
	msgbox Route8_TextMattWalshPartingSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT_WALSH, Route8_Movement_MattWalshLeaves
	waitmovement 0
	setflag FLAG_HIDE_MATT_WALSH_ROUTE_8
	removeobject LOCALID_MATT_WALSH
	end

Route8_Movement_MattWalshLeaves::
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route8_EventScript_Sign_CheekyWakaHotel::
	msgbox Route8_Text_CheekyWakaHotel, MSGBOX_AUTOCLOSE
	end

Route8_Text_CheekyWakaHotel:
	.string "Cheeky Waka Hotel\p"
	.string "“Have a WHALE of a time at our\n"
	.string "super-awesome cheeky luxury resort!”$"

Route8_TextMattWalshIntro:
	.string "Oh, it's you again.\n"
	.string "Aren't you from the Gofuckyourself\l"
	.string "Woods?\p"
	.string "Well, in any case, I've heard… things\n"
	.string "about Team Ass's plans at Mt. Tlmp.\p"
	.string "Something about marijuana and the\n"
	.string "legendary Pokémon Rayquaza?\p"
	.string "Anyways, no need to make\n"
	.string "overgeneralized speculations about\l"
	.string "Team Ass's plans.\p"
	.string "They'll never come to fruitition anyway.\p"
	.string "Let me test my strength against you\n"
	.string "before heading to Mt. Tlmp myself!$"

Route8_TextMattWalshDefeat:
	.string "Hah, you haven't beaten me at my\n"
	.string "full power yet.$"

Route8_TextMattWalshPostBattle:
	.string "Lemme tell you… it's tough out\n"
	.string "there.\p"
	.string "Yes, even “tougher” than that idiot\n"
	.string "of a Gym Leader back in Washington\l"
	.string "City.\p"
	.string "What was his name, Joe.\n"
	.string "What a loser.\p"
	.string "Anyways, I'm here to give you\n"
	.string "something to help you out.\p"
	.string "It's helped me, and I'm sure it\n"
	.string "will help you too.$"

Route8_TextMattWalshPartingSpeech:
	.string "Team Ass! What a name!\n"
	.string "What a bunch of losers!\p"
	.string "I'm sure that you can handle them\n"
	.string "with ease.\p"
	.string "I'm going to Mt. Tlmp to give\n"
	.string "them a REAL challenge.\p"
	.string "Showing them that Pokémon battling\n"
	.string "isn't about the colors of the rainbow!\p"
	.string "I'm sure I'll run into you on Mt. Tlmp.$"