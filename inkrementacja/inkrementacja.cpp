#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int myAge = 39; //inicjacja zmiennej mój wiek i przypisanie jej wartości
	int yourAge = 39; //inicjacja zmiennej twój wiek i przypisanie jej wartości

	cout << "Ja mam " << myAge << " lat." << endl;
	cout << "Ty masz " << yourAge << " lat." << endl;

	myAge++; //inkrementacja przyrostkowa
	++yourAge; //inkrementacja przedrostkowa

	cout << "Minął rok..." << endl;
	cout << "Ja mam " << myAge << endl;
	cout << "Ty masz " << yourAge << endl;

	cout << "Minął kolejny rok." << endl;

	cout << "Ja mam " << myAge++ << " lat." << endl;
	cout << "Ty masz " << ++yourAge << " lat." << endl;

	cout << "Wypiszymy to jeszcze raz" << endl;

	cout << "Ja mam " << myAge << " lat." << endl;
	cout << "Ty masz " << yourAge << " lat." << endl;

	return 0;


}