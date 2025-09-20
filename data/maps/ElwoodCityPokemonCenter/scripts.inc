ElwoodCityPokemonCenter_MapScripts::
	.byte 0

ElwoodCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

ElwoodCityPokemonCenterEventScriptFatMan::
	lock
	faceplayer
	msgbox ElwoodCityPokemonCenter_TextFatMan, MSGBOX_DEFAULT
	release
	end

ElwoodCityPokemonCenter_TextFatMan::
	.string "Did you know?\p"
	.string "Eevee only evolves using stones now.\n"
	.string "No more stupid day-night cycle or\l"
	.string "friendship evolutions!\p"
	.string "Also, Eevee has several new forms\n"
	.string "that it can evolve into.\p"
	.string "In fact, I've heard it's one for\n"
	.string "every type that exists!$"