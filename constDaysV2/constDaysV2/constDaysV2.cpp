#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	//Jawne definiowanie stałych całkowitych
	const int Monday = 0;
	const int Tuesday = 1;
	const int Wednesday = 2;
	const int Thursday = 3;
	const int Friday = 4;
	const int Saturday = 5;
	const int Sunday = 6;

	int today;
	today = Friday; //przy tym zapisie zamiast stałej Friday można użyć także cyfry 4 itp. 

	if (today == Saturday || today == Sunday)
		cout << "Weekendy są super!" << endl;
	else
		cout << "Niestety dzisiaj nie ma weekendu." << endl;

	return 0;
}