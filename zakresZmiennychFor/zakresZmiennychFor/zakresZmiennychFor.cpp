#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int i;

	for (i = 0; i < 5; i++)
	{
		cout << "i: " << i << endl;
	}
	i = 7; //i znajdujące sie w zakresie każdego kompilatora
	return 0;
}