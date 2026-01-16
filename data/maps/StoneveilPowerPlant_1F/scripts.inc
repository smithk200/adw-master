StoneveilPowerPlant_1F_MapScripts::
	.byte 0

StoneveilPowerPlant_1F_EventScript_GalacticGrunt1::
	trainerbattle_single TRAINER_GALACTIC_GRUNT_STONEVEIL_1, StoneveilPowerPlant_1F_Text_GruntIntro1, StoneveilPowerPlant_1F_Text_GruntDefeat1
	msgbox StoneveilPowerPlant_1F_Text_GruntPostBattle1, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_Commander_Mars::
	trainerbattle_single TRAINER_COMMANDER_MARS_STONEVEIL, StoneveilPowerPlant_1F_Text_MarsIntro, StoneveilPowerPlant_1F_Text_MarsDefeat
	msgbox StoneveilPowerPlant_1F_Text_MarsPostBattle, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_Commander_Cyrus::
	trainerbattle_single TRAINER_CYRUS_1, StoneveilPowerPlant_1F_Text_CyrusIntro, StoneveilPowerPlant_1F_Text_CyrusIntro
	msgbox StoneveilPowerPlant_1F_Text_CyrusIntro, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_Text_GruntIntro1:
	.string "Hey you!\p"
	.string "You better not get in the way\n"
	.string "of what Mars has planned here!$"

StoneveilPowerPlant_1F_Text_GruntDefeat1:
	.string "Yikes!\p"
	.string "Beaten by another adult!$"

StoneveilPowerPlant_1F_Text_GruntPostBattle1:
	.string "It's not just ten-year old kids\n"
	.string "who do Pokémon battling, y'know?$"

StoneveilPowerPlant_1F_Text_MarsIntro:
	.string "Hey!\p"
	.string "We're trying to take over\n"
	.string "Team Jumbo in Stoneveil Town.\p"
	.string "But you decided to get in our way, huh?\p"
	.string "I'll show you!$"

StoneveilPowerPlant_1F_Text_MarsDefeat:
	.string "Well, I never!$"

StoneveilPowerPlant_1F_Text_MarsPostBattle:
	.string "Gah! You beat me!\p"
	.string "It doesn't matter that I lost!\p"
	.string "We will still take over Team Jumbo!\p"
	.string "Team Galactic, retreat!$"

StoneveilPowerPlant_1F_Text_CyrusIntro:
	.string "I'm not supposed to be here.$"