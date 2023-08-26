#include <iostream>

using namespace std;

void myFunc();

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x = 5;
	cout << "W funkcji main x ma wartość: " << x;

	myFunc();

	cout << "Ponownie w funkcji main, x ma wartość: " << x << endl;

	return 0;
}

void myFunc()
{
	int x = 8;
	cout << endl << "W funkcji myFunc, lokalnie x wynosi: " << x << endl;
	{
		cout << "W bloku funkcji myFunc, x ma wartość: " << x;

		int x = 9;

		cout << endl << "Bardziej lokalnie x ma wartość: " << x;
	}
	cout << endl << "Poza blokiem, w myFunc, x: " << x << endl;
}