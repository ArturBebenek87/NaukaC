#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	char ch = 'a';

	do
	{
		cout << ch << ' ';
		ch++;
	} while (ch <= 'z');
}