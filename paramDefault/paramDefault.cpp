#include <iostream>

using namespace std;

int AreaCube(int length, int width = 25, int height = 1);

int main()
{
	setlocale(LC_ALL, "PL_pl");

	int length = 100;
	int width = 50;
	int height = 2;
	int area;

	area = AreaCube(length, width, height);

	cout << "Za pierwszym razem objętość wynosi: " << area << endl;

	area = AreaCube(length, width);

	cout << "Za drugim razem objętość wynosi: " << area << endl;

	area = AreaCube(length);

	cout << "Za trzecim razem objętość wynosi: " << area << endl;

	return 0;
}

int AreaCube(int length, int width, int height)
{
	return (length * width * height);
}