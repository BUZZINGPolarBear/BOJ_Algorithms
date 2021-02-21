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

	int n, old_temp, new_temp, target, target_cnt=0;
	vector<int> origin_v(100005);
	vector<char> print_v;
	stack<int> st;

	cin >> n;

	for (int i = 0; i < n; i++) cin >> origin_v[i];

	target = origin_v[target_cnt];
	for (int i = 1; i <= n; i++)
	{
		st.push(i);
		print_v.push_back('+');

		while (st.empty() == false && st.top() == target)
		{
			st.pop();
			print_v.push_back('-');
			target_cnt++;
			target = origin_v[target_cnt];
		}
	}

	if (st.empty() == false)
	{
		cout << "NO";
		return 0;
	}

	for (int i = 0; i < print_v.size(); i++)
	{
		cout << print_v[i] << "\n";
	}
	return 0;	
}