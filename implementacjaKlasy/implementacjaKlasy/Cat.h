#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int initialAge);
	~Cat();
	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	void Meow() const { cout << "Miauczy.\n"; }
private:
	int itsAge;
};
