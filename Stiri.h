#pragma once

#include <iostream>
#include <string>
#include <conio.h>
#include "Revista.h"

using namespace std;


class Stiri : public Revista {
public:
	string subiect;
	string titlu;
	string autor;
public:
	Stiri(string , string , string );

	~Stiri();
};