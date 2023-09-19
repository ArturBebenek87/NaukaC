#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int intOne;
	int& rSomeRef = intOne;

	intOne = 5;

	cout << "intOne:\t" << intOne << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&rSomeRef:\t" << &rSomeRef << endl;

	int intTwo = 8;

	rSomeRef = intTwo;
	cout << endl << "intOne:\t" << intOne << endl;
	cout << "intTwo:\t" << intTwo << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&intTwo:\t" << &intTwo << endl;
	cout << "&rSomeRef:\t" << &rSomeRef << endl;

	return 0;
}