#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	char buffer[80] = { '\0' };
	cout << "Wpisz ciąg znaków: ";
	cin.get(buffer, 79);
	cout << "Podany przez Ciebie ciąg znaków to: " << buffer << endl;

	return 0;
}