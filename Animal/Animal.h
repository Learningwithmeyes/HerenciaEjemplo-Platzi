#pragma once
#include<iostream>
using namespace std;

class Animal {
protected:
	static int numero_animales;
	string alimento;
public:
	Animal();
	~Animal();
	static int obtenerNumeroAnimales();
	string obtenerAlimento() {
		return alimento;
	};
	void comer() {
		cout << "Este animal esta comiendo " << alimento << ". . . wmwmwmw" << endl;
	}
};

int Animal::numero_animales = 0;

Animal::Animal() {
	cout << "Creando nuevo animal. . ." << endl;
	numero_animales++;
}
Animal::~Animal() {
	cout << "Borrando animal. . ." << endl;
	numero_animales--;
}

int Animal::obtenerNumeroAnimales() {
	return numero_animales;
}

class Herbivoro : public Animal {
public:
	Herbivoro() : Animal() {
		this->alimento = "plantas";
	}
	void pastar() {
		cout << "Este animal esta pastando. . ." << endl;
	}
};

class Carnivoro :public Animal {
public:
	Carnivoro() : Animal() {
		this->alimento = "carne";
	}
	void cazar() {
		cout << "Este animal esta cazando. . ." << endl;
	}
};