#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	string str1("Ciąg tekstowy w C++! ");//przypisanie ciągu tekstowego do str1

	cout << "str1 = " << str1 << endl;
	
	string str2;

	str2 = str1;

	cout << "Wynik przypisania str2 = " << str2 << endl;

	str2 = "Witaj nowy ciągu tekstowy!";

	cout << "Po nadpisaniu treści str2 = " << str2 << endl << endl;

	string strAddResult;

	strAddResult = str1 + str2;

	cout << "Wynik dodawania wartości str1 i str2 to: " << strAddResult << endl;

	return 0;
}