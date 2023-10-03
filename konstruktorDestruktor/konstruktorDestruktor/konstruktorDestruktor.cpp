#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int initialAge);
	~Cat();
	int GetAge();
	void SetAge(int age);
	void Meow();
private:
	int itsAge;
};

Cat::Cat(int initialAge)
{
	itsAge = initialAge;
}

Cat::~Cat()
{
}

int Cat::GetAge()
{
	return itsAge;
}

void Cat::SetAge(int age)
{
	itsAge = age;
}

void Cat::Meow()
{
	cout << "Miauczy." << endl;
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