#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	Mammal();
	Mammal(int age);
	~Mammal();

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }

	void Speak() const { cout << "Dźwięk ssaka!\n"; }
	void Sleep() const { cout << "Ciiicho. Właśnie śpię.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	Dog();
	Dog(int age);
	Dog(int age, int weight);
	Dog(int age, BREED breed);
	Dog(int age, int weight, BREED breed);
	~Dog();

	BREED GetBreed() const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }

	void WagTail() const { cout << "Macham ogonem...\n"; }
	void BegForFood() const { cout << "Proszę o jedzenie...\n"; }

private:
	BREED itsBreed;
};

Mammal::Mammal() :
	itsAge(1),
	itsWeight(5)
{
	cout << "Konstruktor klasy Mammal..." << endl;
}

Mammal::Mammal(int age) :
	itsAge(age),
	itsWeight(5)
{
	cout << "Konstruktor klasy Mammal(int)..." << endl;
}

Mammal::~Mammal()
{
	cout << "Destruktor klasy Mammal..." << endl;
}

Dog::Dog() :
	Mammal(),
	itsBreed(GOLDEN)
{
	cout << "Konstruktor klasy Dog..." << endl;
}

Dog::Dog(int age) :
	Mammal(age),
	itsBreed(GOLDEN)
{
	cout << "Konstruktor klasy Dog(int)..." << endl;
}

Dog::Dog(int age, int weight):
	Mammal(age),
	itsBreed(GOLDEN)
{
	itsWeight = weight;
	cout << "Konstruktor klasy Dog(int, int)..." << endl;
}

Dog::Dog(int age, int weight, BREED breed) :
	Mammal(age),
	itsBreed(breed)
{
	itsWeight = weight;
	cout << "Konstruktor klasy Dog(int, int, BREED)..." << endl;
}

Dog::Dog(int age, BREED breed) :
	Mammal(age),
	itsBreed(breed)
{
	cout << "Konstruktor klasy Dog(int, BREED)..." << endl;
}

Dog::~Dog()
{
	cout << "Destruktor klasy Dog..." << endl;
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Dog Fido;
	Dog rover(5);
	Dog buster(6, 8);
	Dog yorkie(3, GOLDEN);
	Dog dobbie(4, 20, DOBERMAN);
	Fido.Speak();
	rover.WagTail();

	cout << "Yorkie ma " << yorkie.GetAge() << " lat(a)" << endl;
	cout << "Dobbie waży " << dobbie.GetWeight() << " funtów" << endl;
	return 0;
}