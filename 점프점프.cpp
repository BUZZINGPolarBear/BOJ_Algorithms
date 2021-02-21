#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
using namespace std;

int main()
{
	int n;
	int field[1500] = { 0, };
	int dp[1500] = { 0, };
	
	cin >> n;
	for (int i = 0; i < n; i++)	cin >> field[i];
	for (int i = 1; i <= n; i++) dp[i] = 100000;

	if (field[0] == 0 && n > 1)
	{
		cout << -1;
		return 0;
	}
	if (field[0] == 0 && n == 1)
	{
		cout << 0;
		return 0;
	}

	dp[0] = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (j + field[j] >= i)
			{
				dp[i] = min(dp[i], dp[j] + 1);
			}
		}
	}

	if (dp[n-1] == 100000) cout << -1;
	else cout << dp[n-1]-1;
	return 0;	
}