#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int firstNumber, secondNumber;

	cout << "Podaj większą liczbę: ";
	cin >> firstNumber;
	cout << "Podaj mniejszą liczbę: ";
	cin >> secondNumber;

	cout << endl;

	if (firstNumber > secondNumber)
		cout << "Dziękuję, podano prawidłowe liczby." << endl;
	else
		cout << "Nastąpiła pomyłka. Druga podana liczba jest większa od pierwszej!" << endl;

	return 0;
}