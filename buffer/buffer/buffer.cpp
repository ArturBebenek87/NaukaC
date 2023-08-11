#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	char buffer[80] = { '\0' };
	cout << "Wpisz ciąg tekstowy: ";
	cin >> buffer;
	cout << "Oto zawartość bufora, którą wprowadziłeś: " << buffer << endl;

	return 0;
}