#include "Cat.h"

Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}

Cat::~Cat()
{
}

int main()
{
	Cat Frisky(5);
	Frisky.Meow();

	cout << "Frisky jest kotem i ma ";
	cout << Frisky.GetAge() << " lat." << endl;
	Frisky.Meow();
	Frisky.SetAge(7);
	cout << "Teraz Frisky ma ";
	cout << Frisky.GetAge() << " lat." << endl;
	return 0;
}