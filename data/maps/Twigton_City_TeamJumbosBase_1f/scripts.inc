Twigton_City_TeamJumbosBase_1F_MapScripts::
	.byte 0

Twigton_City_TeamJumbosBase_1F_EventScript_TalkToCyrusFirst:: @we want the player to interact with Cyrus for the whole Cyrus follower thing
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	goto_if_set FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_TalkToCyrusFirst, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1F_EventScript_DontLeaveCyrus:: @we don't want the player to leave the base with Cyrus
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	goto_if_unset FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_DontLeaveCyrus, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_Trigger_Top::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 0
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkUp
	waitmovement 0
	goto Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_Trigger_Mid::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 1
	goto Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_Trigger_Bottom::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 2
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkDown
	waitmovement 0
	goto Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus::
	lock
	goto_if_set FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto_if_set FLAG_CYRUS_GIVES_SPEECH, Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_Intro_Short
	setflag FLAG_CYRUS_GIVES_SPEECH
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Cyrus_Intro, MSGBOX_AUTOCLOSE
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Cyrus_Intro_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_PlayerSaidNo
	@setfollowernpc 3, FNPC_ALL, Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_2, PARTNER_CYRUS
	goto Twigton_City_TeamJumbosBase_1F_EventScript_SetUpCyrusFollowerNPC
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_PlayerSaidNo::
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Cyrus_PlayerSaidNo, MSGBOX_AUTOCLOSE
	compare VAR_TEMP_1, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_1
	compare VAR_TEMP_1, 1
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_2
	compare VAR_TEMP_1, 2
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_3
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_PlayerSaidNo_ReturnCyrus:: @unused
	compare VAR_TEMP_1, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_1
	compare VAR_TEMP_1, 1
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_2
	compare VAR_TEMP_1, 2
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_3
	end


Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_1::
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkDown
	release
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_2::
	release
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_MoveCyrusBack_3::
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkUp
	release
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_Intro_Short::
	lock
	faceplayer
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Cyrus_Intro_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_PlayerSaidNo
	goto Twigton_City_TeamJumbosBase_1F_EventScript_SetUpCyrusFollowerNPC
	end

Twigton_City_TeamJumbosBase_1F_EventScript_SetUpCyrusFollowerNPC::
	closemessage
	fadescreen FADE_TO_BLACK
	delay 30
	setflag FLAG_CYRUS_FOLLOWER
	setflag FLAG_DONT_TRANSITION_MUSIC
	setflag FLAG_DONT_FADE_MAP_MUSIC_UPON_BATTLE
	removeobject 3
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Cyrus_JoinedYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_FROM_BLACK
	createfollowernpc OBJ_EVENT_GFX_CYRUS, FNPC_ALL, Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_2, PARTNER_CYRUS
	closemessage
	release
	end

Twigton_City_TeamJumbosBase_1F_EventScript_YourMomBattleScene_TriggerLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Twigton_City_TeamJumbosBase_1F_Movement_PlayerWalksUpToYourMom
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Twigton_City_TeamJumbosBase_1F_Movement_PlayerWalksUpToYourMom
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Twigton_City_TeamJumbosBase_1F_Movement_CyrusWalksUpToYourMom
	waitmovement 0
	setvar VAR_TEMP_1, 0
	goto Twigton_City_TeamJumbosBase_1F_EventScript_YourMomBattleScene

Twigton_City_TeamJumbosBase_1F_EventScript_YourMomBattleScene_TriggerRight::
	applymovement OBJ_EVENT_ID_PLAYER, Twigton_City_TeamJumbosBase_1F_Movement_PlayerWalksUpToYourMom
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Twigton_City_TeamJumbosBase_1F_Movement_PlayerWalksUpToYourMom
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto Twigton_City_TeamJumbosBase_1F_EventScript_YourMomBattleScene

