#include <iostream>

using namespace std;

int fib(int n);

int main()
{
	setlocale(LC_ALL, "PL_pl");


	int n, answer;

	cout << "Podaj numer elementu ciągu: ";
	cin >> n;

	cout << endl;

	answer = fib(n);

	cout << endl << "Wartością " << n << "-go elementu ciągu Fibonacciego jest " << answer << endl;

	return 0;
}

int fib(int n)
{
	cout << "Przetwarzanie fib(" << n << ")... ";

	if (n < 3)
	{
		cout << "Zwraca 1!" << endl;
		return (1);
	}
	else
	{
		cout << "Wywołuje fib(" << n - 2 << ") oraz fib(" << n-1 << ")." << endl;

		return (fib(n - 2) + fib(n - 1));
	}
}