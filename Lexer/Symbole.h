#pragma once

#include <string>

enum Identificateurs {
	OPENPAR,
	CLOSEPAR,
	PLUS,
	MULT,
	INT,
	FIN,
	ERREUR,
	EXPR
};

const std::string Etiquettes[] = {
	"OPENPAR",
	"CLOSEPAR",
	"PLUS",
	"MULT",
	"INT",
	"FIN",
	"ERREUR",
	"EXPR"
};

class Symbole {
	public:
		Symbole(int i);
		virtual ~Symbole();
		operator int() const;
		virtual void Affiche();
	protected:
		int ident;
};

class Entier : public Symbole {
	public:
		Entier(int v);
		~Entier();
		virtual void Affiche();
		int getValue();
	protected:
		int valeur;
};

class Openpar : public Symbole {
	public:
		Openpar();
		~Openpar();
		virtual void Affiche();
};

class Closepar : public Symbole {
	public:
		Closepar();
		~Closepar();
		virtual void Affiche();
};

class Plus : public Symbole {
	public:
		Plus();
		~Plus();
		virtual void Affiche();
};

class Mult : public Symbole {
	public:
		Mult();
		~Mult();
		virtual void Affiche();
};

class Fin : public Symbole {
	public:
		Fin();
		~Fin();
		virtual void Affiche();
};

class Erreur : public Symbole {
	public:
		Erreur();
		~Erreur();
		virtual void Affiche();
};

class Expression : public Symbole {
	public:
		Expression(int val);
		~Expression();
		virtual void Affiche();
		int getValue();
	protected:
		int valeur;
};
