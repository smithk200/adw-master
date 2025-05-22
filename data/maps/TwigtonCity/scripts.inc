.equ LOCALID_PROF_TWIG,  3

TwigtonCity_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, TwigtonCity_OnLoad
	.byte 0
	

TwigtonCity_OnLoad::
	setflag FLAG_HIDE_TWIG_IN_HIS_CITY
	end

TwigtonCity_EventScriptMomsHouse::
	msgbox TwigtonCity_TextMomsHouse, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptNedsHouse::
	msgbox TwigtonCity_TextNedsHouse, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptThePowerOfScience::
	lock
	faceplayer
	msgbox TwigtonCity_TextThePowerOfScienceIsStaggering, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptSmellsLikeTeenSpirit::
	lock
	faceplayer
	msgbox TwigtonCity_TextSmellsLikeTeenSpirit, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptMomsHouse_DoNotEnter::
	lock
	faceplayer
	msgbox TwigtonCity_TextMomsHouse_DoNotEnter, MSGBOX_DEFAULT
	release
	end

TwigtonCity_TriggerWhatAreYouDoing_Left_Test::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCityitsnottimetogetyourpokemonyet
	end

TwigtonCityitsnottimetogetyourpokemonyet::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	release
	end

TwigtonCity_TriggerWhatAreYouDoing_Left::
	lockall
	setvar VAR_TEMP_1, 0
	goto TwigtonCity_EventScript_TwigTrigger
	end

TwigtonCity_TriggerWhatAreYouDoing_Right::
	lockall
	setvar VAR_TEMP_1, 0
	goto TwigtonCity_EventScript_TwigTrigger
	end

TwigtonCity_EventScript_TwigTrigger::
	delay 15
	message TwigtonCity_Text_WhatAreYouDoing
	waitmessage
	delay 40
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	addobject LOCALID_PROF_TWIG
	call_if_eq VAR_TEMP_1, 0, TwigtonCity_EventScript_TwigEnterLeft
	call_if_eq VAR_TEMP_1, 1, TwigtonCity_EventScript_TwigEnterRight
	delay 30
	msgbox TwigtonCity_Text_ComeWithMeToGetAPokemon
	closemessage
	delay 30
	call_if_eq VAR_TEMP_1, 0, TwigtonCity_EventScript_TwigLeadPlayerToLabLeft
	call_if_eq VAR_TEMP_1, 1, TwigtonCity_EventScript_TwigLeadPlayerToLabRight
	opendoor 16, 13
	waitdooranim
	applymovement LOCALID_PROF_TWIG, TwigtonCity_Movement_TwigEnterLab
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_Movement_TwigEnterLab @can prob use the same one
	waitmovement 0
	closedoor 16, 13
	waitdooranim
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 1 @Sets to 1
	clearflag FLAG_HIDE_TWIG_IN_HIS_LAB
	setflag FLAG_HIDE_TWIG_IN_HIS_CITY
	setflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_TWIGTON_CITY_PROFESSOR_TWIGS_LAB, 6, 12
	waitstate
	releaseall
	end

TwigtonCity_EventScript_TwigEnterLeft::
	applymovement LOCALID_PROF_TWIG, TwigtonCity_Movement_TwigEnterLeft
	waitmovement 0
	return

TwigtonCity_EventScript_TwigEnterRight::
	applymovement LOCALID_PROF_TWIG, TwigtonCity_Movement_TwigEnterRight
	waitmovement 0
	return

TwigtonCity_EventScript_TwigLeadPlayerToLabLeft::
	applymovement LOCALID_PROF_TWIG, TwigtonCity_Movement_TwigLeadPlayerToLabLeft
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_Movement_PlayerFollowsTwigToHisLabLeft
	waitmovement 0
	return

TwigtonCity_EventScript_TwigLeadPlayerToLabRight::
	applymovement LOCALID_PROF_TWIG, TwigtonCity_Movement_TwigLeadPlayerToLabRight
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_Movement_PlayerFollowsTwigToHisLabRight
	waitmovement 0
	return

TwigtonCity_Movement_TwigEnterLeft::
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TwigtonCity_Movement_TwigEnterRight::
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

TwigtonCity_Movement_TwigLeadPlayerToLabLeft::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

TwigtonCity_Movement_PlayerFollowsTwigToHisLabLeft::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

TwigtonCity_Movement_TwigLeadPlayerToLabRight::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

TwigtonCity_Movement_PlayerFollowsTwigToHisLabRight::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

TwigtonCity_Movement_TwigEnterLab::
	walk_up
	set_invisible
	step_end

TwigtonCity_TextMomsHouse:
	.string "Mom's House$"

TwigtonCity_TextNedsHouse:
	.string "Ned's House$"

TwigtonCity_TextThePowerOfScienceIsStaggering:
	.string "The power of science is staggering!\p"
	.string "We now have vaccines to counter the\n"
	.string "evil COVID-19 pandemic.\p"
	.string "Some people say they don't even work!$"

TwigtonCity_TextSmellsLikeTeenSpirit:
	.string "Professor Twig is fond of the song\n"
	.string "“Smells Like Teen Spirit” by Nirvana.\p"
	.string "He blasts it all the time in his casinos\n"
	.string "and all over the city.$"

TwigtonCity_TextMomsHouse_DoNotEnter:
	.string "You start to put your fist on the door\n"
	.string "to knock.\p"
	.string "You then realize that your mom will\n"
	.string "probably ground you for life if you\l"
	.string "open this door.$"

TwigtonCity_Text_WhatAreYouDoing:
	.string "Prof. Twig: What are you doing?\p"
	.string "If you don't have a Pokémon, you'll\n"
	.string "have to come to my lab to get one!\p"
	.string "That's a law we have in my\n"
	.string "precious Trigton City!$"

TwigtonCity_Text_ComeWithMeToGetAPokemon:
	.string "Prof. Twig: Come with me to get\n"
	.string "your Pokémon!$"