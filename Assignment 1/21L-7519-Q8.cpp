#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, solution;
    cout << "Enter the value for variable x " << endl;
    cin >> x;
    if (x < 0)
    {
        cout << "Enter a positive number." << endl;
    }
    else
    {
        solution = (x)-(pow(x, 3) / (3 * 2 * 1)) - (pow(x, 5) / (5 * 4 * 3 * 2 * 1)) - (pow(x, 7) / (7 * 6 * 5 * 4 * 3 * 2 * 1)) - (pow(x, 9) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1));
        cout << "sin(x) = " << solution << endl;
    }
    system("Pause");
    return 0;
}