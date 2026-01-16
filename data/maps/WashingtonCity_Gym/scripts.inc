WashingtonCity_Gym_MapScripts::
	.byte 0

WashingtonCity_Gym_EventScript_Joe::
	trainerbattle_single TRAINER_JOE, WashingtonCity_Gym_TextJoeIntro, WashingtonCity_Gym_TextJoeDefeat
	msgbox WashingtonCity_Gym_TextJoeDefeated
	release
	end

WashingtonCity_Gym_TextJoeIntro:
	.string "Hullo there!\p"
	.string "I’m Joe Biden, leader of\n"
	.string "Washington City.\p"
	.string "I don’t know what it means\n"
	.string "to be strong or how I got to\l"
	.string "be the Gym Leader.\p"
	.string "Wait, what was I saying?\p"
	.string "Oh yeah…\p"
	.string "I’ve got hairy legs that\n"
	.string "turn blond in the sun…$"

WashingtonCity_Gym_TextJoeDefeat:
	.string "Huh?\n"
	.string "Did I just lose?$"

WashingtonCity_Gym_TextJoeDefeated:
	.string "Where even am I?\n"
	.string "I'm so lost…$"