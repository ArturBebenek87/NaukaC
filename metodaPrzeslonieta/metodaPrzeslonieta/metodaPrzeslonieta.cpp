#include <iostream>

using namespace std;

class Mammal
{
public:
	void Move() const { cout << "Ssak przeszedł jeden krok.\n"; }
	void Move(int distance) const
	{
		cout << "Ssak przeszedł " << distance;
		cout << " kroki." << endl;
	}

protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	void Move() const;
};

void Dog::Move() const
{
	cout << "W metodzie Move klasy Dog...\n";
	Mammal::Move(3);
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Move(2);
	Fido.Mammal::Move(6);
	return 0;
}