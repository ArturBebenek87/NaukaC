#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int rows, columns;
	char theChar;

	cout << "Ile wierszy? ";
	cin >> rows;
	cout << "Ile kolumn? ";
	cin >> columns;
	cout << "Jaki znak? ";
	cin >> theChar;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << theChar;
		cout << endl;
	}
	return 0;
}