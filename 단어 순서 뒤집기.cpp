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
	string str;

	int n;
	cin >> n;
	getline(cin, str);
	
	for(int i=1; i<=n; i++)
	{
		stack<string> st;

		getline(cin, str);
		str += ' ';
		
		while (str.length())
		{
			string temp = str.substr(0, str.find(' '));
			st.push(temp);
			str = str.substr(str.find(' ')+1);
		}

		cout << "Case #" << i << ": ";

		while (st.empty() != true)
		{
			cout << st.top() << " ";
			st.pop();
		}

		cout << "\n";
	}
	return 0;
}