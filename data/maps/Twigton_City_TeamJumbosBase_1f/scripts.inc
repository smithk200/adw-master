Twigton_City_TeamJumbosBase_1f_MapScripts::
	.byte 0

Twigton_City_TeamJumbosBase_1f_EventScript_TalkToCyrusFirst:: @we want the player to interact with Cyrus for the whole Cyrus follower thing
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	goto_if_set FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1f_Text_TalkToCyrusFirst, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1f_EventScript_DontLeaveCyrus:: @we don't want the player to leave the base with Cyrus
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	goto_if_unset FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	msgbox Twigton_City_TeamJumbosBase_1f_Text_DontLeaveCyrus, MSGBOX_AUTOCLOSE
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_Trigger_Top::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 0
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkUp
	waitmovement 0
	goto Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_Trigger_Mid::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 1
	goto Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_Trigger_Bottom::
	lockall
	goto_if_set FLAG_DEFEATED_YOUR_MOM_TWIGTON, Common_EventScript_End
	setvar VAR_TEMP_1, 2
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkDown
	waitmovement 0
	goto Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus::
	lock
	goto_if_set FLAG_CYRUS_FOLLOWER, Common_EventScript_End
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto_if_set FLAG_CYRUS_GIVES_SPEECH, Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_Intro_Short
	setflag FLAG_CYRUS_GIVES_SPEECH
	msgbox Twigton_City_TeamJumbosBase_1f_Text_Cyrus_Intro, MSGBOX_AUTOCLOSE
	msgbox Twigton_City_TeamJumbosBase_1f_Text_Cyrus_Intro_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_PlayerSaidNo
	@setfollowernpc 3, FNPC_ALL, Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_2, PARTNER_CYRUS
	goto Twigton_City_TeamJumbosBase_1f_EventScript_SetUpCyrusFollowerNPC
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_PlayerSaidNo::
	msgbox Twigton_City_TeamJumbosBase_1f_Text_Cyrus_PlayerSaidNo, MSGBOX_AUTOCLOSE
	compare VAR_TEMP_1, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_1
	compare VAR_TEMP_1, 1
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_2
	compare VAR_TEMP_1, 2
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_3
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_PlayerSaidNo_ReturnCyrus:: @unused
	compare VAR_TEMP_1, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_1
	compare VAR_TEMP_1, 1
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_2
	compare VAR_TEMP_1, 2
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_3
	end


Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_1::
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkDown
	release
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_2::
	release
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_MoveCyrusBack_3::
	applymovement LOCAL_ID_CYRUS_TWIGTON, Common_Movement_WalkUp
	release
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_Intro_Short::
	lock
	faceplayer
	msgbox Twigton_City_TeamJumbosBase_1f_Text_Cyrus_Intro_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_PlayerSaidNo
	goto Twigton_City_TeamJumbosBase_1f_EventScript_SetUpCyrusFollowerNPC
	end

Twigton_City_TeamJumbosBase_1f_EventScript_SetUpCyrusFollowerNPC::
	closemessage
	fadescreen FADE_TO_BLACK
	delay 30
	setflag FLAG_CYRUS_FOLLOWER
	removeobject 3
	msgbox Twigton_City_TeamJumbosBase_1f_Text_Cyrus_JoinedYou, MSGBOX_AUTOCLOSE
	fadescreen FADE_FROM_BLACK
	createfollowernpc OBJ_EVENT_GFX_CYRUS, FNPC_ALL, Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_2, PARTNER_CYRUS
	closemessage
	release
	end

Twigton_City_TeamJumbosBase_1f_EventScript_Cyrus_2:
	end

Twigton_City_TeamJumbosBase_1f_Text_Cyrus_Intro:
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

Twigton_City_TeamJumbosBase_1f_Text_Cyrus_Intro_2:
	.string "Cyrus: So, I ask of you, {PLAYER}.\p"
	.string "Will you help me to take down\n"
	.string "Team Jumbo and bring peace to the\l"
	.string "Straightlar region?$"

Twigton_City_TeamJumbosBase_1f_Text_Cyrus_PlayerSaidNo:
	.string "Cyrus: I'm not taking no for an\n"
	.string "answer!\p"
	.string "I need your help!$"

Twigton_City_TeamJumbosBase_1f_Text_Cyrus_JoinedYou:
	.string "Cyrus joined {PLAYER}!$"

Twigton_City_TeamJumbosBase_1f_Text_TalkToCyrusFirst:
	.string "Talk to Cyrus first.$"

Twigton_City_TeamJumbosBase_1f_Text_DontLeaveCyrus:
	.string "You really shouldn't leave Cyrus\n"
	.string "behind by himself, you nimrod.$"
	