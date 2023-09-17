#include <iostream>

using namespace std;

class SimpleCat
{
public:
	SimpleCat();
	~SimpleCat();
private:
	int itsAge;
};

SimpleCat::SimpleCat()
{
	cout << "Wywołano konstruktor. " << endl;
	itsAge = 1;
}

SimpleCat:: ~SimpleCat()
{
	cout << "Wywołano destruktor. " << endl;
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "SimpleCat Frisky... " << endl;
	SimpleCat Frisky;
	cout << "SimpleCat *pRags = new SimpleCat... " << endl;
	SimpleCat* pRags = new SimpleCat;
	cout << "delete pRags... " << endl;
	delete pRags;
	cout << "Wyjście, czekaj na Frisky... " << endl;

	return 0;
}