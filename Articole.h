#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Revista.h"

using namespace std;



class Articole : public Revista {
public:
	Revista ap;
	string rubrica;
	string autor;

public:
	Articole() ;
	Articole(string , string , Revista );

	~Articole();
};