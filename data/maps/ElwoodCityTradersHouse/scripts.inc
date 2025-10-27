ElwoodCityTradersHouse_MapScripts::
	.byte 0

ElwoodCity_EventScriptTradersHouse::
	lock
	faceplayer
	goto_if_set FLAG_IN_GAME_TRADE_BUIZEL, ElwoodCity_EventScriptTradersHouse_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_BUIZEL
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox ElwoodCity_TextOfferToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ElwoodCity_EventScriptTradersHouse_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ElwoodCity_EventScriptTradersHouse_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, ElwoodCity_EventScriptTradersHouse_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox ElwoodCity_TradersHouse_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	release
	end

ElwoodCity_EventScriptTradersHouse_TradeCompleted::
	msgbox ElwoodCity_TradersHouse_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptTradersHouse_NotRequestedMon::
	msgbox ElwoodCity_TradersHouse_Text_ThatsNotALandshit, MSGBOX_DEFAULT
	release
	end

ElwoodCity_EventScriptTradersHouse_DeclineTrade::
	msgbox ElwoodCity_TextTradersHouse_DeclineTrade, MSGBOX_DEFAULT
	release
	end

ElwoodCity_TextOfferToTrade::
	.string "I want to battle with a Landshit,\n"
	.string "but I'm too afraid to catch one.\p"
	.string "If you give me a Landshit, I'll\n"
	.string "give you a Buizel.\p"
	.string "It's supposed to be good against Rocky.$"

ElwoodCity_TextTradersHouse_DeclineTrade::
	.string "You won't trade with me?\n"
	.string "Aw man...$"

ElwoodCity_TradersHouse_Text_PleaseBeGoodToMyPokemon:
	.string "Please take good care\n"
	.string "of my Buizel!$"

ElwoodCity_TradersHouse_Text_ThatsNotALandshit:
	.string "That's not a Landshit...$"