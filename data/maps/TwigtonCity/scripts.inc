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

TwigtonCity_TextMomsHouse:
	.string "Mom's House$"

TwigtonCity_TextNedsHouse:
	.string "Ned's House$"

TwigtonCity_TextThePowerOfScienceIsStaggering:
	.string "The power of science is staggering!\p"
	.string "We now have vaccines to counter the\n"
	.string "evil COVID-19 pandemic.\p"
	.string "Some people say they don't even work!$"