#include "Automate.h"
#include "../State/Etat.h"

Automate::Automate(string input) {
	this->lexer = new Lexer(input);
	this->pileEtats.push(new Etat0());
}

void Automate::run() {
	//bool prochainEtaNonVide = true;
	/*
	while(prochainEtaNonVide){
    Symbole *symbole= lexer->consulter();
	lexer->avancer()
	prochainEtaNonVide= pileEtats.top()->transition(this)
		pileSymboles.push


	}

	*/
}

void Automate::decalage(Etat* etat, Symbole* symbole) {
	this->pileEtats.push(etat);
	this->pileSymboles.push(symbole);
}

void Automate::reduction(int n, Symbole* symbole) {
	stack<Symbole*> symbolesDepiles;
	for (int i = 0; i < n; ++i) {
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
			symbolesDepiles.pop();
			Expression* expr = (Expression*) symbolesDepiles.top();
			result = expr->getValue();
		}
		else {
			Expression* expr = (Expression*) symbolesDepiles.top();
			result = expr->getValue();
			symbolesDepiles.pop();
			if (*symbolesDepiles.top() == PLUS) {
				symbolesDepiles.pop();
				Expression* expr = (Expression*) symbolesDepiles.top();
				result += expr->getValue();
			}
			else if (*symbolesDepiles.top() == MULT) {
				symbolesDepiles.pop();
				Expression* expr = (Expression*) symbolesDepiles.top();
				result *= expr->getValue();
			}
		}
	}

	this->pileEtats.top()->transition(this, new Expression(result));
}