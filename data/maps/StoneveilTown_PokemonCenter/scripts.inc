StoneveilTown_PokemonCenter_MapScripts::
	.byte 0

StoneveilTown_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	msgbox StoneveilTown_PokemonCenter_1F_TextNurse, MSGBOX_DEFAULT
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

StoneveilTown_PokemonCenter_1F_EventScript_Man::
	lock
	faceplayer
	msgbox SStoneveilTown_PokemonCenter_1F_TextMan, MSGBOX_DEFAULT
	release
	end

StoneveilTown_PokemonCenter_1F_TextNurse:
	.string "Taking a break from Team Jumbo, huh?$"

SStoneveilTown_PokemonCenter_1F_TextMan:
	.string "I'm wondering whether the occupation\n"
	.string "of our beautiful Stoneveil by\l"
	.string "Team Jumbo will come to an end.\p"
	.string "I'm too scared to leave the Pokémon\n"
	.string "Center…$"