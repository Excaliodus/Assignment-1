#include <iostream>
using namespace std;

int main()
{
	float Mileage, MilesDriven, GasConsumed;
	cout << "Enter the number of miles driven." << endl;
	cin >> MilesDriven;
	cout << "Enter the amount of gas consumed in gallons. " << endl;
	cin >> GasConsumed;
	Mileage = MilesDriven / GasConsumed;
	cout << "The current gas mileage of the car is " << Mileage << endl;
	system("pause");
	return 0;
}