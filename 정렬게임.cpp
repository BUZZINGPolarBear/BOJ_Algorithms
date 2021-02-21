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

//https://mygumi.tistory.com/354 보고 베낌. 상세한 풀이 감사합니다.

vector<int> v(1000005);
deque<pair<int, int > > dq;
vector<int> result(1000005);

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k, a, b;

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> v[i];
	cin >> k;

	while (k--)
	{
		cin >> a >> b;

		while (!dq.empty() && dq.back().first < a)
		{
			dq.pop_back();
		}
		if(a !=1) dq.push_back({ a, 1 });

		while (!dq.empty() && dq.back().first < b)
		{
			dq.pop_back();
		}
		if(b != 1) dq.push_back({ b, -1 });
	}
	dq.push_back({ 0,1 });

	int temp = dq.front().first;
	sort(v.begin() + 1, v.begin() + temp+1);

	int start = 0, end = temp, order = dq.front().second;
	dq.pop_front();

	int start_from_one = 1, start_from_end = temp;

	while (!dq.empty())
	{
		start = dq.front().first;
		if (order == 1)
		{
			for (int i = end; start < i; i--)
			{
				result[i] = v[start_from_end--];
			}
		}
		else
		{
			for (int i = end; start < i; i--)
			{
				result[i] = v[start_from_one++];
			}
		}
		end = dq.front().first;
		order = dq.front().second;
		dq.pop_front();
	}

	for (int i = 1; i <= temp; i++) cout << result[i] << " ";
	for (int i = temp+1; i <= n; i++) cout << v[i] << " ";


	return 0;
}