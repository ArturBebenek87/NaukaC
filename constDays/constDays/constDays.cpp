#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	enum Days //deklaracja stałej wyliczeniowej
	{
		Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
	};

	Days today;
	today = Wednesday;

	if (today == Sunday || today == Saturday)
		cout << "Weekendy są super!" << endl;
	else
		cout << "Niestety dzisiaj jeszcze nie ma weekendu." << endl;

	return 0;
}