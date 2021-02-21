#include <iostream>
using namespace std;

int main()
{
	int sixty4 = 64;
	int x,ans = 0;
	cin >> x;
	if (x == 64)
	{
		cout << 1;
		return 0;
	}
	while (x)
	{
		if ((sixty4 >> 1) <= x)
		{
			ans++;
			sixty4 = sixty4 >> 1;
			x -= sixty4;
		}
		else sixty4 = sixty4 >> 1;
	}
	cout << ans;
	return 0;	
}