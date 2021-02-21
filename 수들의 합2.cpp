#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	long long n, ans=0;
	cin >> n;

	long long left = 1, right = n, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid * (mid + 1) / 2 <= n)
		{
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << ans;
	return 0;
}