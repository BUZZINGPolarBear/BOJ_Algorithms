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

priority_queue<long long, vector<long long>, greater<long long> > pq;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n, m;
	long long temp, a, b, sum, ans = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		pq.push(temp);
	}

	while (m--)
	{
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();

		sum = a + b;

		pq.push(sum);
		pq.push(sum);
	}

	while (!pq.empty())
	{
		ans += pq.top();
		pq.pop();
	}
	
	cout << ans;
	return 0;
}