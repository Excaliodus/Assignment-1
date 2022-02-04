#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float b1, b2, h, Area;
	cout << "Enter length of the first parallel side of trapezoid. " << endl;
	cin >> b1;
	cout << "Enter length of the second parallel side of trapezoid. " << endl;
	cin >> b2;
	cout << "Enter the height of the trapezoid. " << endl;
	cin >> h;
	Area = (b1 + b2) * (h / 2);
	cout << "The area of trapezoid is " << Area << endl;
	system("pause");
	return 0;
}