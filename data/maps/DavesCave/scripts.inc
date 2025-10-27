DavesCave_MapScripts::
	.byte 0

DavesCave_EventScript_Sign_Daves_Cave::
	msgbox DavesCave_TextDavesCaveSign, MSGBOX_DEFAULT
	release
	end

DavesCave_TextDavesCaveSign:
	.string "Dave's Cave\p"
	.string "A cave named for a guy named Dave.$"