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
	const string quest = "문제";
	const string rubber_duck = "고무오리";
	string temp;
	stack<int> st;

	getline(cin, temp);
	while (1)
	{
		getline(cin, temp);
		if (temp == quest) st.push(1);
		else if (temp == rubber_duck)
		{
			if (st.empty() == true)
			{
				st.push(1);
				st.push(1);
			}
			else
			{
				st.pop();
			}
		}
		if (temp == "고무오리 디버깅 끝") break;
	}

	if (st.size() == 0) cout << "고무오리야 사랑해";
	else cout << "힝구";
}