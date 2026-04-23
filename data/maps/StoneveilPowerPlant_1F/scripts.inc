StoneveilPowerPlant_1F_MapScripts::
	.byte 0

StoneveilPowerPlant_1F_EventScript_GalacticGrunt1::
	trainerbattle_single TRAINER_GALACTIC_GRUNT_STONEVEIL_1, StoneveilPowerPlant_1F_Text_GruntIntro1, StoneveilPowerPlant_1F_Text_GruntDefeat1
	msgbox StoneveilPowerPlant_1F_Text_GruntPostBattle1, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_GalacticGrunt2::
	trainerbattle_single TRAINER_GALACTIC_GRUNT_STONEVEIL_2, StoneveilPowerPlant_1F_Text_GruntIntro2, StoneveilPowerPlant_1F_Text_GruntDefeat2
	msgbox StoneveilPowerPlant_1F_Text_GruntPostBattle2, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_GalacticGrunt3::
	trainerbattle_single TRAINER_GALACTIC_GRUNT_STONEVEIL_3, StoneveilPowerPlant_1F_Text_GruntIntro3, StoneveilPowerPlant_1F_Text_GruntDefeat3
	msgbox StoneveilPowerPlant_1F_Text_GruntPostBattle3, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_GalacticGrunt4::
	trainerbattle_single TRAINER_GALACTIC_GRUNT_STONEVEIL_4, StoneveilPowerPlant_1F_Text_GruntIntro4, StoneveilPowerPlant_1F_Text_GruntDefeat4
	msgbox StoneveilPowerPlant_1F_Text_GruntPostBattle4, MSGBOX_AUTOCLOSE
	end

StoneveilPowerPlant_1F_EventScript_Commander_Mars::
	trainerbattle_single TRAINER_COMMANDER_MARS_STONEVEIL, StoneveilPowerPlant_1F_Text_MarsIntro, StoneveilPowerPlant_1F_Text_MarsDefeat
	msgbox StoneveilPowerPlant_1F_Text_MarsPostBattle, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	delay 30
	setflag FLAG_HIDE_GRUNTS_STONEVEIL_POWER_PLANT
	removeobject 1
	removeobject 2
	removeobject 4
	removeobject 7
	removeobject 8
	warp MAP_STONEVEIL_POWER_PLANT_1F, 21, 17
	fadescreen FADE_FROM_BLACK
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

StoneveilPowerPlant_1F_Text_GruntIntro2:
	.string "Eek!\n"
	.string "An intruder!$"

StoneveilPowerPlant_1F_Text_GruntDefeat2:
	.string "Gah!\n"
	.string "You insolent little brat, you!$"

StoneveilPowerPlant_1F_Text_GruntPostBattle2:
	.string "Team Galactic has something planned\n"
	.string "here, and we're going to do it\l"
	.string "whether you like it or not!$"

StoneveilPowerPlant_1F_Text_GruntIntro3:
	.string "Commander Mars said something about\n"
	.string "using the Power Plant to shut down\l"
	.string "Stoneveil Town?\p"
	.string "I can't wait to see it happen!$"

StoneveilPowerPlant_1F_Text_GruntDefeat3:
	.string "How dare you get in the way of\n"
	.string "our plans!$"

StoneveilPowerPlant_1F_Text_GruntPostBattle3:
	.string "After me, you still have to get\n"
	.string "through Commander Mars!\p"
	.string "Good luck with that, peasant!$"

StoneveilPowerPlant_1F_Text_GruntIntro4:
	.string "Being on guard duty is quite\n"
	.string "boring. But it's necessary for our\l"
	.string "plan to work.$"

StoneveilPowerPlant_1F_Text_GruntDefeat4:
	.string "Ouch!\n"
	.string "Down and out!$"

StoneveilPowerPlant_1F_Text_GruntPostBattle4:
	.string "You don't have what it takes\n"
	.string "to take down Commander Mars, you fool!$"

