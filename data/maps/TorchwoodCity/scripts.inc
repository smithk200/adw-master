TorchwoodCity_MapScripts::
	.byte 0

TorchwoodCity_EventScript_EnterTardis::
	msgbox TorchwoodCity_Text_EnterTardis, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TorchwoodCity_EventScript_DidNotEnterTardis
	warp MAP_TARDIS_ROOM1, 9, 2
	release
	end

TorchwoodCity_Text_EnterTardis:
	.string "Do you want to enter the TARDIS?$"

TorchwoodCity_EventScript_DidNotEnterTardis:
	.string "{PLAYER} did not enter the TARDIS.$"