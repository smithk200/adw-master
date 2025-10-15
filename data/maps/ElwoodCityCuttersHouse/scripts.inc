ElwoodCityCuttersHouse_MapScripts::
	.byte 0

ElwoodCity_CuttersHouse_EventScript_Cutter::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_CUT, ElwoodCity_CuttersHouse_EventScript_ExplainCut
	msgbox ElwoodCity_CuttersHouse_Text_ExplainCutBeforeObtainingIt, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	setflag FLAG_RECEIVED_HM_CUT
	msgbox ElwoodCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

ElwoodCity_CuttersHouse_EventScript_ExplainCut::
	msgbox ElwoodCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	goto_if_unset FLAG_BADGE01_GET, ElwoodCity_CuttersHouse_EventScript_NeedFirstBadge
	release
	end

ElwoodCity_CuttersHouse_EventScript_NeedFirstBadge::
	msgbox ElwoodCity_CuttersHouse_Text_NeedFirstBadge, MSGBOX_DEFAULT
	release
	end

ElwoodCity_CuttersHouse_Text_ExplainCutBeforeObtainingIt:
	.string "Hngrgh! Hngwaah!\p"
	.string "I have this handy-dandy Hidden\n"
	.string "Machine, or HM for short.\p"
	.string "What does this do, you may ask?\p"
	.string "Why, it's Cut, of course!\p"
	.string "You can use it to cut small trees that\n"
	.string "are blocking your path.\p"
	.string "Betcha knew that already, huh?\p"
	.string "Here, take this machine!$"

ElwoodCity_CuttersHouse_Text_ExplainCut:
	.string "Just simple have a Pokémon in\n"
	.string "your party face a small tree\l"
	.string "and have them cut it!$"

ElwoodCity_CuttersHouse_Text_NeedFirstBadge:
	.string "Well, in any case, you need to earn\n"
	.string "the Gym Badge in this city if you\l"
	.string "want to cut those trees!$"