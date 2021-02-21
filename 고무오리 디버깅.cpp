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
	const string quest = "����";
	const string rubber_duck = "������";
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
		if (temp == "������ ����� ��") break;
	}

	if (st.size() == 0) cout << "�������� �����";
	else cout << "����";
}