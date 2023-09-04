#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter = 0;

	while (true)
	{
		counter++;
		if (counter > 10)
			break;
	}

	cout << "Licznik: " << counter << endl;
	return 0;
}