#include <iostream>
using namespace std;

int main()
{
	double land_field[3] = { 0,0,0 };
	double abc_field[3] = { 0,0,0 };
	cin >> land_field[0] >> land_field[1] >> land_field[2];
	cout << fixed;
	cout.precision(1);
	if ((land_field[0] + land_field[1] - land_field[2]) / 2 > 0) abc_field[0] = (land_field[0] + land_field[1] - land_field[2]) / 2;
	else { cout << -1; return 0;}
	if ((land_field[0] - land_field[1] + land_field[2]) / 2 > 0) abc_field[1] = (land_field[0] - land_field[1] + land_field[2]) / 2;
	else { cout << -1; return 0; }
	if ((land_field[1] + land_field[2] - land_field[0]) / 2 > 0) abc_field[2] = (land_field[1] + land_field[2] - land_field[0]) / 2;
	else { cout << -1; return 0; }
	cout << 1 << "\n" << abc_field[0] << " " << abc_field[1] << " " << abc_field[2];
	return 0;
}