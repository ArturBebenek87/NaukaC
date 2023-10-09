#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
public:
	Mammal() { cout << "Konstruktor klasy Mammal...\n"; }
	~Mammal() { cout << "Destruktor klasy Mammal...\n"; }

	void Speak() const { cout << "Dźwięk ssaka!\n"; }
	void Sleep() const { cout << "Cicho. Właśnie śpię.\n"; }

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	Dog() { cout << "Konstruktor klasy Dog...\n"; }
	~Dog() { cout << "Destruktor klasy Dog...\n"; }

	void WagTail() const { cout << "Macham ogonkiem...\n"; }
	void BegForFood() const { cout << "Proszę o jedzenie...\n"; }
	void Speak() const { cout << "Hau!\n"; }

private:
	BREED itsBreed;
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Speak();
	Fido.Speak();
	return 0;
}