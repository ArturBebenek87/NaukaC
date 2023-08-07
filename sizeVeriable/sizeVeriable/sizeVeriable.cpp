#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Rozmiar zmiennej typu int to:\t\t" << sizeof(int) << " bajty." << endl;
	cout << "Rozmiar zmiennej typu short int to:\t" << sizeof(short) << " bajty." << endl;
	cout << "Rozmiar zmiennej typu long int to:\t" << sizeof(long) << " bajty." << endl;
	cout << "Rozmiar zmienej typu char to:\t\t" << sizeof(char) << " bajt." << endl;
	cout << "Rozmiar zmiennej typu float to:\t\t" << sizeof(float) << " bajty." << endl;
	cout << "Rozmiar zmiennej typu double to:\t" << sizeof(double) << " bajtów." << endl;
	cout << "Rozmiar zmiennej typu bool to:\t\t" << sizeof(bool) << " bajt." << endl;

	return 0;
}