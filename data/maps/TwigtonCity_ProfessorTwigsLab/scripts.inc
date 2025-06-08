TwigtonCity_ProfessorTwigsLab_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwigtonCity_ProfessorTwigsLab_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwigtonCity_ProfessorTwigsLab_OnFrame
	.byte 0

TwigtonCity_ProfessorTwigsLab_OnLoad::
	end

TwigtonCity_ProfessorTwigsLab_OnWarp::
	map_script_2 VAR_TWIGTON_CITY_MAP_STATE_LAB, 1, TwigtonCity_ProfessorTwigsLab_EventScript_ReadyPlayerForStarterScene
	.2byte 0

TwigtonCity_ProfessorTwigsLab_OnFrame::
	map_script_2 VAR_TWIGTON_CITY_MAP_STATE_LAB, 1, TwigtonCity_ProfessorTwigsLab_EventScript_TwigTellsYouToPickStarterMon
	map_script_2 VAR_TWIGTON_CITY_MAP_STATE_LAB, 4, TwigtonCity_ProfessorTwigsLab_EventScript_TwigWishesYouFarewell
	.2byte 0

TwigtonCity_ProfessorTwigsLab_EventScript_ReadyPlayerForStarterScene::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
.equ LOCALID_GRASSHOLE_BALL,  2
.equ LOCALID_SQUIRTLE_BALL,   4
.equ LOCALID_SCORBUNNY_BALL, 3
.equ LOCALID_RIVAL,           5
.equ LOCALID_POKEDEX_1,       9
.equ LOCALID_POKEDEX_2,       10


@VAR_TWIGTON_CITY_MAP_STATE

TwigtonCity_ProfessorTwigsLab_Trigger_CantLeaveLab::
	message TwigtonCity_ProfessorTwigsLab_Text_YouCantLeaveWithoutAStarter
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_YouCantLeaveWithoutAStarter
	release
	end

TwigtonCity_ProfessorTwigsLab_Trigger_Middle::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	release
	end

TwigtonCity_ProfessorTwigsLab_Trigger_Right::
	goto_if_unset FLAG_SYS_POKEMON_GET, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_YouNeedToChooseAMon
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_Twig::
	lock
	faceplayer
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_TwigTellsYouToPickStarterMon::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_PlayerWalksForwardToGetStarterMon
	waitmovement 0
	clearflag FLAG_DONT_TRANSITION_MUSIC
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ChooseAPokemon
	delay 20
	closemessage
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ChooseAPokemon2
	delay 20
	closemessage
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 2
	releaseall
	end

TwigtonCity_ProfessorTwigsLab_EventScript_GrassholeBall::
	goto_if_ge VAR_TWIGTON_CITY_MAP_STATE_LAB, 3, TwigtonCity_ProfessorTwigsLab_EventScript_LastPokeBall
	lock
	faceplayer
	setvar PLAYER_STARTER_NUM, 0
	setvar PLAYER_STARTER_SPECIES, SPECIES_GRASSHOLE
	setvar RIVAL_STARTER_SPECIES, SPECIES_SCORBUNNY
	setvar RIVAL_STARTER_ID, LOCALID_SCORBUNNY_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls, MSGBOX_DEFAULT
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_SquirtleBall::
	goto_if_ge VAR_TWIGTON_CITY_MAP_STATE_LAB, 3, TwigtonCity_ProfessorTwigsLab_EventScript_LastPokeBall
	lock
	faceplayer
	setvar PLAYER_STARTER_NUM, 1
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
	setvar RIVAL_STARTER_SPECIES, SPECIES_GRASSHOLE
	setvar RIVAL_STARTER_ID, LOCALID_GRASSHOLE_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB, 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls, MSGBOX_DEFAULT
	release
	end

