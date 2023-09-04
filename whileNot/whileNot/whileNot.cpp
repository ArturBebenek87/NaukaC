#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter;

	cout << "Ile pozdrowień?: ";
	cin >> counter;

	while (counter > 0)
	{
		cout << "Cześć!" << endl;
		counter--;
	}

	cout << "Wartość licznika: " << counter << endl;
	return 0;
}