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

stack<pair<int, int> > s;
vector<int> v(1000005);

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (s.empty())
		{
			s.push({ temp, i });
			continue;
		}
		while (!s.empty() && s.top().first < temp)
		{
			v[s.top().second]=temp;
			s.pop();
		}

		s.push({ temp, i });		
	}

	while (!s.empty())
	{
		v[s.top().second] = -1;
		s.pop();
	}

	for (int i = 0; i < n-1; i++)
	{
		cout << v[i] << " ";
	}
	cout<<-1;
	return 0;
}