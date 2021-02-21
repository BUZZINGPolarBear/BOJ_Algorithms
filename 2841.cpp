#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

vector<int> getPi(string p)
{
	int pSize = p.size();
	vector<int> piTable(pSize, 0);
	int j = 0;
	for (int i = 1; i < pSize; i++)
	{
		while (j > 0 && p[i] != p[j])
		{
			j = piTable[j - 1];
		}
		if (p[i] == p[j])
		{
			piTable[i] = ++j;
		}
	}
	return piTable;
}

int main()
{
	string t, p, s;
	stack<int> stackk;
	long long k, temp = 0, before_temp = 0, old_temp, ans = 0;
	cin >> s;
	cin >> k;
	auto pi = getPi(s);
	stackk.push(pi[0]);
	temp = pi[s.size()-1];
	cout << s.size()+(s.size()-temp)*(k-1);
	return 0;
}