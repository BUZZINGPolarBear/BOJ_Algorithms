#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,nums, temp, field[21][21] = { 0, }, min_diff=100000;
	cin >> n;
	int* sum_field = new int[n * n - n];
	for(int i=0; i<n;i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> field[i][j];
		}
	}
	vector<bool> v;
	for (int i = 0; i < n/2; i++) v.push_back(0);
	for (int i = 0; i < n/2; i++) v.push_back(1);
	do
	{
		int start = 0, link = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; j++)
			{
				if (v[i] && v[j])
				{
					start += field[i][j] + field[j][i];
				}
				if (!v[i] && !v[j])
				{
					link += field[i][j] + field[j][i];
				}
			}
		}
		min_diff = min(min_diff, abs(start - link));
	} while (next_permutation(v.begin(), v.end()));
	cout << min_diff/2;
	return 0;
}