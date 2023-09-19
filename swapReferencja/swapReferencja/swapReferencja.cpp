#include <iostream>

using namespace std;

void swap(int& x, int& y);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x = 5, y = 10;

	cout << "Funkcja main(). Przed funkcją swap(), x: " << x << " y: " << y << endl;

	swap(x, y);

	cout << "Funkcja main(). Po funkcji swap(), x: " << x << " y: " << y << endl;
	
	return 0;
}

void swap(int& rx, int& ry)
{
	int temp;

	cout << "Funkcja swap(). Przed zmianą, rx: " << rx << " ry: " << ry << endl;

	temp = rx;
	rx = ry;
	ry = temp;

	cout << "Funkcja swap(). Po zmianie, rx: " << rx << " ry: " << ry << endl;
}