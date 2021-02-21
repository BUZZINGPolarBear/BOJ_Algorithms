#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b)
{
	return b < a;
}
int main()
{
	int n, l, k;
	int sub1, sub2;
	long long ans=0;
	vector<long> v;

	cin >> n >> l >> k;
	while (n--)
	{
		cin >> sub1 >> sub2;
		if (sub1 <= l)
		{
			if (sub2 <= l) v.push_back(140);
			else v.push_back(100);
		}
		else v.push_back(0);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < k; i++)
	{
		ans += v[i];
	}
	cout << ans;
	return 0;
}