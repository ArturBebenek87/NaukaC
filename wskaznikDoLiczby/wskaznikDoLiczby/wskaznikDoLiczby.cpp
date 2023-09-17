#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int theInteger;
	int* pInteger = &theInteger;
	*pInteger = 5;

	cout << "Liczba całkowita: " << *pInteger << endl;

	return 0;
}