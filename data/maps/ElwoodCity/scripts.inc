ElwoodCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ElwoodCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, ElwoodCity_OnLoad
	.byte 0

ElwoodCity_OnTransition::
	setflag FLAG_VISITED_ELWOOD_CITY
	end

ElwoodCity_OnLoad::
	setrespawn HEAL_LOCATION_ELWOOD_CITY
	end

ElwoodCity_EventScriptLakewoodElementary::
	msgbox ElwoodCity_TextLakewoodElementary, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptElwoodGym::
	msgbox ElwoodCity_TextElwoodGym, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptDuperMarket::
	msgbox ElwoodCity_TextDuperMarket, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptCuttersHouse::
	msgbox ElwoodCity_TextCuttersHouse, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptElwoodCity::
	msgbox ElwoodCity_TextElwoodCity, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptFatMan::
	lock
	faceplayer
	msgbox ElwoodCity_TextFatMan, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptGirl::
	lock
	faceplayer
	msgbox ElwoodCity_TextGirl, MSGBOX_DEFAULT
	msgbox ElwoodCity_TextGirl_NextPhrase, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptLady::
	lock
	faceplayer
	msgbox ElwoodCity_TextLady, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptCuttingGuy::
	lock
	faceplayer
	msgbox ElwoodCity_TextCuttingGuy, MSGBOX_DEFAULT
	release
	end

ElwoodCity_TextLakewoodElementary::
	.string "Lakewood Elementary\p"
	.string "Devoted to shaping the hearts\n"
	.string "and minds of Elwood City's youth.$"

ElwoodCity_TextElwoodGym::
	.string "Elwood City Gym\n"
	.string "Leader: Rocky\p"
	.string "The pint-sized pebble of power!$"

ElwoodCity_TextDuperMarket:
	.string "Duper Market\p"
	.string "The store for all your non-fabric\n"
	.string "softening needs!$"

ElwoodCity_TextCuttersHouse:
	.string "Cutter's House\p"
	.string "From timber to stone,\n"
	.string "he's your man!$"

ElwoodCity_TextElwoodCity:
	.string "Elwood City\p"
	.string "“Every day when you're walking\n"
	.string "down the street\p"
	.string "And everybody that you meet\p"
	.string "Has an original point of view.”$"

ElwoodCity_TextFatMan:
	.string "Have you met our Gym\n"
	.string "Leader, Rocky?\p"
	.string "He's only nine years old\n"
	.string "but he's very powerful!\p"
	.string "He's more powerful than Brock\n"
	.string "from Pewter City in Kanto!$"

ElwoodCity_TextGirl:
	.string "Have you ever wondered why all\n"
	.string "the first Gym Leaders of any region\l"
	.string "train with the Rock type?\p"
	.string "It's because Rock types are\n"
	.string "supposed to be a strong type.\p"
	.string "But they have many weaknesses, so\n"
	.string "the Gym Leaders are more of\l"
	.string "a pushover than anything else.$"

ElwoodCity_TextGirl_NextPhrase:
	.string "Oh?\p"
	.string "Gym Leader Falkner from Johto\n"
	.string "isn't a Rock-type trainer?\p"
	.string "Not to mention the first Gym\n"
	.string "Leaders from Unova, Kalos,\l"
	.string "Alola, Galar, and Paldea?\p"
	.string "Well, there's more to\n"
	.string "the regions than I thought!$"

ElwoodCity_TextLady:
	.string "Have you been to\n"
	.string "Lakewood Elementary?\p"
	.string "My son Alan goes there!\p"
	.string "His classmates call him\n"
	.string "“The Brain” because he's so smart.$"

ElwoodCity_TextCuttingGuy:
	.string "Did you see those trees\n"
	.string "at the edge of town?\p"
	.string "I think your Pokémon need to\n"
	.string "use a certain move in order to\l"
	.string "Cut them down.\p"
	.string "Oh, which move was it again?\p"
	.string "It's on the tip of my tongue!\p"
	.string "C'mon, I JUST have got to\n"
	.string "know the name of the move!$"