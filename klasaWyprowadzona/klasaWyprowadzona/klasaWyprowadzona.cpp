#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	Mammal(): itsAge(2), itsWeight(5){}
	~Mammal(){}

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	void Speak() const { cout << "Dźwięk ssaka!\n"; }
	void Sleep() const { cout << "Cicho. Właśnie śpię.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	Dog():itsBreed(GOLDEN){}
	~Dog(){}

	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	void WagTail() const { cout << "Macham ogonem...\n"; }
	void BegForFood() const { cout << "Proszę o jedzenie...\n"; }

private:
	BREED itsBreed;
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout << "Fido ma " << Fido.GetAge() << " lat(a)" << endl;
	return 0;
}