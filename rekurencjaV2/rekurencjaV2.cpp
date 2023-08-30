#include <iostream>

using namespace std;

typedef unsigned short USHORT;
typedef unsigned long ULONG;

ULONG GetPower(USHORT n, USHORT power);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	USHORT number, power;
	ULONG answer;

	cout << "Podaj liczbę: ";
	cin >> number;
	cout << "Do której potęgi? ";
	cin >> power;

	cout << endl;

	answer = GetPower(number, power);

	cout << number << " do potęgi " << power << " wynosi " << answer << endl;

	return 0;
}

ULONG GetPower(USHORT n, USHORT power)
{
	if (power == 1)
		return n;
	else
		return (n * GetPower(n, power - 1));
}