#include <iostream>

using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int myInt = 6500;
	long myLong = 65000;
	float myFloat = 6.5F;
	double myDouble = 6.5e20;

	int doubleInt;
	long doubleLong;
	float doubleFloat;
	double doubleDouble;

	cout << "myInt: " << myInt << endl;
	cout << "myLong: " << myLong << endl;
	cout << "myFloat: " << myFloat << endl;
	cout << "myDouble: " << myDouble << endl;

	doubleInt = Double(myInt);
	doubleLong = Double(myLong);
	doubleFloat = Double(myFloat);
	doubleDouble = Double(myDouble);

	cout << "doubleInt: " << doubleInt << endl;
	cout << "doubleLong: " << doubleLong << endl;
	cout << "doubleFloat: " << doubleFloat << endl;
	cout << "doubleDouble: " << doubleDouble << endl;

	return 0;
}

int Double(int original)
{
	cout << "Wewnątrz Double(int)" << endl;
	return 2 * original;
}

long Double(long original)
{
	cout << "Wewnątrz Double(long)" << endl;
	return 2 * original;
}

float Double(float original)
{
	cout << "Wewnątrz Double(float)" << endl;
	return 2 * original;
}

double Double(double original)
{
	cout << "Wewnątrz Double(double)" << endl;
	return 2 * original;
}