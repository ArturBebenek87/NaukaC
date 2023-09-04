#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	for (int i = 0, j = 0; i < 3; i++, j++)
		cout << "i: " << i << " j: " << j << endl;

	return 0;
}