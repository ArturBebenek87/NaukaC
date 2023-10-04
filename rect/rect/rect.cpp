#include "rect.h"

Rectangle::Rectangle(int top, int left, int bottom, int right)
{
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;

	itsUpperLeft.SetX(left);
	itsUpperLeft.SetY(top);

	itsUpperRight.SetX(right);
	itsUpperRight.SetY(top);

	itsLowerLeft.SetX(left);
	itsLowerLeft.SetY(bottom);

	itsLowerRight.SetX(right);
	itsLowerRight.SetY(bottom);
}

int Rectangle::GetArea() const
{
	int Width = itsRight - itsLeft;
	int Height = itsTop - itsBottom;
	return (Width * Height);
}

int main()
{
	setlocale(LC_ALL, "PL_pl");

	Rectangle MyRectangle(100, 20, 50, 80);

	int Area = MyRectangle.GetArea();

	cout << "Obszar: " << Area << endl;
	cout << "Wsp. X lewego górnego rogu: " << MyRectangle.GetUpperLeft().GetX();
	cout << endl;
	return 0;
}