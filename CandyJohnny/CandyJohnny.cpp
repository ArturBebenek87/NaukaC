#include <iostream>

using namespace std;

int uczniowie;
int cukierki;
int x;
int y;

int main()
{
	setlocale (LC_ALL, "PL_pl");

	cout << "Ile uczniów liczy klasa: ";
	cin >> uczniowie;

	cout << "Ile sztuk cukierków zostało kupionych: ";
	cin >> cukierki;

	x = cukierki / (uczniowie - 1);
	cout << endl << "Ile cukierków dla każdego ucznia: " << x << endl;

	y = cukierki - x * (uczniowie - 1);
	cout << "Ilość cukierków, które zostały dla solenizanta: " << y << endl;

	return 0;
}