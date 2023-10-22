#include <iostream>

using namespace std;

class Mammal
{
public:
	Mammal() :itsAge(1) { cout << "Konstruktor klasy Mammal...\n"; }
	virtual ~Mammal() { cout << "Destruktor klasy Mammal...\n"; }
	Mammal(const Mammal& rhs);

	virtual void Speak() const { cout << "Ssak mówi!\n"; }
	virtual Mammal* Clone() { return new Mammal(*this); }
	int GetAge() const { return itsAge; }

protected:
	int itsAge;
};

Mammal::Mammal(const Mammal& rhs) :itsAge(rhs.GetAge())
{
	cout << "Konstruktor kopiujący klasy Mammal...\n";
}

class Dog : public Mammal
{
public:
	Dog() { cout << "Konstruktor klasy Dog...\n"; }
	virtual ~Dog() { cout << "Destruktor klasy Dog...\n"; }
	Dog(const Dog& rhs);
	void Speak() const { cout << "Hau!\n"; }
	virtual Mammal* Clone() { return new Dog(*this); }
};

Dog::Dog(const Dog& rhs) :
	Mammal(rhs)
{
	cout << "Konstruktor kopiujący klasy Dog...\n";
}

class Cat : public Mammal
{
public:
	Cat() { cout << "Konstruktor klasy Cat...\n"; }
	~Cat() { cout << "Destruktor klasy Cat...\n"; }
	Cat(const Cat&);
	void Speak() const { cout << "Miau!\n"; }
	virtual Mammal* Clone() { return new Cat(*this); }
};

Cat::Cat(const Cat& rhs) :
	Mammal(rhs)
{
	cout << "Konstruktor kopiujący klasy Cat...\n";
}

enum ANIMALS {MAMMAL, DOG, CAT};
const int NumAnimalTypes = 3;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal* theArray[NumAnimalTypes];
	Mammal* ptr;

	int choice, i;

	for (i = 0; i < NumAnimalTypes; i++)
	{
		cout << "(1)pies (2)kot (3)ssak: ";
		cin >> choice;
		switch (choice)
		{
		case DOG: ptr = new Dog;
			break;
		case CAT: ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;
		}
		theArray[i] = ptr;
	}
	Mammal* OtherArray[NumAnimalTypes];
	for (i = 0; i < NumAnimalTypes; i++)
	{
		theArray[i]->Speak();
		OtherArray[i] = theArray[i]->Clone();
	}
	for (i = 0; i < NumAnimalTypes; i++)
		OtherArray[i]->Speak();
	return 0;
}