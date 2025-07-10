.set LOCALID_CLERK, 1

HammersockMart_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HammersockMart_Mart_OnFrame
	.byte 0

HammersockMart_Mart_OnFrame::
	map_script_2 VAR_HAMMERSOCK_MART_STATE, 0, HammersockMart_EventScript_Doordash
	.2byte 0

HammersockMart_EventScript_Doordash::
	lockall
	applymovement LOCALID_CLERK, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox HammersockMart_Text_YouCameFromTwigton
	closemessage
	applymovement LOCALID_CLERK, HammersockMart_Movement_FacePlayer
	applymovement OBJ_EVENT_ID_PLAYER, HammersockMart_Movement_ApproachCounter
	waitmovement 0
	msgbox HammersockMart_Text_ConformTheOrder
	closemessage
	message HammersockMart_Text_Text_PlayerConfirmedOrder
	closemessage
	giveitem ITEM_TWIGS_FOOD
	setvar VAR_HAMMERSOCK_MART_STATE, 1
	setvar VAR_TWIGTON_CITY_MAP_STATE_LAB, 6
	releaseall
	end

Hammersock_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Hammersock_Mart_EventScript_FatMan::
	lock
	faceplayer
	msgbox Hammersock_Mart_TextFatMan, MSGBOX_DEFAULT
	release
	end

Hammersock_Mart_EventScript_Woman::
	lock
	faceplayer
	msgbox Hammersock_Mart_TextWoman, MSGBOX_DEFAULT
	release
	end

HammersockMart_Movement_FacePlayer::
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

HammersockMart_Movement_ApproachCounter::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

HammersockMart_Text_YouCameFromTwigton::
	.string "Order for Rodney Twig?$"

HammersockMart_Text_ConformTheOrder::
	.string "Could you confirm the order?$"

HammersockMart_Text_Text_PlayerConfirmedOrder::
	.string "{PLAYER} confirmed Prof. Twig's order!$"

Hammersock_Mart_TextFatMan::
	.string "Did you know?\p"
	.string "You can buy Potions, Poké Balls,\n"
	.string "Ethers, and many more items\l"
	.string "from a Poké Mart.\p"
	.string "Yes, that's right, I said Ethers!\p"
	.string "Now you can actually BUY them\n"
	.string "instead of having to pick\l"
	.string "them up from the ground!$"

Hammersock_Mart_TextWoman::
	.string "I want to stock up on Potions,\n"
	.string "but I'm having trouble with which\l"
	.string "one I should get.\p"
	.string "Should I get the Potion, or the\n"
	.string "Super Potion?$"