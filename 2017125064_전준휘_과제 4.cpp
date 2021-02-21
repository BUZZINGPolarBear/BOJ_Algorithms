#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m, a, b;
vector <int> field[1001];
vector<int> new_field[1001];//같은 연결요소 내부에 있는 것만 모아놓습니다.
int check_field_1[1001], check_field_2[1001];
int is_connected[1001] = { 0, };

int ltemp, rtemp;

void dfs_connected_component(int i, int count);
void bfs(int start, int[]);

int main()
{
	ios_base::sync_with_stdio(0);
	int count = 1;
	cin >> n >> m >> a >> b;

	while (m--)
	{
		cin >> ltemp >> rtemp;
		field[ltemp].push_back(rtemp);
		field[rtemp].push_back(ltemp);
	}
	for (int i = 1; i <= n; i++) sort(field[i].begin(), field[i].end());

	for (int i = 1; i <= n; i++)
	{
		if (is_connected[i] == 0)
		{
			dfs_connected_component(i, count);
			count++;
		}
	}
	if (is_connected[a] != is_connected[b])
	{
		cout << 0;
		return 0;
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (is_connected[i] == is_connected[a])
		{
			new_field[i] = field[i];
		}
	}
	

	bfs(a, check_field_1);
	//for (int i = 1; i < n; i++) cout << check_field_1[i] << " | ";
	//cout << endl;

	bfs(b, check_field_2);
	//for (int i = 1; i < n; i++) cout << check_field_2[i] << " | ";
	//cout << endl;

	int min = 10000, result=0;

	for (int i = 1; i < n; i++)
	{
		if (check_field_1[i] != is_connected[a] || check_field_2[i] != is_connected[a]) continue;
		int temp = abs(check_field_1[i] - check_field_2[i]);
		if (abs(temp) < min)
		{
			min = temp;
			result = i;
		}
	}
	cout << result;	
	return 0;
}

void dfs_connected_component(int i, int count)
{
	is_connected[i] = count;
	for (int j = 0; j < field[i].size(); j++)
	{
		int next = field[i][j];
		if (is_connected[next] == 0)
		{
			dfs_connected_component(next, count);
		}
	}
}

void bfs(int start, int check[]) {
    queue<int> q;
	int cnt = 0;
	fill_n(check, 1001, -1);
    check[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i = 0; i < new_field[node].size(); i++) {
            int next = new_field[node][i];
            if (check[next] == -1) {
                check[next] = check[node] + 1;
				cnt++;
                q.push(next);
            }
        }
    }
}

