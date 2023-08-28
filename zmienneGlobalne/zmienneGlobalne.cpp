#include <iostream>

using namespace std;

void myFunction();

int x = 5, y = 7;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "x z funkcji main: " << x << endl;
	cout << "y z funkcji main: " << y << endl << endl;

	myFunction();

	cout << "Powrót z funkcji myFunction!" << endl << endl;
	cout << "x z funkcji main: " << x << endl;
	cout << "y z funkcji main: " << y << endl;

	return 0;
}

void myFunction()
{
	int y = 10;

	cout << "x z funkcji myFunction: " << x << endl;
	cout << "y z funkcji myFunction: " << y << endl << endl;
}