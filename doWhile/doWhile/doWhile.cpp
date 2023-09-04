#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter;

	cout << "Ile pozdrowień? ";
	cin >> counter;

	do
	{
		cout << "Cześć!" << endl;
		counter--;
	} while (counter > 0);
	cout << "Licznik ma wartość: " << counter << endl;
	return 0;
}