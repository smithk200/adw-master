TwigtonCity_ProfessorTwigsLab_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, TwigtonCity_ProfessorTwigsLab_OnLoad
	.byte 0

TwigtonCity_ProfessorTwigsLab_OnLoad::
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 1, TwigtonCity_ProfessorTwigsLab_EventScript_TwigTellsYouToPickStarterMon
	end

.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
.equ LOCALID_PROF_OAK,        4
.equ LOCALID_GRASSHOLE_BALL,  5
.equ LOCALID_SQUIRTLE_BALL,   6
.equ LOCALID_SCORBUNNY_BALL, 7
.equ LOCALID_RIVAL,           8
.equ LOCALID_POKEDEX_1,       9
.equ LOCALID_POKEDEX_2,       10


@VAR_TWIGTON_CITY_MAP_STATE

TwigtonCity_ProfessorTwigsLab_Trigger_Left::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	release
	end

TwigtonCity_ProfessorTwigsLab_Trigger_Middle::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	release
	end

TwigtonCity_ProfessorTwigsLab_Trigger_Right::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_Twig::
	lock
	faceplayer
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_TwigTellsYouToPickStarterMon::
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_PlayerWalksForwardToGetStarterMon
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 2
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_GrassholeBall::
	lock
	faceplayer
	goto_if_set FLAG_RECIEVED_STARTER, TwigtonCity_ProfessorTwigsLab_EventScript_Twig
	setvar PLAYER_STARTER_NUM, 0
	setvar PLAYER_STARTER_SPECIES, SPECIES_GRASSHOLE
	setvar RIVAL_STARTER_SPECIES, SPECIES_SCORBUNNY
	setvar RIVAL_STARTER_ID, LOCALID_SCORBUNNY_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_SquirtleBall::
	lock
	faceplayer
	goto_if_set FLAG_RECIEVED_STARTER, TwigtonCity_ProfessorTwigsLab_EventScript_Twig
	setvar PLAYER_STARTER_NUM, 1
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
	setvar RIVAL_STARTER_SPECIES, SPECIES_GRASSHOLE
	setvar RIVAL_STARTER_ID, LOCALID_GRASSHOLE_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ScorbunnyBall::
	lock
	faceplayer
	goto_if_set FLAG_RECIEVED_STARTER, TwigtonCity_ProfessorTwigsLab_EventScript_Twig
	setvar PLAYER_STARTER_NUM, 2
	setvar PLAYER_STARTER_SPECIES, SPECIES_SCORBUNNY
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB , 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice::
	waitmovement 0
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	goto_if_eq PLAYER_STARTER_NUM, 0, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmGrasshole
	goto_if_eq PLAYER_STARTER_NUM, 1, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmSquirtle
	goto_if_eq PLAYER_STARTER_NUM, 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmScorbunny
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmGrasshole::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingGrasshole, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TwigtonCity_ProfessorTwigsLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, TwigtonCity_ProfessorTwigsLab_EventScript_DeclinedStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmSquirtle::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingSquirtle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TwigtonCity_ProfessorTwigsLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, TwigtonCity_ProfessorTwigsLab_EventScript_DeclinedStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmScorbunny::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingScorbunny, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TwigtonCity_ProfessorTwigsLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, TwigtonCity_ProfessorTwigsLab_EventScript_DeclinedStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_DeclinedStarter::
	hidemonpic
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ChoseStarter::
	hidemonpic
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThisMonIsBattleReady
	setflag FLAG_SYS_POKEMON_GET
	givemon PLAYER_STARTER_SPECIES, 5
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	message TwigtonCity_ProfessorTwigsLab_Text_ReceivedMonFromTwig
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	setflag FLAG_RECIEVED_STARTER
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
	goto_if_eq VAR_RESULT, NO, TwigtonCity_ProfessorTwigsLab_EventScript_RivalPicksStarter
	end

EventScript_GiveNicknameToStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalPicksStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalPicksStarter::
	closemessage
	goto_if_eq PLAYER_STARTER_NUM, 0, TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToScorbunny
	goto_if_eq PLAYER_STARTER_NUM, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToGrasshole
	goto_if_eq PLAYER_STARTER_NUM, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToSquirtle
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToScorbunny::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToScorbunny
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalTakesStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToSquirtle::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToSquirtle
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalTakesStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalWalksToGrasshole::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToGrasshole
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalTakesStarter
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalTakesStarter::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_RivalIllTakeThisOneThen
	removeobject RIVAL_STARTER_ID
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
	message TwigtonCity_ProfessorTwigsLab_Text_RivalReceivedMonFromTwig
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon::
	message TwigtonCity_ProfessorTwigsLab_Text_YouCantLeaveWithoutAStarter
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_YouCantLeaveWithoutAStarter
	release
	end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToScorbunny::
	walk_right
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToSquirtle::
	walk_right
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToGrasshole::
	walk_right
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_PlayerWalksForwardToGetStarterMon::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_YouCantLeaveWithoutAStarter::
	walk_up
	step_end

TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls:
	.string "Those are Poké Balls!\p"
	.string "Guess what THEY contain?$"

TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingGrasshole:
	.string "This one's Grasshole.\p"
	.string "From the Fochun region and for those who\n"
	.string "don't want a Nintendo-owned Pokémon!$"

TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingSquirtle:
	.string "This one's Squirtle.\p"
	.string "For those who desire a classic\n"
	.string "Pokémon pal from the Kanto region.$"

TwigtonCity_ProfessorTwigsLab_Text_TwigChoosingScorbunny:
	.string "This one's Scorbunny.\p"
	.string "It's from the Galar region, and it\n"
	.string "packs a firey punch!$"

TwigtonCity_ProfessorTwigsLab_Text_ThisMonIsBattleReady:
	.string "This mon is battle ready!$"

TwigtonCity_ProfessorTwigsLab_Text_ReceivedMonFromTwig::
    .string "{PLAYER} received the {STR_VAR_1}\n"
    .string "from Professor Twig!$"

TwigtonCity_ProfessorTwigsLab_Text_RivalReceivedMonFromTwig::
    .string "{RIVAL} received the {STR_VAR_1}\n"
    .string "from Professor Twig!$"

TwigtonCity_ProfessorTwigsLab_Text_RivalIllTakeThisOneThen:
	.string "Fine...\p"
	.string "I'll take this one.$"

Text_GiveNicknameToThisMon::
	.string "Do you want to give a nickname to\n"
	.string "this {STR_VAR_1}?$"

TwigtonCity_ProfessorTwigsLab_Text_YouCantLeaveWithoutAStarter::
	.string "Professor Twig: You can't leave without\n"
	.string "a Pokémon! It's the law!$"