#include <iostream>
#include <string>
#include <conio.h>
#include "Horoscop.h"

using namespace std;

Horoscop::Horoscop(int x, int y) {
	zi = x;
	luna = y;
}

void Horoscop::horoscopul_zilei(Abonat x) {
	if (zi == x.ziua_nasterii && luna == x.luna_nasterii)  cout << "Astrele iti surad!"<<endl<<endl;
}
Horoscop::~Horoscop() {}