HammersockTrainersClub_MapScripts::
	.byte 0

HammersockTrainersClub_Event_Script_OldManTrainer::
	trainerbattle_single TRAINER_ARLO_1, HammersockTrainersClub_Text_ArloIntro, HammersockTrainersClub_Text_ArloDefeat
	cleartrainerflag TRAINER_ARLO_1
	msgbox HammersockTrainersClub_Text_ArloPostBattle, MSGBOX_AUTOCLOSE
	end

HammersockTrainersClub_Event_Script_Scientist::
	trainerbattle_single TRAINER_BILL_1, HammersockTrainersClub_Text_BillIntro, HammersockTrainersClub_Text_BillDefeat
	cleartrainerflag TRAINER_BILL_1
	msgbox HammersockTrainersClub_Text_BillPostBattle, MSGBOX_AUTOCLOSE
	end

HammersockTrainersClub_Event_Script_BlackBelt::
	trainerbattle_single TRAINER_HIROSHI_1, HammersockTrainersClub_Text_HiroshiIntro, HammersockTrainersClub_Text_HiroshiDefeat
	cleartrainerflag TRAINER_HIROSHI_1
	msgbox HammersockTrainersClub_Text_HiroshiPostBattle, MSGBOX_AUTOCLOSE
	end

HammersockTrainersClub_Event_Script_Beauty::
	trainerbattle_single TRAINER_SUZY_1, HammersockTrainersClub_Text_SuzyIntro, HammersockTrainersClub_Text_SuzyDefeat
	cleartrainerflag TRAINER_SUZY_1
	msgbox HammersockTrainersClub_Text_SuzyPostBattle, MSGBOX_AUTOCLOSE
	end

HammersockTrainersClub_Event_Script_OldMan::
	lock
	faceplayer
	msgbox HammersockTrainersClub_Text_OldMan, MSGBOX_AUTOCLOSE
	release
	end

HammersockTrainersClub_Text_ArloIntro:
	.string "I may be old, but I still have\n"
	.string "the fire of battle within me!$"

HammersockTrainersClub_Text_BillIntro:
	.string "Oh yeah!\n"
	.string "Science rules!$"

HammersockTrainersClub_Text_HiroshiIntro:
	.string "I know the ways of the ancient samurai!\n"
	.string "YAAAAH!$"

HammersockTrainersClub_Text_SuzyIntro:
	.string "I spend an hour a day just\n"
	.string "to look beautiful!$"

HammersockTrainersClub_Text_ArloDefeat:
	.string "Ah, I have been defeated once again!$"

HammersockTrainersClub_Text_BillDefeat:
	.string "No, my science...$"

HammersockTrainersClub_Text_HiroshiDefeat:
	.string "You have done well, young one.$"

HammersockTrainersClub_Text_SuzyDefeat:
	.string "Hmph!\n"
	.string "Well, I never!$"

HammersockTrainersClub_Text_ArloPostBattle:
	.string "You battle well, young one!$"

HammersockTrainersClub_Text_BillPostBattle:
	.string "Even my science wasn't enough\n"
	.string "to defeat you...$"

HammersockTrainersClub_Text_HiroshiPostBattle:
	.string "Come back again and train some more,\n"
	.string "you will need it in the long run!$"

HammersockTrainersClub_Text_SuzyPostBattle:
	.string "I'm still not over it...$"

HammersockTrainersClub_Text_OldMan:
	.string "Can you defeat all these trainers here?$"