#include <iostream>
using namespace std;

int main()
{
	int TotalPopulation = 80000, Men = 52, Literacy = 48, LiterateMen = 35,IlliterateMen,IlliterateWomen;
	IlliterateMen = TotalPopulation - (TotalPopulation * LiterateMen / 100) - (TotalPopulation * (100 - Men) / 100);
	IlliterateWomen = (TotalPopulation * (100 - Literacy) / 100) - IlliterateMen;
	cout << "Number of Illiterate men is " << IlliterateMen << endl;
	cout << "Number of Illiterate women is " << IlliterateWomen << endl;
system("pause");
return 0;
}