TwigtonCity_ProfessorTwigsLab_EventScript_ScorbunnyBall::
	goto_if_ge VAR_TWIGTON_CITY_MAP_STATE_LAB, 3, TwigtonCity_ProfessorTwigsLab_EventScript_LastPokeBall
	lock
	faceplayer
	setvar PLAYER_STARTER_NUM, 2
	setvar PLAYER_STARTER_SPECIES, SPECIES_SCORBUNNY
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
	goto_if_eq VAR_TWIGTON_CITY_MAP_STATE_LAB , 2, TwigtonCity_ProfessorTwigsLab_EventScript_ConfirmStarterChoice
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThoseArePokeBalls, MSGBOX_DEFAULT
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
	removeobject VAR_LAST_TALKED
	msgbox TwigtonCity_ProfessorTwigsLab_Text_ThisMonIsBattleReady
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_TWIGTON_CITY_MAP_STATE, 1
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 3
	givemon PLAYER_STARTER_SPECIES, 5
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	message TwigtonCity_ProfessorTwigsLab_Text_ReceivedMonFromTwig
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	setflag FLAG_RECIEVED_STARTER_POKEMON
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

TwigtonCity_ProfessorTwigsLab_EventScript_BrittanyL::
	lockall
	setvar VAR_TEMP_2, 1
	goto TwigtonCity_ProfessorTwigsLab_EventScript_Brittany
	end

TwigtonCity_ProfessorTwigsLab_EventScript_BrittanyM::
	lockall
	setvar VAR_TEMP_2, 2
	goto TwigtonCity_ProfessorTwigsLab_EventScript_Brittany
	end

TwigtonCity_ProfessorTwigsLab_EventScript_BrittanyR::
	lockall
	setvar VAR_TEMP_2, 3
	goto TwigtonCity_ProfessorTwigsLab_EventScript_Brittany
	end

TwigtonCity_ProfessorTwigsLab_EventScript_Brittany::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TwigTellsBrittanyToBattle
	closemessage
	msgbox TwigtonCity_ProfessorTwigsLab_Text_BrittanyReluctantlyAccepts
	closemessage
	goto_if_eq VAR_STARTER_MON, 0, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunny
	goto_if_eq VAR_STARTER_MON, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrasshole
	goto_if_eq VAR_STARTER_MON, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtle
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtle::
	goto_if_eq VAR_TEMP_2, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleLeft
	goto_if_eq VAR_TEMP_2, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleMid
	goto_if_eq VAR_TEMP_2, 3, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleRight
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleLeft::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleSquirtle
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleMid::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleMid
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleSquirtle
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleSquirtleRight::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleSquirtle
	end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleLeft::
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleMid::
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleSquirtleRight::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunny::
	goto_if_eq VAR_TEMP_2, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyLeft
	goto_if_eq VAR_TEMP_2, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyMid
	goto_if_eq VAR_TEMP_2, 3, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyRight
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyLeft::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleScorbunny
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyMid::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyMid
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleScorbunny
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleScorbunnyRight::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleScorbunny
	end

TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyLeft::
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyMid::
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_ApproachForBattleScorbunnyRight::
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrasshole::
	goto_if_eq VAR_TEMP_2, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeLeft
	goto_if_eq VAR_TEMP_2, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeMid
	goto_if_eq VAR_TEMP_2, 3, TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeRight
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeLeft::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleGrasshole
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeMid::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeMid
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleGrasshole
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalApproachForBattleGrassholeRight::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	goto TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleGrasshole
	end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeLeft::
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeMid::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalApproachForBattleGrassholeRight::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleGrasshole::
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 4
	trainerbattle_single TRAINER_BRITTANY_TWIGS_LAB_PLAYER_CHOSE_SQUIRTLE, TwigtonCity_ProfessorTwigsLab_Text_BrittanyIntro, TwigtonCity_ProfessorTwigsLab_Text_BrittanyDefeat, TwigtonCity_ProfessorTwigsLab_Text_BrittanyVictory
	goto TwigtonCity_ProfessorTwigsLab_EventScript_EndRivalBattle

TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleSquirtle::
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 4
	trainerbattle_single TRAINER_BRITTANY_TWIGS_LAB_PLAYER_CHOSE_SCORBUNNY, TwigtonCity_ProfessorTwigsLab_Text_BrittanyIntro, TwigtonCity_ProfessorTwigsLab_Text_BrittanyDefeat, TwigtonCity_ProfessorTwigsLab_Text_BrittanyVictory
	goto TwigtonCity_ProfessorTwigsLab_EventScript_EndRivalBattle

TwigtonCity_ProfessorTwigsLab_EventScript_RivalBattleScorbunny::
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 4
	trainerbattle_single TRAINER_BRITTANY_TWIGS_LAB_PLAYER_CHOSE_GRASSHOLE, TwigtonCity_ProfessorTwigsLab_Text_BrittanyIntro, TwigtonCity_ProfessorTwigsLab_Text_BrittanyDefeat, TwigtonCity_ProfessorTwigsLab_Text_BrittanyVictory
	goto TwigtonCity_ProfessorTwigsLab_EventScript_EndRivalBattle

TwigtonCity_ProfessorTwigsLab_EventScript_EndRivalBattle::
	special HealPlayerParty
	setflag 0x501
	setflag 0x502
	setflag 0x503
	setflag FLAG_RECIEVED_STARTER_POKEMON
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TestText
	closemessage
	end

TwigtonCity_ProfessorTwigsLab_EventScript_TwigWishesYouFarewell::
	special HealPlayerParty
	msgbox TwigtonCity_ProfessorTwigsLab_RivalIsOuttaHere
	closemessage
	call_if_eq VAR_TEMP_2, 1, TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleLeft
	call_if_eq VAR_TEMP_2, 2, TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleMid
	call_if_eq VAR_TEMP_2, 3, TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleRight
	msgbox TwigtonCity_ProfessorTwigsLab_TwigMakesSpeechAfterBrittanyLeaves
	closemessage
	msgbox TwigtonCity_ProfessorTwigsLab_TwigIsSoLazyHeDoorDashesHisFoodAndMakesYouGetItForHim
	closemessage
	setflag FLAG_RECIEVED_STARTER_POKEMON
	setflag FLAG_HIDE_BRITTANY_IN_TWIGS_LAB
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 5
	end

TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleLeft::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleLeft
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_PlayerWatchRivalExitAfterBattle
	waitmovement LOCALID_RIVAL
	removeobject LOCALID_RIVAL
	return

TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleMid::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleMid
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_PlayerWatchRivalExitAfterBattle
	waitmovement LOCALID_RIVAL
	removeobject LOCALID_RIVAL
	return

TwigtonCity_ProfessorTwigsLab_EventScript_RivalExitAfterBattleRight::
	applymovement LOCALID_RIVAL, TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleRight
	applymovement OBJ_EVENT_ID_PLAYER, TwigtonCity_ProfessorTwigsLab_Movement_PlayerWatchRivalExitAfterBattle
	waitmovement LOCALID_RIVAL
	removeobject LOCALID_RIVAL
	return

TwigtonCity_ProfessorTwigsLab_EventScript_LastPokeBall::
	msgbox TwigtonCity_ProfessorTwigsLab_Text_TwigsLastMon
	release
	end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToScorbunny::
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToSquirtle::
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalWalksToGrasshole::
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_PlayerWalksForwardToGetStarterMon::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_YouCantLeaveWithoutAStarter::
	walk_up
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleLeft::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleRight::
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_RivalExitAfterBattleMid::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	delay_8
	step_end

TwigtonCity_ProfessorTwigsLab_Movement_PlayerWatchRivalExitAfterBattle::
	walk_in_place_down
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

Text_GiveNicknameToThisMon:
	.string "Do you want to give a nickname to\n"
	.string "this {STR_VAR_1}?$"

