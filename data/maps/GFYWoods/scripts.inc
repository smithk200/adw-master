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

GFYWoods_EventScriptBiker::
	lock
	goto_if_set FLAG_BADGE01_GET, GFYWoods_EventScriptBiker2
	msgbox GFYWoods_Text_BikerDefeatFirstGym, MSGBOX_DEFAULT
	release
	end

GFYWoods_EventScriptBiker2::
	lock
	msgbox GFYWoods_Text_BikerAfterDefeatingFirstGym, MSGBOX_DEFAULT
	release
	end

GFYWoods_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, GFYWoods_Text_RickIntro, GFYWoods_Text_RickDefeat
	msgbox GFYWoods_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Tom::
	trainerbattle_single TRAINER_TOM, GFYWoods_Text_TomIntro, GFYWoods_Text_TomDefeat
	msgbox GFYWoods_Text_TomPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Phil::
	trainerbattle_single TRAINER_PHIL, GFYWoods_Text_PhilIntro, GFYWoods_Text_PhilDefeat
	msgbox GFYWoods_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Ignacio::
	trainerbattle_single TRAINER_IGNACIO, GFYWoods_Text_IgnacioIntro, GFYWoods_Text_IgnacioDefeat
	msgbox GFYWoods_Text_IgnacioPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN, GFYWoods_Text_RyanIntro, GFYWoods_Text_RyanDefeat
	msgbox GFYWoods_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Timmy::
	trainerbattle_single TRAINER_TIMMY, GFYWoods_Text_TimmyIntro, GFYWoods_Text_TimmyDefeat
	msgbox GFYWoods_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Roy::
	trainerbattle_single TRAINER_ROY, GFYWoods_Text_RoyIntro, GFYWoods_Text_RoyDefeat
	msgbox GFYWoods_Text_RoyPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Kent::
	trainerbattle_single TRAINER_KENT, GFYWoods_Text_KentIntro, GFYWoods_Text_KentDefeat
	msgbox GFYWoods_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Ernie::
	trainerbattle_single TRAINER_ERNIE, GFYWoods_Text_ErnieIntro, GFYWoods_Text_ErnieDefeat
	msgbox GFYWoods_Text_ErniePostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Werner::
	trainerbattle_single TRAINER_WERNER, GFYWoods_Text_WernerIntro, GFYWoods_Text_WernerDefeat
	msgbox GFYWoods_Text_WernerPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Xavier::
	trainerbattle_single TRAINER_XAVIER, GFYWoods_Text_XavierIntro, GFYWoods_Text_XavierDefeat
	msgbox GFYWoods_Text_XavierPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD, GFYWoods_Text_ArnoldIntro, GFYWoods_Text_ArnoldDefeat
	msgbox GFYWoods_Text_ArnoldPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Takashi::
	trainerbattle_single TRAINER_TAKASHI, GFYWoods_Text_TakashiIntro, GFYWoods_Text_TakashiDefeat
	msgbox GFYWoods_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Daisuke::
	trainerbattle_single TRAINER_DAISUKE, GFYWoods_Text_DaisukeIntro, GFYWoods_Text_DaisukeDefeat
	msgbox GFYWoods_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end

GFYWoods_EventScript_Pierre::
	trainerbattle_single TRAINER_PIERRE, GFYWoods_Text_PierreIntro, GFYWoods_Text_PierreDefeat
	msgbox GFYWoods_Text_PierrePostBattle, MSGBOX_AUTOCLOSE
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

GFYWoods_EventScript_Repel1::
	finditem ITEM_REPEL
	end

GFYWoods_EventScript_Repel2::
	finditem ITEM_REPEL
	end

GFYWoods_EventScript_GreatBall::
	finditem ITEM_GREAT_BALL
	end

GFYWoods_EventScript_Ether::
	finditem ITEM_ETHER
	end

GFYWoods_Text_Sign:
	.string "Gofuckyourself Woods\p"
	.string "Go fuck yourself!$"

GFYWoods_Text_Sign2:
	.string "Why are you here?\p"
	.string "GO FUCK YOURSELF!$"

GFYWoods_Text_Sign3:
	.string "Gofuckyourself Woods\n"
	.string "Elwood City {UP_ARROW}$"

GFYWoods_Text_RickIntro:
    .string "Tremble in fear agianst\n"
	.string "my mighy Bug Pokémon!$"

GFYWoods_Text_RickDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_RickPostBattle:
    .string "I will beat you next time!$"

GFYWoods_Text_TomIntro:
    .string "See how my Wurmple line evolves?\n"
	.string "I have all three stages!$"

