#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i<=100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			for (int k = 1; k <= 100; k++)
			{
				if (i + j + k == n && k >= j + 2 && i%2==0)
				{
					cnt++;
				}
			}
		}
	}
	cout << cnt;
	return 0;
}