#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

int field[101][101] = { 0, };
int visited[101][101] = { 0, };
int* alti;
int n, cnt;
queue<pair <int, int> > q;

void bfs(int alt, int cnt);

int main()
{
	int ans = -1;
	cin >> n;
	vector<int> alti;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			alti.push_back(temp);
			field[i][j] = temp;
		}
	}

	sort(alti.begin(), alti.end());

	if (alti.front() == alti.back())
	{
		cout << 1;
		return 0;
	}

	for (int danger = alti.front(); danger <= alti.back(); danger++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				visited[i][j] = 0;
			}
		}
		cnt = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (field[i][j] > danger && visited[i][j] == 0)
				{
					q.push(make_pair(i, j));
					visited[i][j] = 1;
					bfs(danger, cnt++);
				}
			}
		}
		ans < cnt ? ans = cnt : ans;
	}
	cout << ans - 1;
	return 0;
}

void bfs(int danger, int cnt)
{
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < n)
			{
				if (field[nx][ny] > danger && visited[nx][ny] == 0)
				{
					visited[nx][ny] = cnt;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}
