#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter = 0;

	while (counter < 5) //sprawdzenie warunku
	{
		counter++;
		cout << "Licznik: " << counter << endl;
	}

	cout << "Gotowe. Licznik: " << counter << endl;

	return 0;
}