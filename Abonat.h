#pragma once
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Abonat {
public:
	string nume;
	string prenume;

	friend class Horoscop;

private:
	string parola;
	int ziua_nasterii;
	int luna_nasterii;

public:
	Abonat() ;
	Abonat(string, string, string);
	Abonat(string, string, string, int, int);

	void set_parola(string);
	string get_parola();
	void set_ziua_nasterii(int);
	int get_ziua_nasterii(class Abonat );
	void set_luna_nasterii(int);
	int get_luna_nasterii(class Abonat);

	~Abonat();
};
