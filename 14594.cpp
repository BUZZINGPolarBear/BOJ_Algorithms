#include <iostream>
using namespace std;

int main()
{
	int field[110] = { 0, };
	int n, m, x, y;
	int cnt = 0, flag = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> x >> y;
		for (int i=x; i <= y; i++)
		{
			field[i] = 1;
		}
	}
	for (int i = 1; i <= n+1; i++)
	{
		if (field[i] == 0)
		{
			cnt++;
			if (flag == 1)
			{
				flag = 0;
				cnt++;
			}
		}
		else
		{
			flag = 1;
		}
	}
	cout << cnt-1;
	return 0;
}