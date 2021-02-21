#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int n, m, v;

vector<int> a[1001];
bool visited[1001] = { 0, };
stack<int> s;

void dfs(int v);
void bfs(int v);

int main()
{
	ios_base::sync_with_stdio(0);
	int ltemp, rtemp;

	cin >> n >> m >> v;

	while (m--)
	{
		cin >> ltemp >> rtemp;
		a[ltemp].push_back(rtemp);
		a[rtemp].push_back(ltemp);
	}

	for (int i = 1; i <= n; i++)
	{
		sort(a[i].begin(), a[i].end());
	}

	dfs(v);
	cout << '\n';

	memset(visited, false, sizeof(visited));
	bfs(v);
	return 0;
}

void dfs(int v)
{
	cout << v << " ";
	visited[v] = true;
	for (int i = 0; i < a[v].size(); i++)
	{
		int next = a[v][i];
		if (visited[next] == false)
		{
			dfs(next);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	visited[start] = true;

	q.push(start);

	while (!q.empty()) {
		int node = q.front();

		q.pop();
		printf("%d ", node);

		for (int i = 0; i < a[node].size(); i++) 
		{
			int next = a[node][i];
			if (visited[next] == false) 
			{
				visited[next] = true;
				q.push(next);
			}
		}
	}
}