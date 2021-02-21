#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

long long arr[100005] = { 0, };
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long long n, m;
	long long left = 0, right = 1, ans = 0, sum = 0;
	cin >> n;
	for (long long i = 0; i < n; i++) cin >> arr[i];
	cin >> m;
	sort(arr, arr + n);

	right = n - 1;
	while (left < right)
	{
		sum = arr[left] + arr[right];

		if (sum < m) left++;
		else if (m < sum) right--;
		else ans++, left++, right--;
	}

	cout << ans;
	return 0;
}
