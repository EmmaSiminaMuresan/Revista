#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Articole.h"

using namespace std;




class Design_Interior : public Articole {
public:
	string titlu;
	int nr_subiecte;
	string tip_design;

public:
	Design_Interior(string, int, string);
	~Design_Interior();
};


