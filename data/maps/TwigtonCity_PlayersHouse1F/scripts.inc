TwigtonCity_PlayersHouse1F_MapScripts::
	.byte 0

TwigtonCity_PlayersHouse1F_EventScriptMomBeginningOfGame::
	faceplayer
	msgbox TwigtonCity_PlayersHouse1F_MomIntroText, MSGBOX_DEFAULT
	setflag FLAG_TALKED_TO_MOM_BEGINNING_OF_GAME
	release
	end

TwigtonCity_PlayersHouse1F_MomIntroText:
	.string "Mom: You aren't going anywhere, buster!$"