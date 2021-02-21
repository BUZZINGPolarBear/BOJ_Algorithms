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
	string inpt;

	while (1)
	{
		getline(cin, inpt);
		if (inpt == ".") return 0;

		stack<char> st;
		int inpt_len = inpt.size();
		int no_flag = 0;

		for (int i = 0; i < inpt_len; i++)
		{
			if (inpt[i] == '(') st.push('(');
			else if (inpt[i] == '[') st.push('[');
			else if (inpt[i] == ')')
			{
				if(st.empty() || st.top() != '(')
				{
					no_flag = 1;
					break;
				}
				else if (st.top() == '(') st.pop();
			}
			else if (inpt[i] == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					no_flag = 1;
					break;
				}
				else if (st.top() == '[') st.pop();
			}
		} 
		if (no_flag == 0 && st.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
