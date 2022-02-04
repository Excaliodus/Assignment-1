#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, x3, y1, y2, y3, d1, d2, d3, p, Area;
    cout << "Enter X coordinate of Point A." << endl;
    cin >> x1;
    cout << "Enter Y coordinate of Point A." << endl; 
    cin >> y1;
    cout << "Enter X coordinate of Point B." << endl;
    cin >> x2;
    cout << "Enter Y coordinate of Point B." << endl;
    cin >> y2;
    cout << "Enter X coordinate of Point C." << endl;
    cin >> x3;
    cout << "Enter Y coordinate of Point C." << endl;
    cin >> y3;
    d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    d2 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    d3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    cout << " Distance between points A and B is " << d1 << endl;
    cout << " Distance between points A and C is " << d2 << endl;
    cout << " Distance between points B and C is " << d3 << endl;
    p = (d1 + d2 + d3) / 2;
    Area = sqrt(p * (p - d1) * (p - d2) * (p - d3));
    cout << "Area of triangle is " << Area << endl;
    system("Pause");
    return 0;
}