Twigton_City_TeamJumbosBase_1F_EventScript_YourMomBattleScene::
	clearflag FLAG_DONT_FADE_MAP_MUSIC_UPON_BATTLE
	applymovement LOCAL_ID_YOUR_MOM_TWIGTON_BASE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_1, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_CyrusSpeaks_1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCAL_ID_YOUR_MOM_TWIGTON_BASE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_2, MSGBOX_DEFAULT
	closemessage
	msgbox Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCAL_ID_BEN_SHAPIRO_TWIGTON_BASE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_Ben_Speech_1, MSGBOX_DEFAULT
	closemessage
	goto Twigton_City_TeamJumbosBase_1F_EventScript_DoCyrusMultiBattle
	end

Twigton_City_TeamJumbosBase_1F_EventScript_DoCyrusMultiBattle::
	multi_fixed_2_vs_2 TRAINER_YOUR_MOM, Twigton_City_TeamJumbosBase_1F_Text_YourMomDefeat, TRAINER_BEN_SHAPIRO_TWIGTON, Twigton_City_TeamJumbosBase_1F_Text_BenShapiroDefeat, PARTNER_CYRUS
	switch VAR_RESULT
	case 1, Twigton_City_TeamJumbosBase_1F_EventScript_DefeatedYourMom
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Twigton_City_TeamJumbosBase_1F_EventScript_ChoosePartyForMultiBattle::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, Twigton_City_TeamJumbosBase_1F_EventScript_DoCyrusMultiBattle
	special LoadPlayerParty
	goto Twigton_City_TeamJumbosBase_1F_EventScript_ReadyForBattlePrompt

Twigton_City_TeamJumbosBase_1F_EventScript_ReadyForBattlePrompt::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1F_Text_CyrusAreYouReadyToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
	msgbox Twigton_City_TeamJumbosBase_1F_Text_CyrusHurryGetReadyQuickly, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	releaseall
	end

Twigton_City_TeamJumbosBase_1F_EventScript_Cyrus_2::
	faceplayer
	msgbox Twigton_City_TeamJumbosBase_1F_Text_CyrusFollowerNPC, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1F_EventScript_DefeatedYourMom::
	msgbox Twigton_City_TeamJumbosBase_1F_Text_DefeatedYourMom, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1F_EventScript_JumboGrunt_1::
	trainerbattle_single TRAINER_JUMBO_BASE_GRUNT_1, TeamJumbosBase_1F_Text_JumboGrunt_2_Intro, TeamJumbosBase_1F_Text_JumboGrunt_2_Defeat
	msgbox TeamJumbosBase_1F_Text_JumbosGrunt_2_PostBattle, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1F_Movement_PlayerWalksUpToYourMom::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Twigton_City_TeamJumbosBase_1F_Movement_CyrusWalksUpToYourMom::
	walk_up
	face_right
	step_end

Twigton_City_TeamJumbosBase_1F_Text_Cyrus_Intro:
	.string "Cyrus: So, {PLAYER}…\p"
	.string "This is what it has come to.\p"
	.string "From the moment when you stopped my\n"
	.string "commander in Stoneveil Town…\p"
	.string "To when I told you about Matt Walsh…\p"
	.string "I wish things could be better.\p"
	.string "This divided world…\n"
	.string "can be united once again.\p"
	.string "That is what I was hoping for,\n"
	.string "when I tried to make my own universe.\p"
	.string "A world free from division and strife.\p"
	.string "A world where we could be free to discuss\n"
	.string "our dissenting political opinions.\p"
	.string "I am so sad it has come to this…$"

Twigton_City_TeamJumbosBase_1F_Text_Cyrus_Intro_2:
	.string "Cyrus: So, I ask of you, {PLAYER}.\p"
	.string "Will you help me to take down\n"
	.string "Team Jumbo and bring peace to the\l"
	.string "Straightlar region?$"

Twigton_City_TeamJumbosBase_1F_Text_Cyrus_PlayerSaidNo:
	.string "Cyrus: I'm not taking no for an\n"
	.string "answer!\p"
	.string "I need your help!$"

Twigton_City_TeamJumbosBase_1F_Text_Cyrus_JoinedYou:
	.string "Cyrus joined {PLAYER}!$"

