TwigtonCity_MapScripts::
	.byte 0

TwigtonCity_EventScriptMomsHouse::
	msgbox TwigtonCity_TextMomsHouse, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptNedsHouse::
	msgbox TwigtonCity_TextNedsHouse, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptThePowerOfScience::
	lock
	faceplayer
	msgbox TwigtonCity_TextThePowerOfScienceIsStaggering, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptSmellsLikeTeenSpirit::
	lock
	faceplayer
	msgbox TwigtonCity_TextSmellsLikeTeenSpirit, MSGBOX_DEFAULT
	release
	end

TwigtonCity_EventScriptMomsHouse_DoNotEnter::
	lock
	faceplayer
	msgbox TwigtonCity_TextMomsHouse_DoNotEnter, MSGBOX_DEFAULT
	release
	end

TwigtonCity_TextMomsHouse:
	.string "Mom's House$"

TwigtonCity_TextNedsHouse:
	.string "Ned's House$"

TwigtonCity_TextThePowerOfScienceIsStaggering:
	.string "The power of science is staggering!\p"
	.string "We now have vaccines to counter the\n"
	.string "evil COVID-19 pandemic.\p"
	.string "Some people say they don't even work!$"

TwigtonCity_TextSmellsLikeTeenSpirit:
	.string "Professor Twig is fond of the song\n"
	.string "“Smells Like Teen Spirit” by Nirvana.\p"
	.string "He blasts it all the time in his casinos\n"
	.string "and all over the city.$"

TwigtonCity_TextMomsHouse_DoNotEnter:
	.string "You start to put your fist on the door\n"
	.string "to knock.\p"
	.string "You then realize that your mom will\n"
	.string "probably ground you for life if you\l"
	.string "open this door.$"