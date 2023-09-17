#include <iostream>

using namespace std;

const int ARRAY_LENGTH = 5;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	//tablica z pięcioma liczbami zainicjalizowana z pięcioma wartościami

	int Numbers[ARRAY_LENGTH] = { 0, 100, 200, 300, 400 };

	//wskazanie na pierwszy element tablicy
	const int* pInt = Numbers;

	cout << "Użycie wskaźnika w celu wyświetlenia zawartości tablicy: " << endl;

	for (int nIndex = 0; nIndex < ARRAY_LENGTH; ++nIndex)
		cout << "Element [" << nIndex << "] = " << *(pInt + nIndex) << endl;

	return 0;
}