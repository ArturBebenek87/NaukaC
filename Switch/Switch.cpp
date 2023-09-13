#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned short int number;

	cout << "Wpisz liczbę pomiędzy 1 i 5: ";
	cin >> number;

	switch (number)
	{
	case 0: cout << "Za mała, przykro mi!";
		break;
	case 5: cout << "Dobra robota! " << endl;
	case 4: cout << "Nieźle! " << endl;
	case 3: cout << "Wyśmienicie! " << endl;
	case 2: cout << "Cudownie! " << endl;
	case 1: cout << "Niesamowicie! " << endl;
		break;

	default: cout << "Zbyt duża! " << endl;
		break;
	}
	cout << endl << endl;
	return 0;
}