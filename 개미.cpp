#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

long long ant_field[100000] = { 0, };
long long temp_field[100000] = { 0, };
int main()
{
	int most_fast = 0, most_slow = 0;
	int ant_min, ant_max;
	long long center;
	int t, l, n;
	cin >> t;
	while (t--)
	{
		cin >> l >> n;
		for (int i = 0; i < n; i++) cin >> ant_field[i];

		ant_min = -10000, ant_max = 10000;

		for (int i = 0; i < n; i++)
		{
			ant_min = min(ant_field[i], l - ant_field[i]);

			ant_max = max(ant_field[i], l - ant_field[i]);

			if (most_fast < ant_min) most_fast = ant_min;
			else if (most_slow < ant_max) most_slow = ant_max;
		}
	
		cout << most_fast << " " << most_slow<<"\n";
	}
	return 0;
}