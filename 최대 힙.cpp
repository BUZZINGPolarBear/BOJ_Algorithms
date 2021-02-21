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

priority_queue<long long, vector<long long>, less<long long> > pq;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	long long temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp != 0) pq.push(temp);
		else
		{
			if (pq.empty()) cout << 0 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}

	return 0;
}