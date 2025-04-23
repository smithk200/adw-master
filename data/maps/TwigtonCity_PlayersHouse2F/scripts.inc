TwigtonCity_PlayersHouse2F_MapScripts::
	.byte 0

TwigtonCity_PlayersHouse2F_EventScriptPlayedWithSwitch2::
	msgbox TwigtonCityPlayersHouse2F_PlayedWithSwitch_2_Text, MSGBOX_AUTOCLOSE
	release
	end

TwigtonCity_PlayersHouse2F_EventScriptMatureContent::
	msgbox TwigtonCityPlayersHouse2F_WarningMatureContent_Text, MSGBOX_DEFAULT
	release
	end

TwigtonCityPlayersHouse2F_PlayedWithSwitch_2_Text:
	.string "{PLAYER} played with the Switch 2.\n"
	.string "Get off your ass and get out of here!$"

TwigtonCityPlayersHouse2F_WarningMatureContent_Text:
	.string "Warning: This hack contains mature\n"
	.string "content and themes.\p"
	.string "This hack is based on the creator's life\n"
	.string "with their abusive mother.\p"
	.string "It will contain references to things that\n"
	.string "the creator knows about and obsesses over\l"
	.string "deeply.\p"
	.string "If you have any questions, please contact\p"
	.string "IAmAwesome2 on Discord.$"