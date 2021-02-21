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

/*
	thanks to ----> https://kau-algorithm.tistory.com/136
*/
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	priority_queue<pair<double, int> > pq;
	int n, m, l;

	cin >> n >> m >> l;
	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());

	for (int i = 1; i < n; i++) pq.push({ v[i] - v[i - 1], 1 });

	pq.push({ v[0], 1 });
	pq.push({ l - v[n - 1], 1 });

	while (m--)
	{
		double dist = pq.top().first;
		int cnt = pq.top().second;
		pq.pop();
		pq.push({ (dist * cnt) / (cnt + 1), cnt + 1 });
	}

	double ans = pq.top().first;
	int temp = (int)ans;

	if (temp == ans) cout << ans;
	else cout << temp + 1;

	return 0;
}