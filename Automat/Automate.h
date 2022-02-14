#pragma once

#include <stack>
#include <string>
#include "../Lexer/Symbole.h"
#include "../Lexer/Lexer.h"

using namespace std;

class Etat;
class Etat0;
class Etat1;
class Etat2;
class Etat3;
class Etat4;
class Etat5;
class Etat6;
class Etat7;
class Etat8;
class Etat9;

class Automate {
	public:
		Automate(string input);
		void run();
		void decalage(Etat* etat, Symbole* symbole);
		void reduction(int n, Symbole* symbole);
	private:
		stack<Etat*> pileEtats;
		stack<Symbole*> pileSymboles;
		Lexer *lexer;
};
