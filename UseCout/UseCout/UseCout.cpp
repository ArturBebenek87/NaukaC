#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Hej!\n";
	cout << "To jest cyfra 5: " << 5 << endl;
	cout << "Manipulator endl wyświetla nową linię na ekranie." << endl;
	cout << "To jest bardzo duża liczba: \t" << 70000 << endl;
	cout << "To jest suma 8 i 5:\t";
	cout << 8 + 5 << endl;
	cout << "To jest ułamek:\t\t";
	cout << (float)5 / 8 << endl;
	cout << "I naprawdę duża liczba:\t";
	cout << (double)7000 * 7000 << endl;
	cout << "Nazywam się Artur Bębenek ";
	cout << "i zaczynam uczyć się C++!" << endl;

	return 0;
}