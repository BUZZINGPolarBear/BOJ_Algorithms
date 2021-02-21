#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int cnt = 0, a, b;
		for (int a = 1; a <= n - 2; ++a) 
		{
			for (int b = a + 1; b <= n - 1; ++b) 
			{
				if ((a * a + b * b + m) % (a * b) == 0)
				{
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}