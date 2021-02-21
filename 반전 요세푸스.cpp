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

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, k, m;
	int temp, k_cnt=0, pop_cnt=0;
	bool go_reverse = 0;
	deque<int> dq;

	cin >> n >> k >> m;
	
	for (int i = 1; i <= n; i++) dq.push_back(i);

	while (!dq.empty())
	{
		k_cnt++;
		if (go_reverse == 0)
		{
			if (k_cnt == k)
			{
				k_cnt = 0;
				cout << dq.front() << "\n";
				pop_cnt++;
				dq.pop_front();

				if (pop_cnt == m)
				{
					pop_cnt = 0;
					go_reverse = true;
					continue;
				}
			}
			else
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			if (k_cnt == k)
			{
				k_cnt = 0;
				cout << dq.back() << "\n";
				pop_cnt++;
				dq.pop_back();
				
				if (pop_cnt == m)
				{
					pop_cnt = 0;
					go_reverse = 0;
					continue;
				}
			}
			else
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}