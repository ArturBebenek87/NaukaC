#include <iostream>

using namespace std;

class Cat //deklaracja klasy
{
public:
	int itsAge;
	int itsWeight;
};


int main()
{
	setlocale(LC_ALL, "PL_pl");

	Cat Frisky;
	Frisky.itsAge = 5;

	cout << "Frisky jest kotem i ma ";
	cout << Frisky.itsAge << " lat." << endl;

	return 0;
}