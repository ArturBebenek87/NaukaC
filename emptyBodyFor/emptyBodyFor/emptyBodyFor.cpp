#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	for (int i = 0; i < 5; cout << "i: " << i++ << endl)
		;
	return 0;
}