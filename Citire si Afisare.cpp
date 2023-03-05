#include "pch.h"
#include<iostream>
using namespace System;
using namespace std;
/*Problema:
1.Sa se citeasca de la tastatura numarul de persoane,
urmand sa se intruduca numele si varsta fiecarei persoane.
2.Sa se afiseze numele si  varstele persoanelor.*/

int main() {
	struct persoana {
		char Nume[20];
		char Prenume[20];
		int varsta;
	}p[5];
	for (int i = 0; i < 5; i++)
	{

		cout << "Introduceti varsta" << endl;
		cin >> p[i].varsta;
		cout << "Introduceti Numele" << endl;
		cin >> p[i].Nume;
		cout << "introduceti Prenumele" << endl;
		cin >> p[i].Prenume;

	}
	for (int i = 0; i < 5; i++) {

		cout << p[i].Nume << "\t" << p[i].Prenume << "\t" << p[i].varsta << endl;

	}

	Console::ReadKey();
	return 0;
}