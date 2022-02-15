#pragma once

#include <string>
#include "Symbole.h"

class Lexer {
	public:
		Lexer(std::string s);
		~Lexer();
		Symbole* Consulter();
		void Avancer();
		void pushSymbole(Symbole* s);
	protected:
		std::string flux;
		int tete;
		Symbole* tampon;
};
