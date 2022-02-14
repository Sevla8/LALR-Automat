project(LANG)
set(SOURCE_FILES
	Lexer/Lexer.h
	Lexer/Lexer.cpp
	Lexer/Symbole.cpp
	Lexer/Symbole.h
	State/Etat.h
	State/Etat.cpp
	Automat/Automate.h
	Automat/Automate.cpp
)
add_executable(LANG main.cpp ${SOURCE_FILES})
