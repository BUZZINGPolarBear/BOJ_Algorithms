#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	long long k, n;
	long long lan[10010] = { 0, };
	long long low, mid, high, ans;

	cin >> k >> n;

	for (int i = 0; i < k; i++)	cin >> lan[i];

	sort(lan, lan + k);

	low = 1;
	high = lan[k - 1];
	ans = high;

	while (low <= high)
	{
		mid = (low + high) / 2;

		long long cnt = 0;
		for (int i = 0; i < k; i++)
		{
			cnt += lan[i] / mid;
		}

		if (cnt >= n)
		{
			low = mid + 1;
			ans = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << ans;
	return 0;
}