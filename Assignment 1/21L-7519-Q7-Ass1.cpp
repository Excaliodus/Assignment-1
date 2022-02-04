#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double l, w, h, r, b, hp, H, rc, Hc, Vb = 0, Vs = 0, Vp = 0, Vc = 0;
	//box
	cout << "Enter the length of box. " << endl;
	cin >> l;
	if (l < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}
	cout << "Enter the width of box. " << endl;
	cin >> w;
	if (w < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}
	cout << "Enter the height of box. " << endl;
	cin >> h;
	if (h < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}

	Vb = l * w * h;
	cout << "The volume of box is " << Vb << endl;

	//sphere
	cout << "Enter the radius of sphere. " << endl;
	cin >> r;
	if (r < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}

	Vs = 0.75 * (M_PI) * (r * r * r);
	cout << "The volume of sphere is " << Vs << endl;
	
	//prisim
	cout << "Enter the height of triangle of prisim. " << endl;
	cin >> hp;
	if (hp < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}
	cout << "Enter the base of triangle of prisim. " << endl;
	cin >> b;
	if (b < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}
	cout << "Enter the height of prisim. " << endl;
	cin >> H;
	if (H < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}

	Vp = 0.5 * b * hp * H;
	cout << "The volume of prisim is " << Vp << endl;
	
	//cylinder
	cout << "Enter the radius of cylinder. " << endl;
	cin >> rc;
	if (rc < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}
	cout << "Enter the height of cylinder. " << endl;
	cin >> Hc;
	if (Hc < 0)
	{
		cout << "Input cannot be negative." << endl;
		exit(1);
	}

	Vc = (M_PI) * (r * r) * Hc;
	cout << "The volume of cylinder is " << Vc << endl;

	system("pause");
	return 0;
}