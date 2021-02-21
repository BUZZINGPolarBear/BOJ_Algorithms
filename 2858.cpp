#include <iostream>
using namespace std;

int main()
{
	int r, b;
	int l, w, i=0;
	cin >> r >> b;

	while (++i)
	{
		if (b % i == 0)
		{
			int temp = ((b / i)+i+2)*2;
			if (r == temp)
			{
				int x = b / i + 2;
				int y = i + 2;
				if (x < y) cout << y << " " << x;
				else cout << x << " " << y;
				return 0;
			}
		}
	}
}