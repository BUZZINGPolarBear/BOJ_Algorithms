#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long n, a, b, c;
	long ans=0;

	cin >> n;
	vector<long> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	cin >> b >> c;

	ans += n;
	for (int i = 0; i < n; i++)
	{
		v[i] -= b;
		if (v[i] > 0)
		{
			ans += v[i] / c;
			v[i] = v[i] % c;
			if (v[i] > 0) ans++;

		}
	}

	cout << ans;
	return 0;



}