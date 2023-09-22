#include <iostream>

using namespace std;

typedef unsigned short USHORT;
enum ERR_CODE {SUCCESS, ERROR};

ERR_CODE Factor(int, int&, int&);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int number, squared, cubed;
	ERR_CODE result;

	cout << "Wpisz liczbę (0 - 20): ";
	cin >> number;

	result = Factor(number, squared, cubed);

	if (result == SUCCESS)
	{
		cout << "liczba: " << number << endl;
		cout << "do kwadratu: " << squared << endl;
		cout << "do trzeciej potęgi: " << cubed << endl;
	}
	else
		cout << "Napotkano błąd!!" << endl;
	return 0;
}

ERR_CODE Factor(int n, int& rSquared, int& rCubed)
{
	if (n > 20)
		return ERROR;
	else
	{
		rSquared = n * n;
		rCubed = n * n * n;
		return SUCCESS;
	}
}