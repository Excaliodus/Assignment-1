#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, d, x1, x2;
	cout << "Enter the cooeficient of x^2. " << endl;
	cin >> a;
	cout << "Enter the cooficient of x. " << endl;
	cin >> b;
	cout << "Enter the constant. " << endl;
	cin >> c;
	d = sqrt((b * b) - (4 * a * c));
	x1 = (-b + d) / (2 * a);
	x2 = (-b - d) / (2 * a);
	cout << "The first root is " << x1 << endl;
	cout << "The second root is " << x2 << endl;
	system("pause");
	return 0;
}