GFYWoods_Text_TomDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_TomPostBattle:
    .string "My Pokémon are full of\n"
	.string "light and beauty.\p"
	.string "Wurmple can evolve into Cascoon, too!$"

GFYWoods_Text_PhilIntro:
    .string "Hi, I am a Trainer!$"

GFYWoods_Text_PhilDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_PhilPostBattle:
    .string "I will beat you next time!$"

GFYWoods_Text_IgnacioIntro:
    .string "I love bugs!\n"
	.string "Aren't they the best?$"

GFYWoods_Text_IgnacioDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_IgnacioPostBattle:
    .string "My bug Pokémon are all\n"
	.string "from different regions!\p"
	.string "Isn't that cool?$"

GFYWoods_Text_RyanIntro:
    .string "Hi, I just love Wurmple!$"

GFYWoods_Text_RyanDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_RyanPostBattle:
    .string "My Pokémon are full of darkness\n"
	.string "and edginess.\p"
	.string "Could Wurmple evolve another way, too?$"

GFYWoods_Text_TimmyIntro:
    .string "I want to be like Jaiden Animations\n"
	.string "when I grow up!$"

GFYWoods_Text_TimmyDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_TimmyPostBattle:
    .string "I will train until I am as strong as her!$"

GFYWoods_Text_RoyIntro:
    .string "Prepare to be stunned by my\n"
	.string "Electric Pokémon!$"

GFYWoods_Text_RoyDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_RoyPostBattle:
    .string "My brother Morton specializes\n"
	.string "in Ground-type Pokémon.$"

GFYWoods_Text_KentIntro:
    .string "Hi!\n"
	.string "Do you like my cocoon Pokémon?$"

GFYWoods_Text_KentDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_KentPostBattle:
    .string "The GFY Woods is so confusing!\n"
	.string "Will I ever get out of here?$"

GFYWoods_Text_ErnieIntro:
    .string "My brother's name isn't Bert.$"

GFYWoods_Text_ErnieDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_ErniePostBattle:
    .string "I'm just the first of five Trainers\n"
	.string "that you must face to get to Elwood City!$"

GFYWoods_Text_WernerIntro:
    .string "Do you like Weedle?\n"
	.string "I LOVE Weedle!$"

GFYWoods_Text_WernerDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_WernerPostBattle:
    .string "Maybe I should use Larvades instead...\n"
	.string "It evolves to an Electric-type, right?$"

GFYWoods_Text_XavierIntro:
    .string "I love catching Pokémon!$"

GFYWoods_Text_XavierDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_XavierPostBattle:
    .string "I just saw some weird guy run past.\p"
	.string "He looked like he was in a rush.$"

GFYWoods_Text_ArnoldIntro:
    .string "Do you like my collection\n"
	.string "of Curicrawl?$"

GFYWoods_Text_ArnoldDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_ArnoldPostBattle:
    .string "Stan Curicrawl!\n"
	.string "Stan Curicrawl!\l"
	.string "Stan Curicrawl!$"

GFYWoods_Text_TakashiIntro:
    .string "I am one with my Pokémon.\n"
	.string "I have meditated with them for years!$"

GFYWoods_Text_TakashiDefeat:
    .string "Oh, I lost.$"

GFYWoods_Text_TakashiPostBattle:
    .string "I will go back to meditating now.\p"
	.string "Aum...$"

GFYWoods_Text_DaisukeIntro:
    .string "Prepare to be defeated by my mighty\n"
	.string "Bug Pokémon!$"

GFYWoods_Text_DaisukeDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_DaisukePostBattle:
    .string "That guy who ran by? He was a grown man!\n"
	.string "Pokémon can be for anyone of any age.$"

GFYWoods_Text_PierreIntro:
    .string "These are the strongest and\n"
	.string "most dangerous Pokémon known to man.$"

GFYWoods_Text_PierreDefeat:
    .string "Darn, I lost!$"

GFYWoods_Text_PierrePostBattle:
    .string "Wait, I was supposed to evolve these?\n"
	.string "Oh...$"

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

GFYWoods_Text_BikerDefeatFirstGym:
	.string "Hey you!\p"
	.string "We need a strong Trainer to help us.\p"
	.string "From the looks of it, you aren't\n"
	.string "strong enough yet.\p"
	.string "Come back when you're a little stronger.$"

GFYWoods_Text_BikerAfterDefeatingFirstGym:
	.string "You got a Gym Badge! Neat!\p"
	.string "You can help us now!$"