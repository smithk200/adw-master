.equ LOCALID_JUMBO_GRUNT,  4
.equ LOCALID_ASS_GRUNT,  5

MtPompousB2F_MapScripts::
	.byte 0

MtPompousB2F_MapScript_AbortionTriggerLeft::
	applymovement OBJ_EVENT_ID_PLAYER, MtPompousB2F_Movement_Player_Abortion_Scene
	waitmovement 0
	clearflag FLAG_MT_POMPOUS_HIDE_GRUNTS
	addobject 4
	addobject 5
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGruntEnter
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGruntEnter
	waitmovement 0
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_1, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_1, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_2, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_2, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_3, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	turnobject 4, DIR_NORTH
	turnobject 5, DIR_NORTH
	waitmovement 0
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_4, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_4, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_5, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_5, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_6, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_6, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_7, MSGBOX_DEFAULT
	msgbox MtPompousB2F_Text_AssGrunt_8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ABORTION_DEBATER_ASS, MtPompousB2F_Text_AssGrunt_AbortionDebater_Defeat
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_7, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ABORTION_DEBATER_JUMBO, MtPompousB2F_Text_JumboGrunt_AbortionDebater_Defeat
	setflag FLAG_MT_POMPOUS_HIDE_FOSSILS
	removeobject 6 @why please why louis and shayna
	removeobject 7 @why please why louis and shayna
	msgbox MtPompousB2F_Text_PlayerTookFossils, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	msgbox MtPompousB2F_Text_JumboGrunt_8, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_9, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MT_POMPOUS_B2F_STATE, 1
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGruntExitLeft
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGruntExitLeft
	waitmovement 0
	setflag FLAG_MT_POMPOUS_HIDE_GRUNTS
	removeobject 4
	removeobject 5
	release
	end

MtPompousB2F_MapScript_AbortionTriggerRight::
	applymovement OBJ_EVENT_ID_PLAYER, MtPompousB2F_Movement_Player_Abortion_Scene
	waitmovement 0
	clearflag FLAG_MT_POMPOUS_HIDE_GRUNTS
	addobject 4
	addobject 5
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGruntEnter
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGruntEnter
	waitmovement 0
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_1, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_1, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_2, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_2, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGrunt_Talking
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_3, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	turnobject 4, DIR_NORTH
	turnobject 5, DIR_NORTH
	waitmovement 0
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_4, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_4, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_5, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_5, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_6, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_6, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, Common_Movement_ExclamationMark
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_7, MSGBOX_DEFAULT
	msgbox MtPompousB2F_Text_AssGrunt_8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ABORTION_DEBATER_ASS, MtPompousB2F_Text_AssGrunt_AbortionDebater_Defeat
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_JumboGrunt_7, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ABORTION_DEBATER_JUMBO, MtPompousB2F_Text_JumboGrunt_AbortionDebater_Defeat
	setflag FLAG_MT_POMPOUS_HIDE_FOSSILS
	removeobject 6 @why please why louis and shayna
	removeobject 7 @why please why louis and shayna
	msgbox MtPompousB2F_Text_PlayerTookFossils, MSGBOX_DEFAULT
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	msgbox MtPompousB2F_Text_JumboGrunt_8, MSGBOX_DEFAULT
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_Talking_Facing_Player
	waitmovement 0
	msgbox MtPompousB2F_Text_AssGrunt_9, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MT_POMPOUS_B2F_STATE, 1
	applymovement LOCALID_JUMBO_GRUNT, MtPompousB2F_Movement_JumboGruntExitRight
	applymovement LOCALID_ASS_GRUNT, MtPompousB2F_Movement_AssGruntExitRight
	waitmovement 0
	setflag FLAG_MT_POMPOUS_HIDE_GRUNTS
	removeobject 4
	removeobject 5
	release
	end

MtPompousB2F_AssGrunt1::
	end

MtPompousB2F_MapScript_HideGrunts::
	setflag FLAG_MT_POMPOUS_HIDE_GRUNTS
	setflag FLAG_MT_POMPOUS_HIDE_FOSSILS
	end

MtPompousB2F_Movement_Player_Abortion_Scene::
	walk_up
	face_down
	step_end

MtPompousB2F_Movement_AssGruntEnter::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtPompousB2F_Movement_JumboGruntEnter::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_left
	step_end

