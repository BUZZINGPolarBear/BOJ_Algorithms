#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;

const int dx[] = { 0, 0, -1, 1 };
const int dy[] = { -1, 1, 0, 0 };

char field[505][505] = { 0, };
int r, c;

bool check_4(int r, int c);

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> field[i][j];
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (field[i][j] == 'S' && check_4(i, j) == 0)
			{
				cout << 0;
				return 0;
			}
		}
	}

	cout << 1 << "\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (field[i][j] == '.') cout << 'D';
			else cout << field[i][j];
		}
		cout << "\n";
	}
	return 0;
}

bool check_4(int i, int j)
{
	for (int k = 0; k < 4; k++)
	{
		int nx = i + dx[k];
		int ny = j + dy[k];

		if (0 <= nx && nx < r && 0 <= ny && ny < c)
		{
			if (field[nx][ny] == 'W')
			{
				return 0;
			}
		}
	}
	return 1;
}