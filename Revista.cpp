#include <iostream>
#include <string>
#include <conio.h>
#include "Revista.h"

using namespace std;



Revista::Revista() {
	denumire = "";
	nr_pag = 0;
	nr_articole = 0;
}

Revista::Revista(string den, int pag, int articole) {
	denumire = den;
	nr_pag = pag;
	nr_articole = articole;
}

void Revista::create()  {
	cout << "Creati o noua abonare la revista" << endl << "Daca doriti sa va introducei ziua si luna nasterii pentru a avea acces la Horoscop apasati 1" << endl <<"Altfel apasati 2"<<endl;
}

void Revista::delete_it() {
	cout << "Stergeti abonarea la revista" << endl;
}

Revista::~Revista() {}

