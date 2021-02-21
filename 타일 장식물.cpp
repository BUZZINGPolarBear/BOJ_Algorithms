#include<iostream>
using namespace std;

long long dp[90] = { 1, 1, 2, 3, 5, 8 };
long long ans_dp[90] = { 4, 6, 10, 0 };
int main()
{
	int n;
	cin >> n;
	for (int i = 6; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	for (int i = 3; i <= n; i++)
	{
		ans_dp[i] = ans_dp[i - 1] + dp[i]*2;
	}

	cout << ans_dp[n-1];
	return 0;
}