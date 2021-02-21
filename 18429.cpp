#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k, a;
	int cnt = 0, weight = 0;
	int n_field[10] = { 0, };

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		n_field[i] = a - k;
	}



}