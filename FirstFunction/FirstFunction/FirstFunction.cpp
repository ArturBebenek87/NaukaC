#include <iostream>

using namespace std;

//pierwsza funkcja

void DemonstrationFunction()
{
	cout << "Wewnątrz funkcji DemonstrationFunction." << endl;
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Wewnątrz funkcji main." << endl;
	DemonstrationFunction(); //wywołanie funkcji DemonstrationFunction
	cout << "Ponownie w funkcji main." << endl;

	return 0;
}
