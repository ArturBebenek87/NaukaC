#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int goleBarcelona, goleReal;

	cout << "Wpis ilość goli strzelonych przez Barcelonę: ";
	cin >> goleBarcelona;

	cout << "Wpisz ilość goli strzelonych przez Real: ";
	cin >> goleReal;

	cout << endl;

	if (goleBarcelona > goleReal)
		cout << "Barcelona wygrała!" << endl;

	if (goleBarcelona < goleReal)
		cout << "Real Madryt wygrał!" << endl;

	if (goleBarcelona == goleReal)
	{
		cout << "Niemożliwe, że w ostatnim meczu padł remis!" << endl;
		cout << "Podaj jeszcze raz ilość goli strzelonych przez Barcelonę: ";
		cin >> goleBarcelona;

		if (goleBarcelona > goleReal)
			cout << "Wiedziałem, że Barcelona wygrała!" << endl;

		if (goleBarcelona < goleReal)
			cout << "To już lepszy byłby remis." << endl;

		if (goleBarcelona == goleReal)
			cout << "Jednak faktycznie w ostatnim spotkaniu padł remis!" << endl;
	}

	cout << endl << "Dzięki za informację!" << endl;
	return 0;


}