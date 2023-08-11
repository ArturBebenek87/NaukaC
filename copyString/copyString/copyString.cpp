#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	char String1[] = "Tekst, który będzie skopiowany";
	char String2[80] = { '\0' };

	strcpy_s(String2, String1);

	cout << "String1: " << String1 << endl;
	cout << "String2: " << String2 << endl;

	return 0;
}