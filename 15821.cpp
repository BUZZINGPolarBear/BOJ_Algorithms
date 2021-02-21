#include <cstdio>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector <long long> v;

int main()
{
	long long old_gap, gap, n, k;
	long long x, y, old_x, old_y, pi;
	cin >> n >> k;
	while (n--)
	{
		old_gap = -10;
		cin >> pi;
		for(int i=0; i<pi; i++)
		{
			cin >> x >> y;
			gap = (x * x) + (y * y);
			if (old_gap < gap) old_gap = gap;
		}
		v.push_back(old_gap);
	}
	sort(v.begin(), v.end());
	cout << v[k-1] <<".00";
	return 0;
}