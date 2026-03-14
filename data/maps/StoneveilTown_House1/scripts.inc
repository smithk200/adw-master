StoneveilTown_House1_MapScripts::
	.byte 0

StoneveilTown_House1_EventScriptWoman::
	lock
	faceplayer
	msgbox StoneveilTown_House1_TextWoman, MSGBOX_DEFAULT
	release
	end

StoneveilTown_House1_EventScriptGirl1::
	lock
	faceplayer
	msgbox StoneveilTown_House1_TextGirl1, MSGBOX_DEFAULT
	release
	end

StoneveilTown_House1_EventScriptGirl2::
	lock
	faceplayer
	msgbox StoneveilTown_House1_TextGirl2, MSGBOX_DEFAULT
	release
	end

StoneveilTown_House1_TextWoman:
	.string "Those Team Jumbo Grunts say that\n"
	.string "women exist to cook and clean\l"
	.string "for the men…\p"
	.string "I am more than just a housewife,\n"
	.string "right?$"

StoneveilTown_House1_TextGirl1:
	.string "Weee!\n"
	.string "I'm an airplane!$"

StoneveilTown_House1_TextGirl2:
	.string "I'm gonna get you!\p"
	.string "I'm gonna get you!$"