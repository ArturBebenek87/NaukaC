#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	for (int i = 32; i < 128; i++)
		cout << (char)i;
	cout << endl;

	return 0;
}