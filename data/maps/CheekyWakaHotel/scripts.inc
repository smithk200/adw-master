CheekyWakaHotel_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, CheekyWakaHotel_OnLoad
	.byte 0

CheekyWakaHotel_OnFrame::
	.2byte 0

CheekyWakaHotel_OnLoad::
	goto_if_unset FLAG_DEFEATED_MATT_WALSH_ROUTE_8, CheekyWakaHotel_EventScript_ClearMattWalshFlag
	end

CheekyWakaHotel_EventScript_CheckMattWalshFlag::
	goto_if_unset FLAG_DEFEATED_MATT_WALSH_ROUTE_8, CheekyWakaHotel_EventScript_ClearMattWalshFlag
	end

CheekyWakaHotel_Trigger_SetMattWalshFlag:: @to prevent the player from accessing Matt Walsh on the wrong warp (aka the east Cheeky Waka Hotel entrance)
	goto_if_unset FLAG_DEFEATED_MATT_WALSH_ROUTE_8, CheekyWakaHotel_EventScript_SetMattWalshFlag
	end

CheekyWakaHotel_Trigger_ClearMattWalshFlag::
	goto_if_unset FLAG_DEFEATED_MATT_WALSH_ROUTE_8, CheekyWakaHotel_EventScript_ClearMattWalshFlag
	end

CheekyWakaHotel_EventScript_SetMattWalshFlag::
	setflag FLAG_HIDE_MATT_WALSH_ROUTE_8
	end

CheekyWakaHotel_EventScript_ClearMattWalshFlag::
	clearflag FLAG_HIDE_MATT_WALSH_ROUTE_8
	end

CheekyWakaHotel_EventScript_Attendant::
	lock
	faceplayer
	msgbox CheekyWakaHotel_Text_WeAreBookedLetMeHeal, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox CheekyWakaHotel_Text_ComeAgainSoon, MSGBOX_DEFAULT
	release
	end

CheekyWakaHotel_Text_WeAreBookedLetMeHeal:
	.string "I'm sorry, we are totally booked.\n"
	.string "You can rest here, if you wish.$"

CheekyWakaHotel_Text_ComeAgainSoon:
	.string "Come again soon!$"