#include <iostream>
using namespace std;

int main()
{
	int TotalPrice, NumberOfNights, PerNightRate, RoomService = 0, Telephone = 0;
	cout << "Enter the per-night rate of room. " << endl;
	cin >> PerNightRate;
	cout << "Enter the number of nights the guest stayed." << endl;
	cin >> NumberOfNights;
	cout << "Enter room service charges. " << endl;
	cin >> RoomService;
	cout << "Enter telephone charges. " << endl;
	cin >> Telephone;
	TotalPrice = (PerNightRate * NumberOfNights) + RoomService + Telephone;
	cout << "Total bill is " << TotalPrice << endl;
	system("pause");
	return 0;
}