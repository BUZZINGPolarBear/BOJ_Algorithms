#include <iostream>
#include <vector>
using namespace std;

int n, result = 0;
int board[20][20] = { 0, };

void go(int cnt);

int main()
{
	cin >> n;
	go(0);
	cout << result;
	return 0;
}

void go(int cnt)
{
	if (cnt == n)
	{
		result++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (board[cnt][i] == 0)
		{
			for (int k = 1; k < n; k++)
			{
				if (cnt + k < n) board[cnt + k][i]++;
				if (cnt + k < n && i + k < n) board[cnt + k][i + k]++;
				if (cnt + k < n && i - k>=0) board[cnt + k][i - k]++;
			}
			go(cnt+1);
			for (int k = 1; k < n; k++)
			{
				if (cnt + k < 4) board[cnt + k][i]--;
				if (cnt + k < n && i + k < n) board[cnt + k][i + k]--;
				if (cnt + k < n && i - k>=0) board[cnt + k][i - k]--;
			}
		}
	}
	return;
}

