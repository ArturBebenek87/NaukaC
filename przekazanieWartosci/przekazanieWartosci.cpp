#include <iostream>

using namespace std;

void swap(int x, int y);

int main()
{
	setlocale(LC_ALL, "PL_Pl");

	int x = 5, y = 10;

	cout << "Funkcja Main. Przed funkcją Swap, x: " << x << " y: " << y << endl;

	swap(x, y);

	cout << "Funkcja Main. Po funkcji Swap, x: " << x << " y: " << y << endl;

	return 0;
}

void swap(int x, int y)
{
	int temp;

	cout << "Funkcja Swap. Przed zmianą, x: " << x << " y: " << y << endl;

	temp = x;
	x = y;
	y = temp;

	cout << "Funkcja Swap. Po zmianie, x: " << x << " y: " << y << endl;
}