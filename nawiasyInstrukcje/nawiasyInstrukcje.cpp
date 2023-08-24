#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int x;

	cout << "Wpisza liczbę mniejszą niż 10 lub większą niż 100: ";
	cin >> x;
	cout << endl;

	if (x >= 10)
	{
		if (x > 100)
			cout << "Większa niż 100. Dziękuję!" << endl;
	}
	else
		cout << "Mniejsze niż 10. Dziękuję!" << endl;

	return 0;
}