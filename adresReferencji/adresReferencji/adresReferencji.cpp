#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int intOne;
	int& rSomeRef = intOne;

	intOne = 5;

	cout << "intOne: " << intOne << endl;
	cout << "rSomeRef: " << rSomeRef << endl << endl;

	cout << "&intOne: " << &intOne << endl;
	cout << "&rSomeRef: " << &rSomeRef << endl;

	return 0;
}