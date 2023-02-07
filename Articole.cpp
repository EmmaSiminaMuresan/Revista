#include <iostream>
#include <string>
#include <conio.h>
#include "Articole.h"

using namespace std;



Articole::Articole() {}
Articole::Articole(string rub, string aut, Revista x) {
	rubrica = rub;
	autor = aut;
	ap.denumire = x.denumire;
	ap.nr_articole = x.nr_articole;
	ap.nr_pag = x.nr_pag;
}

Articole::~Articole() {}