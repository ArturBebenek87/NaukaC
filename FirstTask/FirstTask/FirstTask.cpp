#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl"); //możliwość wyświetlania polskich znaków

	int x = 5; //przypisanie wartości do zmiennej x
	int y = 7; //przypisanie wartości do zmiennej y

	cout << "Zmienna x ma wartość: " << x << endl;
	cout << "Zmienna y ma wartość: " << y << endl;

	cout << endl << x + y << " " << x * y << endl; //wyświetlenie wyniku dodawania i mnożenia zmiennych x i y

	return 0;
}

