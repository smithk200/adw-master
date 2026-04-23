TwigtonCityMomsRoom2F_MapScripts::
	.byte 0

TwigtonCity_MomsRoom2F_EventScriptWorried1::
	msgbox TwigtonCityPlayersHouse2F_TextWorried1, MSGBOX_AUTOCLOSE
	release
	end

TwigtonCity_MomsRoom2F_EventScriptWorried2::
	msgbox TwigtonCityPlayersHouse2F_TextWorried2, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried3:: @this will be the computer that unlocks the secret tunnel beneath Twigton City
	goto_if_set FLAG_BADGE07_GET, TwigtonCity_MomsRoom2F_EventScriptUnlockSecretBase
	msgbox TwigtonCityPlayersHouse2F_TextWorried3, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried4::
	msgbox TwigtonCityPlayersHouse2F_TextWorried4, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried5::
	msgbox TwigtonCityPlayersHouse2F_TextWorried5, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried6::
	msgbox TwigtonCityPlayersHouse2F_TextWorried6, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried7::
	msgbox TwigtonCityPlayersHouse2F_TextWorried7, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried8::
	msgbox TwigtonCityPlayersHouse2F_TextWorried8, MSGBOX_AUTOCLOSE
	release
	end
	
TwigtonCity_MomsRoom2F_EventScriptWorried9::
	msgbox TwigtonCityPlayersHouse2F_TextWorried9, MSGBOX_AUTOCLOSE
	release
	end

TwigtonCity_MomsRoom2F_EventScriptMomsJournal::
	msgbox TwigtonCity_MomsRoom2F_TextMomsJournal, MSGBOX_AUTOCLOSE
	release
	end

TwigtonCity_MomsRoom2F_EventScriptUnlockSecretBase::
	lock
	faceplayer
	goto_if_unset FLAG_DISCOVERED_SECRET_BASE, TwigtonCity_MomsRoom2F_EventScriptDiscoveredSecretBase
	msgbox TwigtonCity_MomsRoom2F_Text_AskToWarp, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TwigtonCity_MomsRoom2F_Text_DidNotWarp
	warp MAP_TWIGTON_CITY_TEAM_JUMBOS_BASE_1F, 28, 3
	release
	end

TwigtonCity_MomsRoom2F_EventScriptDiscoveredSecretBase:: @first time when the player discovers the secret base
	msgbox TwigtonCity_MomsRoom2F_Text_DiscoveredSecretBase, MSGBOX_YESNO
	setflag FLAG_DISCOVERED_SECRET_BASE
	compare VAR_RESULT, 0
	goto_if_eq TwigtonCity_MomsRoom2F_Event_Script_DidNotWarp
	warp MAP_TWIGTON_CITY_TEAM_JUMBOS_BASE_1F, 28, 3
	release
	end

TwigtonCity_MomsRoom2F_Event_Script_DidNotWarp::
	msgbox TwigtonCity_MomsRoom2F_Text_DidNotWarp, MSGBOX_AUTOCLOSE
	release
	end 

TwigtonCityPlayersHouse2F_TextWorried1:
    .string "A browser page is open.\p"
	.string "It is titled “Gender Nonconformity\n"
	.string "and Neo-Nazism.”$"

TwigtonCityPlayersHouse2F_TextWorried2:
    .string "A browser page is open.\p"
	.string "It is titled “Making Your Child Leave\n"
	.string "The Liberal Cult And Turn To God”$"

TwigtonCityPlayersHouse2F_TextWorried3:
	.string "A browser page is open.\p"
    .string "It's an email sent to a “Dr. Paul\n"
	.string "Woods. It reads:\p"
	.string "Dear Dr. Woods:\n"
	.string "My son is 25 and needs therapy.\p"
	.string "He needs help navigating through life\n"
	.string "because he's socially awkward.\p"
	.string "I need to be strategic about which\n"
	.string "friends I introduce to him because\l"
	.string "last time he made friends on his own,\l"
	.string "it turns out they were part of an\l"
	.string "evil cult.\p"
	.string "Please help my son in any way you can.\p"
	.string "Signed, (Your Mom).$"
	

TwigtonCityPlayersHouse2F_TextWorried4:
    .string "A book is on the floor.\p"
	.string "It is titled “God's Battalions:\n"
	.string "How The Crusades Were Morally Justified”.$"
	

TwigtonCityPlayersHouse2F_TextWorried5:
    .string "A book is on the floor.\p"
	.string "It is titled “Ten Questions Every\n"
	.string "Teen Should Ask About Christianity”.$"
	

TwigtonCityPlayersHouse2F_TextWorried6:
    .string "A book is on the floor.\p"
	.string "It is titled “The Dangers of\n"
	.string "Social Media: How The Devil Uses\l"
	.string "It To Spread His Message”.$"
	

TwigtonCityPlayersHouse2F_TextWorried7:
    .string "A book is on the floor.\p"
	.string "It is titled “Can A Smart Person\n"
	.string "Believe In God?”.$"
	

TwigtonCityPlayersHouse2F_TextWorried8:
    .string "Many Christian book line these\n"
	.string "shelves.\p"
	.string "These books are about the justification\n"
	.string "of legally discriminating against\l"
	.string "LGBTQ+ people, eliminating “wokeness”,\l"
	.string "and denying climate change.$"
	

TwigtonCityPlayersHouse2F_TextWorried9:
    .string "These books are on Little House\n"
	.string "on the Prairie, cheesy romance novels,\l"
	.string "and the importance of eating as\l"
	.string "healthily as the French do.$"


TwigtonCity_MomsRoom2F_TextMomsJournal:
	.string "Dear Diary:\p"
	.string "Today I caught my son trying\n"
	.string "to sneak out of the house again.\p"
	.string "Afterward, I calmly reminded him that\n"
	.string "he's not supposed to sneak out of\l"
	.string "the house, and you know what he does?\p"
	.string "He yells at me.\p"
	.string "Doesn't he realize that I am doing\n"
	.string "what's best for him?\p"
	.string "I have done everything I could, LORD.\p"
	.string "Please, LORD, I need the strength to be\n"
	.string "a better mom.\p"
	.string "And, LORD…\p"
	.string "Please let my son turn to You and\n"
	.string "see how holy and good You are.$"

TwigtonCity_MomsRoom2F_Text_DiscoveredSecretBase:
	.string "You insert the flash drive.\p"
	.string "It contains the passcode to teleport\n"
	.string "you to your mom's secret base.\p"
	.string "Do you want to teleport to the\n"
	.string "Secret Base?$"

TwigtonCity_MomsRoom2F_Text_AskToWarp:
	.string "Do you want to teleport to the\n"
	.string "Secret Base?$"

TwigtonCity_MomsRoom2F_Text_DidNotWarp:
	.string "{PLAYER} did not teleport to the \n"
	.string "secret base.$"