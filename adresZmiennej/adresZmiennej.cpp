#include <iostream>

using namespace std;
typedef unsigned short int USHORT;


int main()
{
	setlocale(LC_ALL, "PL_pl");

	USHORT myAge; //zmienna
	USHORT* pAge = 0; //wskaźnik

	myAge = 5;

	cout << "myAge: " << myAge << endl;
	pAge = &myAge;
	cout << "*pAge: " << *pAge << endl << endl;

	cout << "Ustawiam *pAge = 7..." << endl;
	*pAge = 7;

	cout << "*pAge: " << *pAge << endl;
	cout << "myAge: " << myAge << endl << endl;

	cout << "Ustawiam myAge = 9..." << endl;
	myAge = 9;

	cout << "myAge: " << myAge << endl;
	cout << "*pAge: " << *pAge << endl;

	return 0;
}