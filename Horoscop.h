#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Revista.h"

using namespace std;



class Horoscop : public Revista{
public:
	int zi;
	int luna;

public:
	Horoscop(int, int);
	void horoscopul_zilei(Abonat);
	~Horoscop();
};
