#include <iostream>

using namespace std;

class Mammal
{
public:
	void Move() const { cout << "Ssak przeszedł jeden krok.\n"; }
	void Move(int distance) const
	{
		cout << "Ssak przeszedł ";
		cout << distance << " kroki.\n";
	}
protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal
{
public:
	void Move() const { cout << "Pies przeszedł 5 kroków.\n"; }
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Move();
	bigAnimal.Move(2);
	Fido.Move();
	return 0;
}