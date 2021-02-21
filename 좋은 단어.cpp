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
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	int ans = 0;
	string inpt;
	cin >> n;

	while (n--)
	{
		cin >> inpt;
		stack<char> st;
		int inpt_len = inpt.size();
		int no_flag = 0;

		for (int i = 0; i < inpt_len; i++)
		{
			if (inpt[i] == 'A')
			{
				if (!st.empty() && st.top() == 'A') st.pop();
				else st.push('A');
			}
			else
			{
				if (!st.empty() && st.top() == 'B') st.pop();
				else st.push('B');
			}
		}
		if (st.empty()) ans++;
	}

	cout << ans;
	return 0;
}
