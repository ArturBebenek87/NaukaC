#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned short shortVar = 5;
	unsigned long longVar = 65535;
	long sVar = -65535;

	cout << "shortVar:\t" << shortVar;
	cout << "\tAdres zmiennej shortVar:\t";
	cout <<  &shortVar << endl;

	cout << "longVar:\t" << longVar;
	cout << "\tAdres zmiennej longVar:\t";
	cout << &longVar << endl;

	cout << "sVar:\t\t" << sVar;
	cout << "\tAdres zmiennej sVar:\t";
	cout << &sVar << endl;

	return 0;
}