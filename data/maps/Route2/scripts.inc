Route2_MapScripts::
	.byte 0

Route2_EventScript_Sign_Hammersock::
	lock
	msgbox Route2_Sign_Text_Hammersock, MSGBOX_DEFAULT
	release
	end

Route2_EventScript_Sign_ElwoodCity::
	lock
	msgbox Route3_Sign_Text_ElwoodCity, MSGBOX_DEFAULT
	release
	end

Route2_Sign_Text_Hammersock:
	.string "Route 2\n"
	.string "Hamersock {DOWN_ARROW}$"


Route2_Sign_Text_ElwoodCity:
	.string "Route 2\n"
	.string "Elwood City {UP_ARROW}$"