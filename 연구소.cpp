#include <iostream>
#include <queue>
using namespace std;

int n, m, ans = 0;
int field[8][8];
int clone_field[8][8];
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };

//바이러스를 퍼트림.
void bfs();
//a field에 b field를 복사함.
void clone_it(int(*a)[8], int(*b)[8]);
//세개의 벽을 세움.
void make_wall(int cnt);

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> field[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (field[i][j] == 0)
			{
				clone_it(clone_field, field);
				clone_field[i][j] = 1;
				make_wall(1);
				clone_field[i][j] = 0;
			}
		}
	}
	cout << ans;
	return 0;
}

void clone_it(int(*a)[8], int(*b)[8])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = b[i][j];
		}
	}
}

void make_wall(int cnt)
{
	if (cnt == 3)
	{
		bfs();
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (clone_field[i][j] == 0)
			{
				clone_field[i][j] = 1;
				make_wall(cnt + 1);
				clone_field[i][j] = 0;
			}
		}
	}
}

void bfs()
{
	int conta_field[8][8];
	clone_it(conta_field, clone_field);
	queue <pair <int, int> > q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (conta_field[i][j] == 2) q.push(make_pair(i, j));
		}
	}
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m)
			{
				if (conta_field[nx][ny] == 0)
				{
					conta_field[nx][ny] = 2;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (conta_field[i][j] == 0)
				cnt += 1;
		}
	}
	ans = max(ans, cnt);
}