Twigton_City_TeamJumbosBase_1F_Text_TalkToCyrusFirst:
	.string "Talk to Cyrus first.$"

Twigton_City_TeamJumbosBase_1F_Text_DontLeaveCyrus:
	.string "You really shouldn't leave Cyrus\n"
	.string "behind by himself, you nimrod.$"

Twigton_City_TeamJumbosBase_1F_Text_CyrusFollowerNPC:
	.string "Don't worry, I got your back!$"
	
Twigton_City_TeamJumbosBase_1F_Text_YourMomDefeat:
	.string "WHAT? NO!!!\n"
	.string "GOD, HOW COULD YOU DO THIS TO ME!!!\p"
	.string "{PLAYER}, HAVE MERCY ON ME,\n"
	.string "YOUR OWN MOTHER!$"

Twigton_City_TeamJumbosBase_1F_Text_BenShapiroDefeat:
	.string "Oh, dear God…$"

Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_1:
	.string "{PLAYER}, my child…\p"
	.string "Why did you leave your bedroom?\n"
	.string "I was only trying to protect you!\p"
	.string "I love you, and want the best\n"
	.string "for you!\p"
	.string "Was that not so hard to ask?\p"
	.string "Instead of staying sheltered in\n"
	.string "your loving home, you decided\l"
	.string "to sneak outside and… run away!\p"
	.string "The world is a dangerous place,\n"
	.string "{PLAYER}.$"

Twigton_City_TeamJumbosBase_1F_Text_CyrusSpeaks_1:
	.string "{PLAYER}'s twenty-five years old,\n"
	.string "ma'am.\p"
	.string "They don't need to be sheltered at\n"
	.string "twenty-five.$"

Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_2:
	.string "So?\p"
	.string "{PLAYER}, you've gone too far,\n"
	.string "and radicalized yourself with\l"
	.string "strange and evil people.\p"
	.string "Why I raised you this way?\n"
	.string "It's God's will, of course.\p"
	.string "That being said, God's will for\n"
	.string "me was to form a group that\l"
	.string "shared my Christian ideals.$"

Twigton_City_TeamJumbosBase_1F_Text_YourMomSpeech_3:
	.string "This organization started out as\n"
	.string "Christians United, but internal\l"
	.string "meddling has turned this into\l"
	.string "“Team Jumbo”.\p"
	.string "Still, I knew I had to be its leader.\p"
	.string "And that means taking anybody down\n"
	.string "who dares to oppose our ideals!$"

Twigton_City_TeamJumbosBase_1F_Text_Ben_Speech_1:
	.string "And I will continue to defend Team\n"
	.string "Jumbo valiantly, until the very end!$"

Twigton_City_TeamJumbosBase_1F_Text_DefeatedYourMom: @using this as dummy text
	.string "Your Mom: I was defeated…$"

Twigton_City_TeamJumbosBase_1F_Text_CyrusAreYouReadyToBattle:
	.string "Cyrus: {PLAYER}!\n"
	.string "You're going to help me, right?\p"
	.string "Let's go into battle together!\n"
	.string "Are you ready?$"

Twigton_City_TeamJumbosBase_1F_Text_CyrusHurryGetReadyQuickly:
	.string "Cyrus: Hurry up, then!\n"
	.string "We've gotta defeat these synchophants!$"

TeamJumbosBase_1F_Text_JumboGrunt_2_Intro:
	.string "Hey, you!\p"
	.string "The Boss has a big plan! It will save\n"
	.string "the world from their dangerous, evil\l"
	.string "sins!\p"
	.string "So yout BETTER not interfere!$"

TeamJumbosBase_1F_Text_JumboGrunt_2_Defeat:
	.string "Hey, that wasn't fair!$"

TeamJumbosBase_1F_Text_JumbosGrunt_2_PostBattle:
	.string "Why can't you see the error of your\n"
	.string "ways?\p"
	.string "The entire Straightlar region needs to\n"
	.string "be saved and redeeemed!$"