TwigtonCity_ProfessorTwigsLab_Text_YouCantLeaveWithoutAStarter:
	.string "Professor Twig: You can't leave without\n"
	.string "a Pokémon! It's the law!$"

TwigtonCity_ProfessorTwigsLab_Text_ChooseAPokemon:
	.string "See these here Poké Balls!\n"
	.string "They contain Pokémon!\p"
	.string "That's pretty obvious, isn't it?\n"
	.string "Poké Balls can ONLY store Pokémon.\l"
	.string "Did you know that?$"

TwigtonCity_ProfessorTwigsLab_Text_ChooseAPokemon2:
	.string "I found these Pokémon in garabge cans.\n"
	.string "Show them the love they deserve, then!\p"
	.string "All right, now, you can choose your\n"
	.string "Pokémon. Make the best choice!\p"
	.string "I'm even going to tell you who these\n"
	.string "Pokémon are!$"

TwigtonCity_ProfessorTwigsLab_Text_BrittanyIntro:
	.string "I guess I'll battle you now.$"
TwigtonCity_ProfessorTwigsLab_Text_BrittanyDefeat:
	.string "I lost? Why should I care?$"
TwigtonCity_ProfessorTwigsLab_Text_BrittanyVictory:
	.string "Oh yeah!\n"
	.string "Am I great or what?$"
TwigtonCity_ProfessorTwigsLab_Text_BrittanyPostBattle:
	.string "weeeeeeeee$"

TwigtonCity_ProfessorTwigsLab_Text_TwigTellsBrittanyToBattle:
	.string "Prof. Twig: Now, Brittany, why don't\n"
	.string "you battle {PLAYER} so their Pokémon\l"
	.string "can gain more experience and level up?$"

TwigtonCity_ProfessorTwigsLab_Text_BrittanyReluctantlyAccepts:
	.string "{RIVAL}: Ugh, fine...\p"
	.string "Though I would rather talk to my\n"
	.string "friends than battle this weirdo.$"

TwigtonCity_ProfessorTwigsLab_RivalIsOuttaHere:
	.string "{RIVAL}: I am SO outta here. Pokémon\n"
	.string "battling is something nerds like my dad do.\p"
	.string "I didn't even want to be here anyway!$"

TwigtonCity_ProfessorTwigsLab_TwigMakesSpeechAfterBrittanyLeaves:
	.string "Prof. Twig: Well, that's {RIVAL} for you.\p"
	.string "Always wanting to be on her phone\n"
	.string "or shopping or something like that.\p"
	.string "I wish she would have more time for\n"
	.string "her dad and not be on her phone...\p"
	.string "Anyway, {PLAYER}, you now have your\n"
	.string "own Pokémon, so you're not violating\l"
	.string "the law anymore.$"

TwigtonCity_ProfessorTwigsLab_TwigIsSoLazyHeDoorDashesHisFoodAndMakesYouGetItForHim::
	.string "Before you go, though, I have\n"
	.string "a favor to ask you.\p"
	.string "I placed an order on DoorDash\n"
	.string "at the Poké Mart in Hammersock,\l"
	.string "which is north of here.\p"
	.string "Apparently DoorDash can't deliver\n"
	.string "my food to Twigton City, because \l"
	.string "they don't believe it's “real” or\l"
	.string "some shit like that.\p"
	.string "Stupid corporate motherfuckers!\p"
	.string "Anyways, good luck out there!\p"
	.string "Make sure my food's hot and fresh!$"

TwigtonCity_ProfessorTwigsLab_Text_TwigsLastMon:
    .string "That's Prof. Twig's last Pokémon.$"

TwigtonCity_ProfessorTwigsLab_Text_TestText:
	.string "TwigtonCity_ProfessorTwigsLab_EventScript_EndRivalBattle\p"
	.string "was reached.$"

TwigtonCity_ProfessorTwigsLab_Text_TestText2:
	.string "ProfessorTwigsLab_EventScript_TwigWishesYouFarewell\p"
	.string "was reached.$"