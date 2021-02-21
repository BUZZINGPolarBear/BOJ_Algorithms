#include <iostream>
using namespace std;

int n, m;
int field[9], visited[9] = { 0, };

void back_tracked(int cnt);

int main()
{
	cin >> n >> m;
	back_tracked(0);
	return 0;
}

void back_tracked(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++) cout << field[i] << " ";
		cout << "\n";
		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				visited[i] = 1;
				field[cnt] = i;
				back_tracked(cnt + 1);
				visited[i] = 0;
			}
		}
	}
}