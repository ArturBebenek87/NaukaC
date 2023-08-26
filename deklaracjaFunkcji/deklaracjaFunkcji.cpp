#include <iostream>

using namespace std;

int Area(int length, int width); //prototyp funkcji

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int szerokoscPodworka = 0;
	int dlugoscPodworka = 0;
	int obszarPodworka = 0;

	cout << "Podaj szerokość swojego podwórka: ";
	cin >> szerokoscPodworka;
	cout << endl << "Podaj dłuść swojego podwórka: ";
	cin >> dlugoscPodworka;

	obszarPodworka = Area(szerokoscPodworka, dlugoscPodworka);

	cout << endl << "Twoje podwórko ma " << obszarPodworka << " metrów kwadratowych" << endl;

	return 0;
}

int Area(int len, int wid)
{
	return len * wid;
}