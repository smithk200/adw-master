.set LOCALID_MATT_WALSH, 17

GFYWoods_MapScripts::
	.byte 0

GFYWoods_EventScript_Sign::
	lock
	msgbox GFYWoods_Text_Sign, MSGBOX_DEFAULT 
	release
	end

GFYWoods_EventScript_Sign2::
	lock
	msgbox GFYWoods_Text_Sign2, MSGBOX_DEFAULT 
	release
	end

GFYWoods_EventScript_Sign3::
	lock
	msgbox GFYWoods_Text_Sign3, MSGBOX_DEFAULT 
	release
	end

GFYWoods_EventScript_MattWalshLeft::
	lockall
	goto_if_eq VAR_GFY_WOODS_STATE, 0, GFYWoods_EventScript_MattWalshIntroLeft
	releaseall
	end

GFYWoods_EventScript_MattWalshIntroLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	applymovement LOCALID_MATT_WALSH, GFYWoods_Movement_MattWalshEntersLeft
	waitmovement 0
	msgbox GFYWoods_Text_MattWalsh, MSGBOX_DEFAULT
	call GFYWoods_EventScript_MattWalshIntro
	trainerbattle_no_intro TRAINER_MATT_WALSH_1, GFYWoods_Text_MattWalsh_Defeat
	msgbox GFYWoods_TextMattWalshPostBattle, MSGBOX_DEFAULT
	msgbox GFYWoods_TextMattWalshPostBattle2, MSGBOX_DEFAULT
	applymovement LOCALID_MATT_WALSH, GFYWoods_Movement_MattWalshStormsOffLeft
	waitmovement 0
	removeobject LOCALID_MATT_WALSH
	setflag FLAG_MATT_WALSH_GFY_WOODS
	setvar VAR_GFY_WOODS_STATE, 1
	release
	end

GFYWoods_EventScript_MattWalshRight::
	lockall
	goto_if_eq VAR_GFY_WOODS_STATE, 0, GFYWoods_EventScript_MattWalshIntroRight
	releaseall
	end

GFYWoods_EventScript_MattWalshIntroRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 30
	applymovement LOCALID_MATT_WALSH, GFYWoods_Movement_MattWalshEntersRight
	waitmovement 0
	msgbox GFYWoods_Text_MattWalsh, MSGBOX_DEFAULT
	call GFYWoods_EventScript_MattWalshIntro
	trainerbattle_no_intro TRAINER_MATT_WALSH_1, GFYWoods_Text_MattWalsh_Defeat
	msgbox GFYWoods_TextMattWalshPostBattle, MSGBOX_DEFAULT
	msgbox GFYWoods_TextMattWalshPostBattle2, MSGBOX_DEFAULT
	applymovement LOCALID_MATT_WALSH, GFYWoods_Movement_MattWalshStormsOffRight
	waitmovement 0
	removeobject LOCALID_MATT_WALSH
	setflag FLAG_MATT_WALSH_GFY_WOODS
	setvar VAR_GFY_WOODS_STATE, 1
	release
	end

GFYWoods_EventScript_MattWalshIntro::
	applymovement LOCALID_MATT_WALSH, GFYWoods_Movement_MattWalshLookAround
	waitmovement 0
	msgbox GFYWoods_Text_MattWalshSaysNotFound, MSGBOX_DEFAULT
	closemessage
	msgbox GFYWoods_Text_MattWalshIntroducesHimself, MSGBOX_DEFAULT
	closemessage
	msgbox GFYWoods_Text_MattWalshIntroducesHimself2, MSGBOX_DEFAULT
	closemessage
	return

GFYWoods_Movement_MattWalshEntersLeft::
	walk_down
	walk_left
	face_down
	step_end

GFYWoods_Movement_MattWalshEntersRight::
	walk_down
	step_end

GFYWoods_Movement_MattWalshLookAround::
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	delay_8
	step_end

GFYWoods_Movement_MattWalshStormsOffLeft::
	walk_right
	walk_up
	walk_up
	step_end

GFYWoods_Movement_MattWalshStormsOffRight::
	walk_up
	walk_up
	step_end

GFYWoods_Text_Sign:
	.string "Gofuckyourself Woods\p"
	.string "Go fuck yourself!$"

GFYWoods_Text_Sign2:
	.string "Why are you here?\p"
	.string "GO FUCK YOURSELF!$"

GFYWoods_Text_Sign3:
	.string "Gofuckyourself Woods\n"
	.string "Elwood City {UP_ARROW}$"

GFYWoods_Text_MattWalsh:
	.string "Have you seen a Pokémon called\n"
	.string "Sprucifix around here?\p"
	.string "I really like that Pokémon.$"

GFYWoods_Text_MattWalshSaysNotFound:
	.string "Huh. Can't find one.$"

GFYWoods_Text_MattWalshIntroducesHimself:
	.string "Oh, you don't know who I am?\n"
	.string "I'm Matt Walsh.\p"
	.string "I host my own podcast and am on\n"
	.string "“The Daily Wire”.\p"
	.string "I used to be a part of Team Jumbo,\n"
	.string "but the leader of Team Jumbo didn't\l"
	.string "like some of my ideas.\p" @regarding therapy: Matt Walsh says that you only should seek therapy for around 3-4 months until you discover the root of the problem; your mom thinks therapy should last for years
	.string "So Team Jumbo kicked me out.$"

GFYWoods_Text_MattWalshIntroducesHimself2:
	.string "Why did I side with Team Jumbo?\n"
	.string "To defeat the evil Team Ass once and\l"
	.string "for all!\p"
	.string "Team Ass is a bunch of woke fanatics who\n"
	.string "want to brainwash our young children!\p"
	.string "I vow vengeance on Team\n"
	.string "Jumbo and Team Ass!\p"
	.string "Neither is to be trusted!\p"
	.string "I challenge you to a Pokémon battle!$"

GFYWoods_Text_MattWalsh_Defeat:
	.string "Haha…\p"
	.string "It will take more than that for you\n"
	.string "truly be at my level.\p"
	.string "The woke ideology you follow\n"
	.string "never wins in the end.$"

GFYWoods_TextMattWalshPostBattle:
	.string "You'll be seeing more of me, but for\n"
	.string "now, I'm going to Elwood City\l"
	.string "to challenge the Gym Leader, Rocky.$"

GFYWoods_TextMattWalshPostBattle2:
	.string "They should just let kids be kids\n"
	.string "and not do jobs for grown-ups, \l"
	.string "such as a Gym Leader.\p"
	.string "The Pokémon League is just a bunch of\n"
	.string "woke moralists who think they can just\l"
	.string "stuff unqualified individuals for a job\l"
	.string "solely based on optics.\p"
	.string "I'm going to put a stop to this madness\n"
	.string "once and for all!$"