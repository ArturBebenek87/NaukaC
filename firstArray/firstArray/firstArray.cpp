#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int myArray[5]; //deklaracja 5 liczb całkowitych
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "Wartość elementu myArray[" << i << "]: ";
		cin >> myArray[i];
	}
	for (i = 0; i < 5; i++)
		cout << i << ": " << myArray[i] << endl;
	
	return 0;
}