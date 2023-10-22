#include <iostream>

using namespace std;

class Mammal
{
public:
	Mammal(): itsAge(1) { }
	virtual ~Mammal () { }
	virtual void Speak() const { cout << "Ssak mówi!\n"; }

protected:
	int itsAge;
};

class Dog : public Mammal
{
public:
	void Speak() const { cout << "Hau!\n"; }
};

class Cat : public Mammal
{
	void Speak() const { cout << "Miau!\n"; }
};

void ValueFunction(Mammal);
void PtrFunction(Mammal*);
void RefFunction(Mammal&);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal* ptr = 0;
	int choice;
	while (1)
	{
		bool fQuit = false;
		cout << "(1)pies (2)kot (0)Wyjście: ";
		cin >> choice;
		switch (choice)
		{
		case 0: fQuit = true;
			break;
		case 1: ptr = new Dog;
			break;
		case 2: ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;
		}
		if (fQuit)
			break;
		PtrFunction(ptr);
		RefFunction(*ptr);
		ValueFunction(*ptr);
	}
	return 0;
}

void ValueFunction(Mammal MammalValue)
{
	MammalValue.Speak();
}

void PtrFunction(Mammal* pMammal)
{
	pMammal->Speak();
}

void RefFunction(Mammal& rMammal)
{
	rMammal.Speak();
}