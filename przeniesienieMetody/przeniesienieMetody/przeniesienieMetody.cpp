#include <iostream>

using namespace std;

class Horse
{
public:
	void Gallop() { cout << "Galopuję...\n"; }
	virtual void Fly() { cout << "Konie nie potrafią latać.\n"; }
private:
	int itsAge;
};

class Pegasus : public Horse
{
public:
	virtual void Fly()
	{ cout << "Mogę latac! Mogę latać! Mogę latać!\n"; }
};

const int NumberHorses = 5;

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Horse* Ranch[NumberHorses];
	Horse* pHorse;

	int choice, i;

	for (i = 0; i < NumberHorses; i++)
	{
		cout << "(1)Koń (2) Pegaz: ";
		cin >> choice;
		if (choice == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	cout << endl;
	for (i = 0; i < NumberHorses; i++)
	{
		Ranch[i]->Fly();
		delete Ranch[i];
	}
	return 0;
}