MtPompousB2F_Movement_JumboGruntExitLeft::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtPompousB2F_Movement_AssGruntExitLeft::
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtPompousB2F_Movement_JumboGruntExitRight::
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtPompousB2F_Movement_AssGruntExitRight::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtPompousB2F_Movement_JumboGrunt_Talking::
	walk_in_place_left
	step_end

MtPompousB2F_Movement_AssGrunt_Talking::
	walk_in_place_right
	step_end

MtPompousB2F_Movement_Talking_Facing_Player::
	walk_in_place_up
	step_end

MtPompousB2F_Text_AssGrunt_1:
	.string "It's my body, so I can choose\n"
	.string "whether to keep it or not!$"

MtPompousB2F_Text_JumboGrunt_1:
	.string "No, it's not!\n"
	.string "It's murder, that's what it is!$"

MtPompousB2F_Text_AssGrunt_2:
	.string "It's not murder! It's a voluntary\n"
	.string "medical procedure! Stop trying to\l"
	.string "meddle in what I can and can't do!$"

MtPompousB2F_Text_JumboGrunt_2:
	.string "I will fight valiantly for the\n"
	.string "lives of the unborn!\p"
	.string "Stop trying to justify murder\n"
	.string "in the name of feminism!$"

MtPompousB2F_Text_AssGrunt_3:
	.string "In the name of feminism?!?\p"
	.string "Abortion is a basic human right!\p"
	.string "It's my body, so it's my choice!$"

MtPompousB2F_Text_AssGrunt_4:
	.string "Gah! An intruder!\n"
	.string "Stop violating me!$"

MtPompousB2F_Text_JumboGrunt_4:
	.string "Hey! What are you doing here?\n"
	.string "Violating the Lord's sacred house?\p"
	.string "We're having an adult conversation\n"
	.string "here, it's not for pesky\l"
	.string "little twerps like you to snoop in on!$"

MtPompousB2F_Text_AssGrunt_5:
	.string "Allow me to indroduce myself.\n"
	.string "I am a member of Team Ass.\p"
	.string "Why the stupid name?\p"
	.string "Well, our leader likes that word.\n"
	.string "It has sentimental meaning to them.\p"
	.string "Anyway, Team Ass strives to be the best\n"
	.string "that it can be.\p"
	.string "We believe in equality, justice,\n"
	.string "and free speech.\p"
	.string "Team Jumbo wants to take that all aw-$"

MtPompousB2F_Text_JumboGrunt_5:
	.string "Now wait just a minute!\p"
	.string "You didn't give him an opportunity\n"
	.string "to hear my side.\p"
	.string "Team Jumbo strives to believe in truth,\n"
	.string "justice, freedom of religion, and\l"
	.string "freedom of speech.\p"
	.string "We don't believe children need to be\n"
	.string "indoctrinated by Team Ass' lies.\p"
	.string "Team Ass wants to corrupt not just\n"
	.string "our kids, but-$"

MtPompousB2F_Text_AssGrunt_6:
	.string "We don't indoctrinate kids!\p"
	.string "We only tell them the truth, unlike\n"
	.string "you guys!\p"
	.string "We're giving them the life we never had!$"

MtPompousB2F_Text_JumboGrunt_6:
	.string "Only a fool would say that!\p"
	.string "For the fool says in his or her\n"
	.string "heart, there is no God!$"

MtPompousB2F_Text_AssGrunt_7:
	.string "FOOL!?! How dare you call me that!$"

MtPompousB2F_Text_AssGrunt_8:
	.string "Sorry, {PLAYER}, this might not\n"
	.string "be the right time to be standing here.\p"
	.string "How about a quick battle to\n"
	.string "ease our minds?$"

MtPompousB2F_Text_AssGrunt_AbortionDebater_Defeat:
	.string "Ouch!\n"
	.string "I wasn't strong enough!$"

MtPompousB2F_Text_JumboGrunt_7:
	.string "Hey, no fair!\n"
	.string "It's my turn!$"

MtPompousB2F_Text_JumboGrunt_AbortionDebater_Defeat:
	.string "Wow!\n"
	.string "I'm impressed with your battle skills!$"

MtPompousB2F_Text_PlayerTookFossils:
	.string "{PLAYER} took the Stick Fossil\n"
	.string "and the Rock Fossil!$"

MtPompousB2F_Text_JumboGrunt_8:
	.string "What the-\p"
	.string "That twerp took my Fossils!$"

MtPompousB2F_Text_AssGrunt_9:
	.string "No, they were MY fossils!\p"
	.string "Whatever, let's get out of here!$"