#include <iostream>

using namespace std;

unsigned int fib(unsigned int position);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	unsigned int answer, position;

	cout << "Który wyraz ciągu? ";
	cin >> position;

	cout << endl;

	answer = fib(position);
	cout << position << " wyraz ciągu Fibonacciego ";
	cout << "ma wartość " << answer << endl;
	return 0;
}

unsigned int fib(unsigned int n)
{
	unsigned int minusTwo = 1, minusOne = 1, answer = 2;

	if (n < 3)
		return 1;

	for (n -= 3; n != 0; n--)
	{
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}
	return answer;
}