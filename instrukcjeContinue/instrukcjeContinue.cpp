#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned short small;
	unsigned long large;
	unsigned long skip;
	unsigned long target;
	const unsigned short MAXSMALL = 65535;

	cout << "Wpisz mniejszą liczbę: ";
	cin >> small;
	cout << "Wpisz większą liczbę: ";
	cin >> large;
	cout << "Wpisz liczbę pomijaną: ";
	cin >> skip;
	cout << "Wpisz liczbę docelową: ";
	cin >> target;

	cout << endl;

	while (small < large && small < MAXSMALL)
	{
		small++;

		if (small % skip == 0)
		{
			cout << "Pominięto dla " << small << endl;
			continue;
		}

		if (large == target)
		{
			cout << "Osiągnięto wartość docelową!";
			break;
		}

		large -= 2;
	}

	cout << endl << "Mniejsza: " << small << " Większa: " << large << endl;
	return 0;
}