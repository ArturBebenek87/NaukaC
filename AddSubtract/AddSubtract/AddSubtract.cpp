#include <iostream>

using namespace std;

//funkcja odpowiedzialna za dodawanie

int Add(int first, int second)
{
	cout << "Funkcja Add() otrzymała wartości: " << first << " oraz " << second << endl;

	return (first + second);
}

//funkcja odpowiedzialna za odejmowanie

int Subtract(int first, int second)
{
	cout << "Funkcja Subtract() otrzymała wartość: " << first << " oraz " << second << endl;

	return (first - second);
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Wewnątrz funkcji main()." << endl;

	int a, b, c;

	cout << "Podaj dwie liczby: ";

	cin >> a;
	cin >> b;

	cout << endl << "Wywołanie funkcji Add()." << endl;
	c = Add(a, b);
	cout << "Wynikiem dodawania podanych liczb jest: " << c << endl;

	cout << endl << "Wywołanie funkcji Subtract()." << endl;
	c = Subtract(a, b);
	cout << "Wynikiem odejmowania podanych liczb jest: " << c << endl;

	return 0;

}