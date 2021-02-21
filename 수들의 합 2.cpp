#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

long long a[10005] = { 0, };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, m, ans = 0, sum=0;
	long long left = 0, right = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++)	cin >> a[i];

	while (right < n)
	{
		sum = 0;
		for (int i = left; i <= right; i++) sum += a[i];
		if (sum < m) right++;
		else if (m < sum) left++;
		else if (m == sum)
		{
			right++;
			ans++;
		}
	}
	cout << ans;
	return 0;
}