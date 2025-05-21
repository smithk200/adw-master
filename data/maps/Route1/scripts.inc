Route1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route1_OnLoad
	.byte 0

Route1_OnLoad::
	end

Route1_Sign_Twigton::
	lock
	msgbox Route1_Sign_Text_Twigton, MSGBOX_DEFAULT
	release
	end

Route1_Sign_Hammersock::
	lock
	msgbox Route1_Sign_Text_Hammersock, MSGBOX_DEFAULT
	release
	end

Route1_EventScript_BoyInGrass::
	lock
	faceplayer
	msgbox Route1_Text_BoyInGrass, MSGBOX_DEFAULT
	release
	end

Route1_EventScript_Billy::
	trainerbattle_single TRAINER_BILLY, Route1_Text_BillyIntro, Route1_Text_BillyDefeat
	msgbox Route1_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Sophia::
	trainerbattle_single TRAINER_SOPHIA, Route1_Text_SophiaIntro, Route1_Text_SophiaDefeat
	msgbox Route1_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route1_Text_BillyIntro:
	.string "Wow! You're a Pokémon Trainer!\n"
	.string "I'm a Pokémon Trainer, too!\p"
	.string "Let's battle!!!$"

Route1_Text_BillyDefeat:
	.string "Guess I wasn't a very strong Trainer...$"

Route1_Text_BillyPostBattle:
	.string "Maybe I need to train my Pokémon more\n"
	.string "in the Wild Grass.\p"
	.string "That should level it up, right?$"

Route1_Text_SophiaIntro:
	.string "Eek!\n"
	.string "Don't touch me, you pervert!$"

Route1_Text_SophiaDefeat:
	.string "Stop staring at me!$"

Route1_Text_SophiaPostBattle:
	.string "I'm gonna report you for\n"
	.string "sexual harassment!\p"
	.string "This is unjust on so many levels!$"

Route1_Text_BoyInGrass:
	.string "I like wandering in the grass!\n"
	.string "It's so fun, I could do it forever!\p"
	.string "La-dee-dee, la-dee-dum...$"

Route1_Sign_Text_Twigton:
	.string "Route 1\n"
	.string "Twigton City {DOWN_ARROW}$"

Route1_Sign_Text_Hammersock:
	.string "Route 1\n"
	.string "Hammersock {UP_ARROW}$"