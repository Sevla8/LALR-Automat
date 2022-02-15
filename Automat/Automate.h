#pragma once

#include <stack>
#include <string>
#include "../Lexer/Symbole.h"
#include "../Lexer/Lexer.h"

class Etat;

class Automate {
	public:
		Automate(std::string input);
		~Automate();
		void decalage(Etat* etat, Symbole* symbole);
		void reduction(int n, Symbole* symbole);
		void analyse();
	private:
		std::stack<Etat*> pileEtats;
		std::stack<Symbole*> pileSymboles;
		Lexer *lexer;
};
