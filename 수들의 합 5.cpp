#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

//long long a[10000000] = { 0, };
//long long a[10005] = { 0, };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, ans = 0, sum = 0;
	long long left = 1, right = 1;

	cin >> n;

	while (1)
	{
		if (sum < n) sum += right++;
		else if (sum == n) ans++, sum += right++;
		else if (n < sum) sum -= left++;

		if (right > n) break;
	}
	cout << ans+1;
	return 0;
}