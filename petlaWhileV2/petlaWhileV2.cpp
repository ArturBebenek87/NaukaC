#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x = 0;

	while (x < 10)
	{
		cout << "X = " << x++ << endl;
	}

	cout << endl << "Koniec instrukcji. " << x << endl;

	return 0;
}