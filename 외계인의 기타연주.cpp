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

stack<int> st[7];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, p;
	cin >> n >> p;

	int string_num, flat_num;
	long ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> string_num >> flat_num;

		if (st[string_num].empty())
		{
			ans++;
			st[string_num].push(flat_num);
		}
		if (st[string_num].top() < flat_num)
		{
			ans++;
			st[string_num].push(flat_num);
		}
		else if (flat_num < st[string_num].top())
		{
			while (!st[string_num].empty() && flat_num < st[string_num].top())
			{
				ans++;
				st[string_num].pop();
			}
			if (st[string_num].empty()==false && st[string_num].top() == flat_num) continue;
			else
			{
				ans++;
				st[string_num].push(flat_num);
			}
		}		
	}
	cout << ans;
	return 0;
}