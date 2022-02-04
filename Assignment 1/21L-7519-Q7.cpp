#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double l, w, h, r, b, hp, H, rc, Hc, Vb = 0, Vs = 0, Vp = 0, Vc = 0;
	cout << "Enter the length of box. " << endl;
	cin >> l;
	if (l < 0)
	{
		exit(1);
	}
	cout << "Enter the width of box. " << endl;
	cin >> w;
	cout << "Enter the height of box. " << endl;
	cin >> h;

	Vb = l * b * h;
	cout << "The volume of box is " << Vb << endl;

	cout << "Enter the radius of sphere. " << endl;
	cin >> r;

	Vs = 0.75 * (M_PI) * (r * r * r);
	cout << "The volume of sphere is " << Vs << endl;

	cout << "Enter the height of triangle of prisim. " << endl;
	cin >> hp;
	cout << "Enter the base of triangle of prisim. " << endl;
	cin >> b;
	cout << "Enter the height of prisim. " << endl;
	cin >> H;

	Vp = 0.5 * b * hp * H;
	cout << "The volume of prisim is " << Vp << endl;

	cout << "Enter the radius of cylinder. " << endl;
	cin >> rc;
	cout << "Enter the height of cylinder. " << endl;
	cin >> Hc;

	Vc = (M_PI) * (r * r) * Hc;
	cout << "The volume of cylinder is " << Vc << endl;

	system("pause");
	return 0;
}