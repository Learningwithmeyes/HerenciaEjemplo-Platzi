#include "Animal.h"
int main() {
	Animal* a = new Animal();
	Herbivoro* h = new Herbivoro();
	Carnivoro* c = new Carnivoro();
	cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
	a->comer();
	h->pastar();
	c->cazar();
	delete a;
	cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
	system("pause >0");
}