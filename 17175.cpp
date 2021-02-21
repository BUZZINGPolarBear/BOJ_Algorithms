#include <iostream>
using namespace std;

int main()
{
	long long ans, field[51] = { 1,1,3,5, };
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++)
	{
		field[i] = (1+field[i - 1] + field[i - 2])%1000000007;
	}
	cout << field[n]%1000000007;
	return 0;
}