#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;

int main()
{
	long long x, y;
	cin >> x >> y;

	long long z = y * 100 / x;

	if (z >= 99)
	{
		cout << -1;
		return 0;
	}

	long long left = 0, right = 1000000000;
	long long mid, ans=-1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		long long check = (y + mid) * 100 / (x + mid);

		if (check <= z)
		{
			left = mid + 1;
			ans = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	cout << ans;
	return 0;
}