#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter = 0;

loop:

	counter++;
	cout << "Licznik: " << counter << endl;

	if (counter < 5)
		goto loop;

	cout << "Gotowe. Licznik: " << counter << endl;
	return 0;
}