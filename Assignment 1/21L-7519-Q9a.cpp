#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2, d;
    cout << "Enter X coordinate of Point A." << endl;
    cin >> x1;
    cout << "Enter Y coordinate of Point A." << endl; 
    cin >> y1;
    cout << "Enter X coordinate of Point B." << endl;
    cin >> x2;
    cout << "Enter Y coordinate of Point B." << endl;
    cin >> y2;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << " Distance between points A and B is " << d << endl;
    system("Pause");
    return 0;
}