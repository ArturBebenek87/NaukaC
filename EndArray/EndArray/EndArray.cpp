#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int FirstArray[5] = { 12, 13, 14, 23, 34 };

	cout << "Pierwsza tablica składa się z 5 elementów." << endl;

	cout << endl << "Pierwszy element tablicy to:\t" << FirstArray[0] << endl;
	cout << "Drugi element tablicy to:\t" << FirstArray[1] << endl;

	return 0;
}