#include <iostream>

using namespace std;

class SimpleCat
{
public:
	SimpleCat();
	SimpleCat(SimpleCat&);
	~SimpleCat();

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	
private:
	int itsAge;
};

SimpleCat::SimpleCat()
{
	cout << "Konstruktor klasy SimpleCat..." << endl;
	itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
	cout << "Konstruktor kopiujący klasy SimpleCat..." << endl;
}

SimpleCat::~SimpleCat()
{
	cout << "Destruktor klasy SimpleCat..." << endl;
}

const SimpleCat& FunctionTwo(const SimpleCat& theCat);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	cout << "Tworzę obiekt..." << endl;
	SimpleCat Frisky;
	cout << "Frisky ma " << Frisky.GetAge() << " lat" << endl;
	int age = 5;
	Frisky.SetAge(age);
	cout << "Frisky ma " << Frisky.GetAge() << " lat" << endl;
	cout << "Wywołuję funkcję FunctionTwo..." << endl;
	FunctionTwo(Frisky);
	cout << "Frisky ma " << Frisky.GetAge() << " lat" << endl;
	
	return 0;
}

//referencja do obiektu const

const SimpleCat& FunctionTwo(const SimpleCat& theCat)
{
	cout << "FunctionTwo. Wracam..." << endl;
	cout << "Frisky ma teraz " << theCat.GetAge();
	cout << " lat" << endl;

	return theCat;
}