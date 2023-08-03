#include <iostream>

using namespace std;

int Add(int first, int second)
{
	cout << "Funkcja Add() otrzymała dwie wartości: " << first << " oraz " << second << endl;

	return (first + second);
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Jestem w funkcji main()!" << endl;
	int a, b, c;
	cout << "Wpisz dwie liczby: ";
	cin >> a;
	cin >> b;
	cout << endl << "Wywołanie funkcji Add()" << endl;
	c = Add(a, b);
	cout << "Ponownie w funkcji main()." << endl;
	cout << "c zostało ustawione na " << c << endl;
	cout << "Opuszczenie programu" << endl;

	return 0;
}