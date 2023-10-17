//***************************************************************
// Given the length and width of a rectangle, this C++ program
// coputes and outputs the perimenter and area of the rectangle
//***************************************************************

#include <iostream>

using namespace std;

int main() {
	double length, width, area, perimeter;

	cout << "Program to compute and output the perimeter and "
		<< "area of a rectangle." << endl;

	length = 6.0;
	width = 4.0;
	perimeter = 2 * (length + width);
	area = length * width;

	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;

	return 0;


}