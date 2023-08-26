#include <iostream>

using namespace std;

float Convert(float);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	float tempFer;
	float tempCel;

	cout << "Podaj temperaturę w stopniach Fahrenheita: ";
	cin >> tempFer;
	tempCel = Convert(tempFer);

	cout << "Odpowiadająca jej temperatura w stopniach Celsjusza: " << tempCel << endl;

	return 0;
}

float Convert(float tempFer)
{
	float tempCel;
	tempCel = ((tempFer - 32) * 5) / 9;
	return tempCel;
}