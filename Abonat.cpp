#include <iostream>
#include <string>
#include <conio.h>
#include "Abonat.h"

using namespace std;



Abonat::Abonat() {}
Abonat::Abonat(string name, string pren, string par) {
	nume = name;
	prenume = pren;
	set_parola(par);
	ziua_nasterii = NULL;
	luna_nasterii = NULL;
}
Abonat::Abonat(string name, string pren, string par, int ziua, int luna) {
	nume = name;
	prenume = pren;
	set_parola(par);
	set_ziua_nasterii(ziua);
	set_luna_nasterii(luna);
}


string Abonat::get_parola() { return parola; }
int Abonat::get_ziua_nasterii(class Abonat x) { return x.ziua_nasterii; }
int Abonat::get_luna_nasterii(class Abonat x) { return x.luna_nasterii; }

Abonat::~Abonat() {}


void Abonat::set_parola(string p) { parola = p; }
void Abonat::set_ziua_nasterii(int z) { ziua_nasterii = z; }
void Abonat::set_luna_nasterii(int l) { luna_nasterii = l; }

