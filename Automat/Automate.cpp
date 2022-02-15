#include <iostream>
#include "Automate.h"
#include "../State/Etat.h"
#include "../Lexer/Symbole.h"

using namespace std;

Automate::Automate(string input) {
	this->lexer = new Lexer(input);
	this->pileEtats.push(new Etat0());
}

Automate::~Automate() {
	delete this->lexer;
}

void Automate::decalage(Etat* etat, Symbole* symbole) {
	this->pileEtats.push(etat);
	this->pileSymboles.push(symbole);
}

void Automate::reduction(int n, Symbole* symbole) {
	stack<Symbole*> symbolesDepiles;
	for (int i = 0; i < n; ++i) {
		delete this->pileEtats.top();
		this->pileEtats.pop();
		symbolesDepiles.push(this->pileSymboles.top());
		this->pileSymboles.pop();
	}

	int result;

	if (n == 1) {
		Entier* entier = (Entier*) symbolesDepiles.top();
		result = entier->getValue();
	}
	else if (n == 3) {
		if (*symbolesDepiles.top() == OPENPAR) {
			delete symbolesDepiles.top();
			symbolesDepiles.pop();
			Expression* expr = (Expression*) symbolesDepiles.top();
			result = expr->getValue();
		}
		else {
			Expression* expr = (Expression*) symbolesDepiles.top();
			result = expr->getValue();
			delete symbolesDepiles.top();
			symbolesDepiles.pop();
			if (*symbolesDepiles.top() == PLUS) {
				delete symbolesDepiles.top();
				symbolesDepiles.pop();
				Expression* expr = (Expression*) symbolesDepiles.top();
				result += expr->getValue();
			}
			else if (*symbolesDepiles.top() == MULT) {
				delete symbolesDepiles.top();
				symbolesDepiles.pop();
				Expression* expr = (Expression*) symbolesDepiles.top();
				result *= expr->getValue();
			}
			else {
				cout << "Erreur : opérateur inconnu" << endl;
			}
		}
	}

	this->pileEtats.top()->transition(this, new Expression(result));
	lexer->pushSymbole(symbole);
}

void Automate::analyse() {
	Symbole* symbole;
	do {
		symbole = lexer->Consulter();
		// symbole->Affiche();
		// cout << endl;
		lexer->Avancer();
	} while (this->pileEtats.top()->transition(this, symbole));
	if (*this->pileSymboles.top() != ERREUR) {
		Expression* expr = (Expression*) pileSymboles.top();
		int resultat = expr->getValue();
		cout << "= " << resultat << endl;
	}
	else {
		cout << "Erreur syntaxe" << endl;
	}
}
