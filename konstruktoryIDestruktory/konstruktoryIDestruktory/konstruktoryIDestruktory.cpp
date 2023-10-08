#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	//konstruktory
	Mammal();
	~Mammal();

	//akcesory

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	//inne metody

	void Speak() const { cout << "Dźwięk ssaka!\n"; }
	void Sleep() const { cout << "Ciicho. Właśnie śpię.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	Dog();
	~Dog();

	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	void WagTail() const { cout << "Macham ogonkiem...\n"; }
	void BegForFood() const { cout << "Proszę o jedzenie...\n"; }

private:
	BREED itsBreed;
};

Mammal::Mammal() :
	itsAge(3),
	itsWeight(5)
{
	cout << "Konstruktor klasy Mammal..." << endl;
}

Mammal::~Mammal()
{
	cout << "Destruktor klasy Mammal..." << endl;
}

Dog::Dog() :
	itsBreed(GOLDEN)
{
	cout << "Konstruktor klasy Dog..." << endl;
}

Dog::~Dog()
{
	cout << "Destruktor klasy Dog..." << endl;
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Dog Fido;
	Fido.Speak();
	Fido.WagTail();

	cout << "Fido ma " << Fido.GetAge() << " lat(a)." << endl;
	return 0;
}