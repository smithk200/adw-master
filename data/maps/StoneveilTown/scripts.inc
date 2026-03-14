.equ LOCALID_JUMBO_GRUNT,  1

StoneveilTown_MapScripts::
	.byte 0

StoneveilTown_EventScript_TriggerDirectionTop::
	setvar VAR_TEMP_1, 0
	end

StoneveilTown_EventScript_TriggerDirectionBottom::
	setvar VAR_TEMP_1, 1
	end

StoneveilTown_EventScript_Grunt1::
	lock
	faceplayer
	msgbox StoneveilTown_Text_Grunt1, MSGBOX_DEFAULT
	release
	end

StoneveilTown_EventScript_Grunt2::
	lock
	faceplayer
	applymovement LOCALID_JUMBO_GRUNT, Common_Movement_ExclamationMark
	msgbox StoneveilTown_Text_Grunt2, MSGBOX_AUTOCLOSE
	goto_if_eq VAR_TEMP_1, 0, StoneveilTown_EventScript_Grunt2PushesPlayerTop
	goto_if_eq VAR_TEMP_1, 1, StoneveilTown_EventScript_Grunt2PushesPlayerBottom
	end

StoneveilTown_EventScript_Grunt2PushesPlayerTop::
	applymovement OBJ_EVENT_ID_PLAYER, StoneveilTown_Movement_PushedBackByGruntTop
	waitmovement 0
	release
	end

StoneveilTown_EventScript_Grunt2PushesPlayerBottom::
	applymovement OBJ_EVENT_ID_PLAYER, StoneveilTown_Movement_PushedBackByGruntBottom
	waitmovement 0
	release
	end

StoneveilTown_EventScript_Grunt3::
	lock
	faceplayer
	msgbox StoneveilTown_Text_Grunt3, MSGBOX_DEFAULT
	release
	end

StoneveilTown_EventScript_Grunt4::
	lock
	faceplayer
	msgbox StoneveilTown_Text_Grunt4, MSGBOX_DEFAULT
	release
	end

StoneveilTown_Movement_PushedBackByGruntBottom::
	walk_down
	step_end

StoneveilTown_Movement_PushedBackByGruntTop::
	walk_up
	step_end

StoneveilTown_Text_Grunt1:
	.string "Hey! What are you doing here?\p"
	.string "We're standing guard here in\n"
	.string "Stoneveil Town!$"

StoneveilTown_Text_Grunt2:
	.string "Hey!\p"
	.string "No passing through without a Team\n"
	.string "Jumbo card!$"

StoneveilTown_Text_Grunt3:
	.string "These poor heathens…\n"
	.string "Will their souls ever be saved?$"

StoneveilTown_Text_Grunt4:
	.string "We're making sure that none\n"
	.string "of these civilians escape\l"
	.string "their homes!$"
