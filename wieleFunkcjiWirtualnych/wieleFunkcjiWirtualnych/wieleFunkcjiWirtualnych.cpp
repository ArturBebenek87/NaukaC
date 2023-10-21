#include <iostream>

using namespace std;

class Mammal
{
public:
	Mammal(): itsAge(1){ }
	virtual ~Mammal() { }
	virtual void Speak() const { cout << "Ssak mów!\n"; }
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
public:
	void Speak() const { cout << "Miau!\n"; }
};

class Horse : public Mammal
{
public:
	void Speak() const { cout << "Ihaa!\n"; }
};

class Pig : public Mammal
{
public:
	void Speak() const { cout << "Kwik!\n"; }
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal* theArray[5];
	Mammal* ptr;
	int choice, i;

	for (i = 0; i < 5; i++)
	{
		cout << "(1)pies (2)kot (3)koń (4)świnia: ";
		cin >> choice;
		switch (choice)
		{
		case 1: ptr = new Dog;
			break;
		case 2: ptr = new Cat;
			break;
		case 3: ptr = new Horse;
			break;
		case 4: ptr = new Pig;
			break;
		default: ptr = new Mammal;
			break;
		}
		theArray[i] = ptr;
	}
	for (i = 0; i < 5; i++)
		theArray[i]->Speak();
	return 0;
}