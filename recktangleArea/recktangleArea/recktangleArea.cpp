#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int Width = 5, Length = 10;
	int Area = Width * Length;

	cout << "Szerokość prostokąta wynosi: " << Width << endl;
	cout << "Długość prostokąta wynosi: " << Length << endl;

	cout << endl << "Obszar prostokąta wynosi: " << Area << endl;

	return 0;
}