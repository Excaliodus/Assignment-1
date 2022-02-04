#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1 = -6, x2 = -12, x3 = 8, x4 = 13, x5 = 11, x6 = 6;
    int x7 = 7, x8 = 2, x9 = -6, x10 = -9, x11 = -10, x12 = 11, x13 = 10, x14 = 9, x15 = 2;
    double mean, sd, a;
    mean = (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11 + x12 + x13 + x14 + x15) / 15;
    cout << "Mean for the 15 values is " << mean << endl;
    a = (x1 * x1) + (x2 * x2) + (x3 * x3) + (x4 * x4) + (x5 * x5) + (x6 * x6) + (x7 * x7) + (x8 * x8) + (x9 * x9) + (x10 * x10) + (x11 * x11) + (x12 * x12) + (x13 * x13) + (x14 * x14) + (x15 * x15);
    sd = sqrt((a / 15) - (mean * mean));
    cout << "The standard deviation is " << sd << endl;
    system("Pause");
    return 0;
}