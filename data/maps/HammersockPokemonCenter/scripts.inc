.set LOCALID_NURSE, 1

HammersockPokemonCenter_MapScripts::
	.byte 0

Hammersock_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Hammersock_PokemonCenter_1F_OnTransition
	.byte 0

Hammersock_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	end

Hammersock_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	release
	end

Hammersock_PokemonCenter_EventScriptBlackBelt::
	lock
	faceplayer
	msgbox Hammersock_PokemonCenter_Text_WirelessBattleFunctionality, MSGBOX_DEFAULT
	release
	end

Hammersock_PokemonCenter_Text_WirelessBattleFunctionality::
	.string "This is a ROM hack, so expect\n"
	.string "there to not be any Wireless Adapter\l"
	.string "compatibility or whatever.\p"
	.string "If you REALLY want to partake in\n"
	.string "Pokémon battles in this game,\l"
	.string "use your imagination!$"