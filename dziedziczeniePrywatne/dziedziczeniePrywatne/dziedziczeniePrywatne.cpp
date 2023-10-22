#include <iostream>

using namespace std;

class ElecticMotor
{
public:
	ElecticMotor() {};
	virtual ~ElecticMotor() {};

public:
	void StartMotor()
	{
		Accelerate();
		Cruise();
	}

	void StopMotor()
	{
		cout << "Silnik zatrzymany" << endl;
	}

private:
	void Accelerate()
	{
		cout << "Silnik uruchomiony" << endl;
	}

	void Cruise()
	{
		cout << "Silnik działa ze stałą prędkością" << endl;
	}
};

class Fan : private ElecticMotor
{
public:
	Fan() {};
	~Fan() {};

	void StartFan()
	{
		StartMotor();
	}

	void StopFan()
	{
		StopMotor();
	}
};

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Fan mFan;

	mFan.StartFan();
	mFan.StopFan();

	return 0;
}