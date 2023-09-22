#include <iostream>

using namespace std;

class SimpleCat
{
public:
	SimpleCat();		   //kontruktor
	SimpleCat(SimpleCat&); //konstruktor kopiujący
	~SimpleCat();		   //destruktor
};

SimpleCat::SimpleCat()
{
	cout << "Konstruktor klasy SimpleCat..." << endl;
}

SimpleCat::SimpleCat(SimpleCat&)
{
	cout << "Konstruktor kopiujący klasy SimpleCat..." << endl;
}

SimpleCat::~SimpleCat()
{
	cout << "Destruktor klasy SimpleCat..." << endl;
}

SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* FunctionTwo(SimpleCat* theCat);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Tworzę obiekt..." << endl;
	SimpleCat Frisky;
	cout << "Wywołuję funkcję FunctionOne..." << endl;
	FunctionOne(Frisky);
	cout << "Wywołuję funkcję FunctionTwo..." << endl;
	FunctionTwo(&Frisky);

	return 0;
}

SimpleCat FunctionOne(SimpleCat theCat)
{
	cout << "FunctionOne. Wracam..." << endl;
	return theCat;
}

SimpleCat* FunctionTwo(SimpleCat* theCat)
{
	cout << "FunctionTwo. Wracam..." << endl;
	return theCat;
}