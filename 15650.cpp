#include <iostream>
using namespace std;

int n, m;
int field[9];

void back_tracked(int header, int cnt);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	back_tracked(0, 1);
	return 0;
}

void back_tracked(int header, int cnt)
{
	if (header == m)
	{
		for (int i = 0; i < m; i++)cout << field[i] << " ";
		cout << "\n";
		return;
	}
	else
	{
		for (int i = cnt; i <= n; i++)
		{
			field[header] = i;
			back_tracked(header + 1, i + 1);
		}
	}
}