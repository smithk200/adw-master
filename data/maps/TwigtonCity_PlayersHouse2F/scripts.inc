TwigtonCity_PlayersHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, TwigtonCity_PlayersHouse2F_OnLoad
	.byte 0

TwigtonCity_PlayersHouse2F_OnLoad::
	setflag FLAG_SYS_B_DASH
	end

TwigtonCity_PlayersHouse2F_EventScriptPlayedWithSwitch2::
	msgbox TwigtonCityPlayersHouse2F_PlayedWithSwitch_2_Text, MSGBOX_AUTOCLOSE
	release
	end

TwigtonCity_PlayersHouse2F_EventScriptMatureContent::
	msgbox TwigtonCityPlayersHouse2F_WarningMatureContent_Text, MSGBOX_DEFAULT
	release
	end

TwigtonCity_PlayersHouse2F_EventScript_JumpOutWindow::
	goto_if_unset FLAG_TALKED_TO_MOM_BEGINNING_OF_GAME, TwigtonCity_PlayersHouse2F_EventScript_End
	msgbox TwigtonCity_PlayersHouse2F_JumpOutWindowChoice, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, TwigtonCity_PlayersHouse2F_JumpOutWindow_No
	warp MAP_TWIGTON_CITY, 33, 26
	release
	end

TwigtonCity_MomsRoom2F_EventScriptPlayerBookshelf::
	msgbox TwigtonCityPlayersHouse2F_Text_BooksOnShelf, MSGBOX_DEFAULT
	release
	end

TwigtonCity_PlayersHouse2F_EventScript_End::
	release
	end

TwigtonCity_PlayersHouse2F_JumpOutWindow_No::
	msgbox TwigtonCityPlayersHouse2F_Text_NoOnesForcingYou, MSGBOX_DEFAULT
	release
	end

TwigtonCity_PlayersHouse2F_JumpOutWindowChoice:
	.string "Do you want to jump out the window and\n"
	.string "start on your Pokémon journey?$"

TwigtonCityPlayersHouse2F_Text_NoOnesForcingYou:
	.string "No one's forcing you to jump\n"
	.string "out the window...\p"
	.string "But your mother refuses to let\n"
	.string "you leave the house!$"

TwigtonCityPlayersHouse2F_PlayedWithSwitch_2_Text:
	.string "{RIVAL} played with the Switch 2.\n"
	.string "Get off your ass and get out of here!$"

TwigtonCityPlayersHouse2F_WarningMatureContent_Text:
	.string "Warning: This hack contains mature\n"
	.string "content and themes.\p"
	.string "This hack is based on the creator's\n"
	.string "life with their abusive mother.\p"
	.string "It will contain references to\n"
	.string "things that the creator knows\l"
	.string "about and obsesses over deeply.\p"
	.string "If you have any questions, please\n"
	.string "contact IAmAwesome2 on Discord.$"

TwigtonCityPlayersHouse2F_Text_BooksOnShelf:
	.string "Books on shelf:\p"
	.string "The entire Michael Vey series,\n"
	.string "the Scythe series by Neal Shusterman,\p"
	.string "How to Jump From A Window Safely,\n"
	.string "Coding in C, and many, many more.$"