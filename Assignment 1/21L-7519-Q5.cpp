#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, p, Area;
	cout << "Enter length of side A of triangle. " << endl;
	cin >> a;
	cout << "Enter length of side B of triangle. " << endl;
	cin >> b;
	cout << "Enter length of side C of triangle. " << endl;
	cin >> c;
	p = (a + b + c) / 2;
	Area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "The area of triangle is " << Area << endl;
	system("pause");
	return 0;
}