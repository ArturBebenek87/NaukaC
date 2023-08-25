#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x, y;

	cout << "Wprowadź dwie liczby. Pierwsza liczba: ";
	cin >> x;
	cout << endl << "Wprowadź drugą liczbę: ";
	cin >> y;
	cout << endl;

	if (x > y) //jeśli x jest większe niż y wartość x zostanie przypisana y
		x = y;
	else
		y = x;

	cout << "Jeśli pierwsza liczba jest większa niż druga, to nowa wartość drugiej liczby to: " << y << endl;

	return 0;
}