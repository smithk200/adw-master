ElwoodCity_MapScripts::
	.byte 0

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