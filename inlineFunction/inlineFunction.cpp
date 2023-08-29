#include <iostream>

using namespace std;

inline int Double(int);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int target;

	cout << "Podaj liczbę: ";
	cin >> target;
	cout << endl;

	target = Double(target);
	cout << "Wynik: " << target << endl;

	target = Double(target);
	cout << "Wynik: " << target << endl;

	target = Double(target);
	cout << "Wynik: " << target << endl;

	return 0;
}

int Double(int target)
{
	return 2 * target;
}