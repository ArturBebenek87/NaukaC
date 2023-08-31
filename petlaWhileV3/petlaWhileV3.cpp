#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned short small;
	unsigned long large;
	const unsigned short MAXSMALL = 65535;

	cout << "Wpisz mniejszą liczbę: ";
	cin >> small;
	cout << "Wpisz dużą liczbę: ";
	cin >> large;
	cout << "mała: " << small << "...";

	//sprawdzanie dwóch warunków
	while (small < large && small < MAXSMALL)
	{
		if (small % 5000 == 0) //wyświetlanie kropki co każde 5000
			cout << ".";

		small++;
		large -= 2;
	}

	cout << endl << "Mała: " << small << " Duża: " << large << endl;

	return 0;
}