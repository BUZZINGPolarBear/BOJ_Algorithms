#include <iostream>
#include <queue>
using namespace std;

int n, k;
int bfs(int n);
int main()
{
	ios_base::sync_with_stdio(0);
	cin >> n >> k;
	cout << bfs(n);
}

int bfs(int n)
{
	queue<pair<int, int> > q;
	bool visited[100000 + 1] = { false, };
	q.push({ n, 0 });
	while (!q.empty())
	{
		int now = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (now == k)
		{
			return cnt;
		}
		if (now - 1 >= 0 && visited[now - 1] == 0)
		{
			q.push({ now - 1, cnt + 1 });
			visited[now - 1] = true;
		}
		if (now + 1 <= k+1 && visited[now + 1] == 0)
		{
			q.push({ now + 1, cnt + 1 });
			visited[now + 1] = true;
		}
		if (now * 2 <= k+1 && visited[now * 2] == 0)
		{
			q.push({ now *2, cnt + 1 });
			visited[now*2] = true;
		}
	}
}