#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, x = 0, y = 35;
	cout << "a = " << a << " b = " << b << " x = " << x << " y = " << y << endl;

	a = 9;
	b = 7;

	y = x = a + b;
	cout << "a = " << a << " b = " << b << " x = " << x << " y = " << y << endl;

	return 0;
}