#include <iostream>

using namespace std;

int& GetInt();

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int& rInt = GetInt();
	cout << "rInt = " << rInt << endl;

	return 0;
}

int& GetInt()
{
	int nLocalInt = 25;

	return nLocalInt;
}