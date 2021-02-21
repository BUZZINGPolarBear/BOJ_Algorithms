#include <iostream>
#include <string.h>
#define mod 1000000;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	string str;
	int dp[5001] = { 0, }, length;
	dp[0] = 1;

	cin >> str;
	length = str.length();
	str = '0' + str;
	for (int i = 1; i <= length; i++)
	{
		int x = str[i] - '0';
		if (1 <= x && x <= 9)
		{
			dp[i] = (dp[i] + dp[i - 1]) % mod;
		}
		if (i == 1) continue;
		if (str[i - 1] == '0') continue;
		x = (str[i - 1] - '0') * 10 + (str[i] - '0');
		if (10 <= x && x <= 26)
		{
			dp[i] = (dp[i] + dp[i - 2]) % mod;
		}
	}
	cout << dp[length];
	return 0;
}