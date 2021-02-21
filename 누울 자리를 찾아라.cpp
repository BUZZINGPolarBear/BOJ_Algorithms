#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	char room[105][105] = {0,};
	int hori_sleep = 0, verti_sleep = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> room[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (room[i][j] == '.' && room[i][j+1] == '.')
			{
				verti_sleep++;
				while (j < n-1)
				{
					j++;
					if (room[i][j] == 'X') break;
				}
			}
		}
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (room[i][j] == '.' && room[i+1][j] == '.')
			{
				hori_sleep++;
				while (i < n-1)
				{
					i++;
					if (room[i][j] == 'X') break;
				}
			}
		}
	}

	cout << verti_sleep << " " << hori_sleep;
	return 0;
}