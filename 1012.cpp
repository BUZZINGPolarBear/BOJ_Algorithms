#include <iostream>
#include <queue>
using namespace std;

int field[51][51];
int visited[51][51];
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };
int n, m, k;
queue<pair <int, int> > q;

void input(int n, int m, int k);
void bfs(int cnt);

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int cnt = 0;
		cin >> n >> m >> k;
		input(n, m, k);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (field[i][j] == 1 && visited[i][j] == 0)
				{
					q.push(make_pair(i, j));
					bfs(cnt++);
				}
			}
		}
		cout << cnt << '\n';
	}
}

void input(int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			field[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	while (k--)
	{
		int x, y;
		cin >> x >> y;
		field[x][y] = 1;
	}
}

void bfs(int cnt)
{
	field[q.front().first][q.front().second] = cnt;
	visited[q.front().first][q.front().second] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx <= n && 0 <= ny && ny <= m)
			{
				if (visited[nx][ny] == 0 && field[nx][ny] != 0)
				{
					q.push(make_pair(nx, ny));
					visited[nx][ny] = 1;
					field[nx][ny] = cnt;
				}
			}
		}
	}

}