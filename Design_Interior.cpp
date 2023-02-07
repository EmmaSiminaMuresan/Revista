#include <iostream>
#include <string>
#include <conio.h>
#include "Design_Interior.h"

using namespace std;



Design_Interior::Design_Interior(string t, int nr, string tip) {
	titlu = t;
	nr_subiecte = nr;
	tip_design = tip;
}

Design_Interior::~Design_Interior() {}