#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x, y, z;

	cout << "Wpisz dwie liczby." << endl;

	cout << "Pierwsza: ";
	cin >> x;

	cout << "Druga: ";
	cin >> y;

	cout << endl;

	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}

	cout << "Po sprawdzeniu if, z: " << z << endl;

	z = (x > y) ? x : y;

	cout << "Po sprawdzeniu warunku, z: " << z << endl;

	return 0;
}