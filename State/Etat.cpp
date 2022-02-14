#include "Etat.h"

using namespace std;

Etat::Etat(int n) : numero(n) {}

Etat0::Etat0() : Etat(0) {}

bool Etat0::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case INT:
			automate->decalage(new Etat3(), symbole);
			break;
		case CLOSEPAR:
			automate->decalage(new Etat2(), symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat1::Etat1() : Etat(1) {}

bool Etat1::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->decalage(new Etat4(), symbole);
			break;
		case MULT:
			automate->decalage(new Etat5(), symbole);
			break;
		case FIN:
			// automate->decalage(, symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat2::Etat2() : Etat(2) {}

bool Etat2::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case INT:
			automate->decalage(new Etat3(), symbole);
			break;
		case CLOSEPAR:
			automate->decalage(new Etat2(), symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat3::Etat3() : Etat(3) {}

bool Etat3::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->reduction(1, symbole);
			break;
		case MULT:
			automate->reduction(1, symbole);
			break;
		case CLOSEPAR:
			automate->reduction(1, symbole);
			break;
		case FIN:
			automate->reduction(1, symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat4::Etat4() : Etat(4) {}

bool Etat4::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case INT:
			automate->decalage(new Etat3(), symbole);
			break;
		case CLOSEPAR:
			automate->decalage(new Etat2(), symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat5::Etat5() : Etat(5) {}

bool Etat5::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case INT:
			automate->decalage(new Etat3(), symbole);
			break;
		case CLOSEPAR:
			automate->decalage(new Etat2(), symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat6::Etat6() : Etat(6) {}

bool Etat6::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->decalage(new Etat4(), symbole);
			break;
		case MULT:
			automate->decalage(new Etat5(), symbole);
			break;
		case CLOSEPAR:
			automate->decalage(new Etat9(), symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat7::Etat7() : Etat(7) {}

bool Etat7::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->reduction(3, symbole);
			break;
		case MULT:
			automate->decalage(new Etat5(), symbole);
			break;
		case CLOSEPAR:
			automate->reduction(3, symbole);
			break;
		case FIN:
			automate->reduction(3, symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat8::Etat8() : Etat(8) {}

bool Etat8::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->reduction(3, symbole);
			break;
		case MULT:
			automate->reduction(3, symbole);
			break;
		case CLOSEPAR:
			automate->reduction(3, symbole);
			break;
		case FIN:
			automate->reduction(3, symbole);
			break;
		default:
			return false;
	}
	return true;
}

Etat9::Etat9() : Etat(9) {}

bool Etat9::transition(Automate* automate, Symbole* symbole) {
	switch (*symbole) {
		case PLUS:
			automate->reduction(3, symbole);
			break;
		case MULT:
			automate->reduction(3, symbole);
			break;
		case CLOSEPAR:
			automate->reduction(3, symbole);
			break;
		case FIN:
			automate->reduction(3, symbole);
			break;
		default:
			return false;
	}
	return true;
}
