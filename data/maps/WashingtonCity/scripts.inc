.equ LOCALID_FRY, 1

WashingtonCity_MapScripts::
	.byte 0

WashingtonCity_EventScript_FryTrigger::
	goto_if_set FLAG_FRY_WASHINGTON_CITY_SCENE, Common_EventScript_DoNothing
	lockall
	addobject LOCALID_FRY
	clearflag FLAG_HIDE_FRY_WASHINGTON_CITY
	faceplayer
	applymovement OBJ_EVENT_ID_PLAYER, WashingtonCity_Movement_PlayerSetup
	applymovement LOCALID_FRY, WashingtonCity_Movement_FryEnter
	waitmovement 0
	msgbox WashingtonCity_Text_FryIntro
	trainerbattle_no_intro TRAINER_FRY_WASHINGTON_CITY, WashingtonCity_Text_FryDefeat
	msgbox WashingtonCity_Text_FryPostBattle, MSGBOX_AUTOCLOSE
	giveitem ITEM_TM_TRAILBLAZE
	msgbox WashingtonCity_Text_FryExplainTrailblaze, MSGBOX_AUTOCLOSE
	applymovement LOCALID_FRY, WashingtonCity_Movement_FryExit
	applymovement OBJ_EVENT_ID_PLAYER, WashingtonCity_Movement_PlayerGetsPushedByFry
	waitmovement 0
	setflag FLAG_HIDE_FRY_WASHINGTON_CITY
	setflag FLAG_FRY_WASHINGTON_CITY_SCENE
	removeobject LOCALID_FRY
	releaseall
	end

WashingtonCity_EventScript_GymSign::
	lock
	msgbox WashingtonCity_Text_GymSign, MSGBOX_DEFAULT
	release
	end

WashingtonCity_EventScript_Sign_ThrowAwayTrash::
	lock
	msgbox WashingtonCity_Text_ThrowAwayTrashSign, MSGBOX_DEFAULT
	release
	end

WashingtonCity_EventScript_WashingtonCitySign::
	lock
	msgbox WashingtonCity_Text_WashingtonCityDescription, MSGBOX_DEFAULT
	release
	end

Common_EventScript_DoNothing::
	end

WashingtonCity_Movement_PlayerSetup::
	face_left
	emote_exclamation_mark
	step_end

WashingtonCity_Movement_FryEnter::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

WashingtonCity_Movement_PlayerGetsPushedByFry::
	slide_right
	step_end

WashingtonCity_Movement_FryExit::
	walk_up
	step_end

WashingtonCity_Text_FryIntro:
	.string "Hey, {PLAYER}!\n"
	.string "How's the Gym Challenge coming along?\p"
	.string "I made a wrong turn at Mt. Pompous\n"
	.string "and got extremely lost…\p"
	.string "I found a cool Pokémon though!\p"
	.string "Anyways…\p"
	.string "I heard the Gym Leader of this city's\n"
	.string "a president???\p"
	.string "Sounds like he'll be real tough!\p"
	.string "Before you challenge him, {PLAYER},\n"
	.string "you need to prove to me that you're\l"
	.string "worthy of taking him on!$"

WashingtonCity_Text_FryDefeat:
	.string "Wow!\p"
	.string "You're definitely worthy of\n"
	.string "taking the Gym Leader on!$"

WashingtonCity_Text_FryPostBattle:
	.string "Well, I'll challenge the Gym Leader\n"
	.string "myself now.\p"
	.string "He's quite old, so supposedly\n"
	.string "he's very wise.\p"
	.string "I wonder what type of Pokémon he'll use!\p"
	.string "Oh, and {PLAYER}!\p"
	.string "Take this with you!$"

WashingtonCity_Text_FryExplainTrailblaze:
	.string "This TM is Trailblaze.\n"
	.string "It blazes a trail!\p"
	.string "Nah, I'm just kidding.\n"
	.string "It's a Grass-type move that\l"
	.string "boosts your Speed every time\l"
	.string "you use it!\p"
	.string "Put it to good use!\p"
	.string "I still want my Master Ball back…\p"
	.string "Anyways, I've got to challenge\n"
	.string "Gym Leader myself!\p"
	.string "See ya!$"

WashingtonCity_Text_GymSign:
	.string "Washington City Gym\n"
	.string "Leader: Joe\p"
	.string "The elderly, forgetful president!$"

WashingtonCity_Text_ThrowAwayTrashSign:
	.string "Trainer Tips!\p"
	.string "In Washington City, please make\n"
	.string "sure to throw away trash in\l"
	.string "the proper receptacle.\p"
	.string "It's really good for the environment!$"

WashingtonCity_Text_WashingtonCityDescription:
	.string "Washington City\p"
	.string "“The city of impressive politics!”$"