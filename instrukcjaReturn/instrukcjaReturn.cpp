#include <iostream>

using namespace std;

int Doubler(int AmountToDouble);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int result = 0;
	int input;

	cout << "Wpisz liczbę, która ma ulec podwojeniu (od 0 do  10 000): ";
	cin >> input;

	cout << endl << "Przed wywołaniem funkcji Doubler... " << endl;
	cout << "Wejście: " << input << " podwojone: " << result << endl;

	result = Doubler(input);

	cout << endl << "Po powrocie z funkcji Doubler..." << endl << endl;
	cout << "Wejście " << input << " podwojone: " << result << endl;

	return 0;
}

int Doubler(int original)
{
	if (original <= 10000)
		return original * 2;
	else
		return -1;
}