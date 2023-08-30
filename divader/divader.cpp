#include <iostream>

using namespace std;

short int Divider(unsigned short int valone, unsigned short int valtwo);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned short int one, two;
	short int answer;

	cout << "Podaj dwie liczby." << endl << "Pierwsza liczba: ";
	cin >> one;
	cout << "Druga liczba: ";
	cin >> two;

	answer = Divider(one, two);

	if (answer > -1)
		cout << "Odpowiedź: " << answer;
	else
		cout << "Błąd! Nie można dzielić przez zero!";
	
	return 0;
}

short int Divider(unsigned short int valOne, unsigned short int valTwo)
{
	if (valTwo == 0)
		return -1;
	else
		return valOne / valTwo;
}