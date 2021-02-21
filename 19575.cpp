#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<pair <long, long> > v;
	long long n, x, var, exp;
	long long ans = 0;
	cin >> n >> x;
	for (long long i = 0; i < n + 1; i++)
	{
		cin >> var >> exp;
		v.push_back(make_pair(var, exp));
	}
	v.push_back(make_pair(0, 0));
	ans += x * v[0].first;
	ans += v[1].first;
	for (long long i = 1; v[i].second != 0; i++)
	{
		ans = (x * ans)% (long long)(pow(10, 9) + 7);
		ans += (v[i + 1].first)% (long long)(pow(10, 9) + 7);
	}
	cout << ans % (long long)(pow(10,9)+7);
	return 0;
}