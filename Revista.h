#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Virtuale.h"
#include "Abonat.h"

using namespace std;


class Revista : public Virtuale {
public:
	
	string denumire;
	int nr_pag;
	int nr_articole;

	Abonat abonat();
public:
	Revista();
	Revista(string , int, int);

	void create();

	void delete_it();
		
	~Revista();
};

