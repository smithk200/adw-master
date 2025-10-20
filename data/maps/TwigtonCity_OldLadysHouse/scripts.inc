TwigtonCity_OldLadysHouse_MapScripts::
	.byte 0

TwigtonCity_OldLadysHouse_EventScript_Nurse::
	lock
	faceplayer
	goto_if_set FLAG_RECIEVED_STARTER_POKEMON, TwigtonCity_OldLadysHouse_EventScript_HealPokemon
	msgbox TwigtonCity_OldLadysHouse_TextYouDontHaveAStarterPokemon, MSGBOX_DEFAULT
	release
	end

TwigtonCity_OldLadysHouse_EventScript_HealPokemon::
	goto_if_set FLAG_TWIGTON_HEALING_LADY, TwigtonCity_OldLadysHouse_EventScript_HealPokemonSpeedy
	msgbox TwigtonCity_OldLadysHouse_TextIAmAHealingLady, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	setflag FLAG_TWIGTON_HEALING_LADY
	msgbox TwigtonCity_OldLadysHouse_TextAnyTimeYouNeedMe, MSGBOX_DEFAULT
	release
	end

TwigtonCity_OldLadysHouse_EventScript_HealPokemonSpeedy::
	lock
	faceplayer
	msgbox gText_IllTakeYourPkmn, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	release
	end

TwigtonCity_OldLadysHouse_TextYouDontHaveAStarterPokemon:
	.string "You don't have a Pokémon yet.\p"
	.string "Talk to me when you have\n"
	.string "your own Pokémon.$"

TwigtonCity_OldLadysHouse_TextIAmAHealingLady:
	.string "I am a nurse who specializes in\n"
	.string "the healing of Pokémon.\p"
	.string "Here, let me take your Pokémon\n"
	.string "for a few seconds.$"

TwigtonCity_OldLadysHouse_TextAnyTimeYouNeedMe:
	.string "Any time you need to heal your Pokémon,\n"
	.string "just remember to go to the blue house\l"
	.string "in Twigton City!$"