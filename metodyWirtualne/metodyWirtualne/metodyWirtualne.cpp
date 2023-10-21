#include <iostream>

using namespace std;

class Mammal
{
public:
	Mammal() :itsAge(1) { cout << "Konstruktor klasy Mammal...\n"; }
	virtual ~Mammal() { cout << "Destruktor klasy Mammal...\n"; }
	void Move() const { cout << "Ssak przeszedł jeden krok.\n"; }
	virtual void Speak() const { cout << "Metoda Speak klasy Mammal\n"; }

protected:
	int itsAge;
};

class Dog : public Mammal
{
public:
	Dog() { cout << "Konstruktor klasy Dog...\n"; }
	virtual ~Dog() { cout << "Destruktor klasy Dog...\n"; }
	void WagTail() { cout << "Macham ogonkiem...\n"; }
	void Speak() const { cout << "Hau!\n"; }
	void Move() const { cout << "Pies przeszedł 5 kroków...\n"; }
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal* pDog = new Dog;
	pDog->Move();
	pDog->Speak();

	return 0;
}