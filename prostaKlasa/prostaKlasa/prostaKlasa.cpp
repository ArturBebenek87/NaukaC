#include <iostream>

using namespace std;

class Cat
{
public:
	int GetAge();
	void SetAge(int age);
	void Meow();
private:
	int itsAge;
};

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
	setlocale(LC_ALL, "PL_pl");

	Cat Frisky;
	Frisky.SetAge(5);
	Frisky.Meow();

	cout << "Frisky jest kotem i ma ";
	cout << Frisky.GetAge() << " lat." << endl;
	Frisky.Meow();

	return 0;
}
