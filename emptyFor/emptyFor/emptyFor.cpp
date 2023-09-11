#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int counter = 0;

	for (; counter < 5; )
	{
		counter++;
		cout << "Pętla! ";
	}

	cout << endl << "Licznik: " << counter << endl;
	return 0;
}