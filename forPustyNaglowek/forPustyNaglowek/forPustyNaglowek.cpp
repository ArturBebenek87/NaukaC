#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter = 0;
	int max;

	cout << "Ile pozdrowień? ";
	cin >> max;

	for (;;) //niekończąca się pętla
	{
		if (counter < max)
		{
			cout << "Cześć! " << endl;
			counter++;
		}
		else
			break;
	}
	return 0;
}