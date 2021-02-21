#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, m, j;
	int left, right;
	int mov_cnt = 0;

	cin >> n >> m >> j;

	if (m == 1) left = right = 1;
	else left = 1, right = m;

	while (j--)
	{
		int drop_loca;
		cin >> drop_loca;
		if (right < drop_loca)
		{
			while (1)
			{
				right++;
				left++;
				mov_cnt++;
				if (right == drop_loca)
				{
					break;
				}
			}
		}
		else if (drop_loca < left)
		{
			while (1)
			{
				right--;
				left--;
				mov_cnt++;
				if (left == drop_loca)
				{
					break;
				}
			}
		}
	}
	cout << mov_cnt;
	return 0;
}
