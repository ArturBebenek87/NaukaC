#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int firstNumber, secondNumber;

	cout << "Wpisz dwie liczby." << endl;
	cout << endl << "Pierwsza liczba: ";
	cin >> firstNumber;

	cout << "Druga liczba: ";
	cin >> secondNumber;

	if (firstNumber >= secondNumber)
	{
		if ((firstNumber % secondNumber) == 0) //dzielenie bez reszty
		{
			if (firstNumber == secondNumber)
				cout << "Obie podane liczby są takie same." << endl;
			else
				cout << "Podane liczby dzielą się bez reszty." << endl;
		}
		else
			cout << "Podane liczby nie dzielą się bez reszty." << endl;
	}
	else
		cout << "Druga podana liczba jest większa!" << endl;
	
	return 0;
}