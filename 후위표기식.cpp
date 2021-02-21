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

vector<pair<char, int> > priority_pair;
stack<char> operator_st;
string str;

int find_priority(char c, string str);
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int str_len, top_st_priority=0, now_priority=0;

	cin >> str;
	str_len = str.size();

	priority_pair.push_back({ '*', 1 });
	priority_pair.push_back({ '/', 1 });
	priority_pair.push_back({ '+', 2 });
	priority_pair.push_back({ '-', 2 });

	for (int i = 0; i < str_len; i++)
	{
		char ch = str[i];

		if ('A' <= ch && ch <= 'Z') cout << ch;
		else
		{
			switch (ch)
			{
			case '(':
				operator_st.push('(');
				continue;
			case ')':
				while (!operator_st.empty() && operator_st.top() != '(')
				{
					cout << operator_st.top();
					operator_st.pop();
				}
				operator_st.pop();
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				if (!operator_st.empty())
				{
					top_st_priority = find_priority(operator_st.top(), "top_stack");
					now_priority = find_priority(ch, "incoming");

					if (now_priority < top_st_priority)	operator_st.push(ch);
					else
					{
						while (!operator_st.empty() && !(now_priority < top_st_priority))
						{
							cout << operator_st.top();
							operator_st.pop();
							if (!operator_st.empty()) top_st_priority = find_priority(operator_st.top(), "top_stack");
							else break;
						}
						operator_st.push(ch);
					}
				}
				else operator_st.push(ch);
			}
		}
	}
	while (!operator_st.empty())
	{
		cout << operator_st.top();
		operator_st.pop();
	}

	return 0;	
}

int find_priority(char c, string str)
{
	if (str == "top_stack" && c == '(') return 10;
	else if (str == "incoming" && c == '(') return 0;	

	for (int i = 0; i < priority_pair.size(); i++)
	{
		if (priority_pair[i].first == c) return priority_pair[i].second;
	}
}