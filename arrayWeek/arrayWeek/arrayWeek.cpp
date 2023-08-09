#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	//deklaracja typu wyliczeniowego
	enum  dniTygodnia
	{
		Mon, Tue, Wed, Thu, Fri, Sat, Sun, DniWTygodniu
	};

	//Deklaracja tablicy
	int ArrayWeek[DniWTygodniu] = { 10, 20, 30, 40, 50, 60, 70 };

	cout << "Wartością piątku w tablicy jest: " << ArrayWeek[Fri] << endl;

	return 0;
}