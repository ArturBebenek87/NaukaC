#include <iostream>

using namespace std;

int main()
{
	int localVeriable = 5;
	int* pLocal = &localVeriable;
	int* pHeap = new int;
	*pHeap = 7;
	cout << "localVeriable: " << localVeriable << endl;
	cout << "*pLocal: " << *pLocal << endl;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;
	pHeap = new int;
	*pHeap = 9;
	cout << "*pHeap: " << *pHeap << endl;
	delete pHeap;

	return 0;
}