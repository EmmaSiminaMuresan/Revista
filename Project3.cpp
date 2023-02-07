#include <iostream>
#include <string.h>

#include "Virtuale.h"
#include "Abonat.h"
#include "Articole.h"
#include "Design_Interior.h"
#include "Horoscop.h"
#include "Revista.h"
#include "Stiri.h"

using namespace std;

int main()
{
	int ch, choice, choice1, zi, luna;
	string denumire, nume, prenume, par;
	bool ok = 1;
	Revista Corint("Corint", 46, 12), Litera("Litera", 39, 10);
	cout << "Hello! What do you want to do?" << endl;
	cout << "If you want to create an abonament to a magazine press 1" << endl;
	cout << "If you want to cancel an abonament press 2" << endl;
	cout << "To EXIT press another key" << endl << endl;

	while (ok) {
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			choice = 1;
			while (choice == 1) {
				cout << "Please enter the name of the magazine : Corint or Litera." << endl;
				cin >> denumire;
				if (denumire == "Corint" || denumire == "Litera") {
					if (denumire == "Corint")
					{
						Corint.create();
						cin >> choice1;
						if (choice1 == 1) {
							cout << "Nume : ";
							cin >> nume;
							cout << "Prenume : ";
							cin >> prenume;
							cout << "Parola : ";
							cin >> par;
							cout << "Ziua de nastere : ";
							cin >> zi;
							cout << "Luna nasterii : ";
							cin >> luna;

							Abonat nou(nume, prenume, par, zi, luna);
							Horoscop sarbatorit(zi, luna);
							sarbatorit.horoscopul_zilei(nou);
						}
						else
						{
							cout << "Nume : ";
							cin >> nume;
							cout << "Prenume : ";
							cin >> prenume;
							cout << "Parola : ";
							cin >> par;
							Abonat nou(nume, prenume, par);
						}
					}
					else {
						Litera.create();
						cin >> choice1;
						if (choice1 == 1) {
							cout << "Nume : ";
							cin >> nume;
							cout << "Prenume : ";
							cin >> prenume;
							cout << "Parola : ";
							cin >> par;
							cout << "Ziua de nastere : ";
							cin >> zi;
							cout << "Luna nasterii : ";
							cin >> luna;

							Abonat nou(nume, prenume, par, zi, luna);
							Horoscop sarbatorit(zi, luna);
							sarbatorit.horoscopul_zilei(nou);
						}
						else
						{
							cout << "Nume : ";
							cin >> nume;
							cout << "Prenume : ";
							cin >> prenume;
							cout << "Parola : ";
							cin >> par;
							Abonat nou(nume, prenume, par);
						}

					}
					choice = 0;
				}
				else
				{
					cout << "Sorry! You introduced a wrong name. If you want to reapeat press 1. If not press 2" << endl;
					cin >> choice;
				}

			}

		}
		break;
		case 2: {
			choice = 1;
			while (choice == 1) {
				cout << "Please enter the name of the magazine : Corint or Litera." << endl;
				cin >> denumire;
				if (denumire == "Corint" || denumire == "Litera") {
					if (denumire == "Corint") 
					{
						cout << "Nume : ";
						cin >> nume;
						cout << "Prenume : ";
						cin >> prenume;
						cout << "Parola : ";
						cin >> par;
						Corint.delete_it();
					}
					else 
					{
						cout << "Nume : ";
						cin >> nume;
						cout << "Prenume : ";
						cin >> prenume;
						cout << "Parola : ";
						cin >> par;
						Litera.delete_it();
					}
					choice = 0;
				}
				else
				{
					cout << "Sorry! You introduced a wrong name. If you want to reapeat press 1. If not press 2" << endl;
					cin >> choice;
				}

			}

		}break;
		default: ok = 0;
			break;
		}
			cout << "If you want to create an abonament to a magazine press 1" << endl;
			cout << "If you want to cancel an abonament press 2" << endl;
			cout << "To EXIT press any other key" << endl << endl;
		
	}
}

