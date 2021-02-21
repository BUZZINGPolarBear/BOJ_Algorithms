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
	int k;
	stack<int> st;
	long long ans=0;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 0) st.pop();
		else st.push(temp);
	}

	while (st.empty() == false)
	{
		ans += st.top();
		st.pop();
	}
	cout << ans;
	return 0;
}