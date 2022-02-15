#include "Symbole.h"
#include <iostream>

using namespace std;

Symbole::Symbole(int i) : ident(i) {}

Symbole::~Symbole() {}

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

Symbole::operator int() const {
	return ident;
}

Entier::Entier(int v) : Symbole(INT), valeur(v) {}

Entier::~Entier() {}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

Openpar::Openpar() : Symbole(OPENPAR) {}

Openpar::~Openpar() {}

int Entier::getValue() {
	return valeur;
}

void Openpar::Affiche() {
	Symbole::Affiche();
}

Closepar::Closepar() : Symbole(CLOSEPAR) {}

Closepar::~Closepar() {}

void Closepar::Affiche() {
	Symbole::Affiche();
}

Plus::Plus() : Symbole(PLUS) {}

Plus::~Plus() {}

void Plus::Affiche() {
	Symbole::Affiche();
}

Mult::Mult() : Symbole(MULT) {}

Mult::~Mult() {}

void Mult::Affiche() {
	Symbole::Affiche();
}

Fin::Fin() : Symbole(FIN) {}

Fin::~Fin() {}

void Fin::Affiche() {
	Symbole::Affiche();
}

Erreur::Erreur() : Symbole(ERREUR) {}

Erreur::~Erreur() {}

void Erreur::Affiche() {
	Symbole::Affiche();
}

Expression::Expression(int val) : Symbole(EXPR), valeur(val) {}

Expression::~Expression() {}

void Expression::Affiche() { Symbole::Affiche(); }

int Expression::getValue() {
	return valeur;
}
