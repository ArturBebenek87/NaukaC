#include <iostream>

using namespace std;

short Factor(int n, int* pSquared, int* pCubed);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int number, squared, cubed;
	short error;

	cout << "Wpisz liczbę (0 - 20): ";
	cin >> number;

	error = Factor(number, &squared, &cubed);

	if (!error)
	{
		cout << "liczba: " << number << endl;
		cout << "do kwadratu: " << squared << endl;
		cout << "do trzeciej potęgi: " << cubed << endl;
	}
	else
		cout << "Napotkano błąd!!" << endl;
	
	return 0;
}

short Factor(int n, int* pSquared, int* pCubed)
{
	short Value = 0;
	if (n > 20)
		Value = 1;
	else
	{
		*pSquared = n * n;
		*pCubed = n * n * n;
		Value = 0;
	}
	return Value;
}