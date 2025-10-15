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