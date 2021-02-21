#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

long long a[1000005] = { 0, }, b[1000005] = { 0, };
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	long long left = 0, right = 0;

	cin >> n >> m;

	for (long long i = 0; i < n; i++) cin >> a[i];
	for (long long i = 0; i < m; i++) cin >> b[i];

	while (1)
	{
		if (a[left] < b[right]) cout << a[left++] << " ";
		else if (b[right] < a[left]) cout << b[right++] << " ";
		else
		{
			cout << a[left++] <<" " << b[right++]<<" ";
		}
		if (left == n || right == m) break;
	}
	
	if (left < n) for (int i = left; i < n; i++) cout << a[left++] << " ";
	else if (right < m) for (int i = right; i < m; i++) cout << b[right++] << " ";
	
	return 0;
}
