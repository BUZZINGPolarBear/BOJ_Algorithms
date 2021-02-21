#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, s;
	cin >> n >> s;
	int* main_field = new int[n];
	int bit_mask = 0, result=0;

	for(int i=0; i<n; i++) cin >> main_field[i];

	for (int i = 1; i < (1<< n); i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j)) sum += main_field[j];
		}
		if (sum == s) result++;
	}
	cout << result;
	delete main_field;
	return 0;
}