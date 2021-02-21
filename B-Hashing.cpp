#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	long long ans = 0, R = 1;
	string str;
	int l;//a==97
	cin >> l >> str;
	
	for (int i = 0; i < l; i++)
	{
		ans = (ans+(str[i] - 'a' + 1) * R) % 1234567891;
		R = (R * 31) % 1234567891;
	}
	cout << ans;
	return 0;
}