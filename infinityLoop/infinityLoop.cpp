#include <iostream>

using namespace std;

//prototypy
int menu();
void DoTaskOne();
void DoTaskMany(int);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	bool exit = false;
	for (;;)
	{
		int choice = menu();
		switch (choice)
		{
		case(1):
			DoTaskOne();
			break;
		case(2):
			DoTaskMany(2);
			break;
		case(3):
			DoTaskMany(3);
			break;
		case(4):
			continue;
			break;
		case(5):
			exit = true;
			break;
		default:
			cout << "Proszę wybrać ponownie! " << endl;
			break;
		} //koniec switch

		if (exit == true)
			break;
	} //koniec for(;;)
	return 0;
}

int menu()
{
	int choice;

	cout << " **** Menu **** " << endl << endl;
	cout << "(1) Pierwsza opcja. " << endl;
	cout << "(2) Druga opcja. " << endl;
	cout << "(3) Trzecia opcja. " << endl;
	cout << "(4) Ponownie wyświetl menu. " << endl;
	cout << "(5) Wyjście. " << endl << endl;
	cout << ": ";
	cin >> choice;
	return choice;
 }

void DoTaskOne()
{
	cout << "Opcja Pierwsza! " << endl;
}

void DoTaskMany(int which)
{
	if (which == 2)
		cout << "Opcja druga! " << endl;
	else
		cout << "Opcja trzecia! " << endl;
}