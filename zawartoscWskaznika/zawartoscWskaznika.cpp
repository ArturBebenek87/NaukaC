#include <iostream>

using namespace std;

int main()
{
	unsigned short int myAge = 5, yourAge = 10;

	//wskaźnik
	unsigned short int* pAge = &myAge;

	cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << endl;

	cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;
	cout << "*pAge:\t" << *pAge << endl;

	cout << endl << "Ponowne przypisanie: pAge = &yourAge..." << endl << endl;
	
	pAge = &yourAge; //ponowne przypisanie do wskaźnika

	cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << endl;

	cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << endl;

	cout << "pAge:\t" << pAge << endl;
	cout << "*pAge:\t" << *pAge << endl;

	cout << "\n&pAge:\t" << &pAge << endl;

	return 0;
}