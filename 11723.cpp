#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, bit_mask=0;
	cin >> m;
	string str;
	int cmd;
	while(m--)
	{
		cin >> str;
		if (str == "all")
		{
			bit_mask = (1 << 21) - 1;
			continue;
		}
		else if (str == "empty")
		{
			bit_mask = 0;
			continue;
		}
		else
		{
			cin >> cmd;
			if (str == "add") bit_mask |= (1 << cmd);
			else if (str == "remove") bit_mask &= ~(1 << cmd);
			else if (str == "check")
			{
				if (bit_mask & (1 << cmd)) cout << 1 << "\n";
				else cout << 0 << "\n";
			}
			else if (str == "toggle") bit_mask ^= (1 << cmd);
		}
	}
	return 0;
}