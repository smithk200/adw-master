Route3_MapScripts::
	.byte 0

Route3_EventScript_Sign_ElwoodCity::
	lock
	msgbox Route3_Sign_Text_ElwoodCity, MSGBOX_DEFAULT
	release
	end

Route3_Sign_Text_ElwoodCity:
	.string "Route 3\n"
	.string "ElwoodCity {LEFT_ARROW}$"