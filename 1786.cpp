#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
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

vector<int> kmp(string t, string p)
{
	vector<int> ans;
	auto pi = getPi(p);
	int	tSize = (int)t.size(), pSize = (int)p.size(), j = 0;
	for (int i = 0; i < tSize; i++)
	{
		while (j > 0 && t[i] != p[j])
			j = pi[j - 1];
		if (t[i] == p[j])
		{
			if (j == pSize - 1)
			{
				ans.push_back(i - pSize + 1);
				j = pi[j];
			}
			else
			{
				j++;
			}
		}
	}
	return ans;
}

int main()
{
	string t, p;
	getline(cin, t);
	getline(cin, p);
	auto matched = kmp(t, p);
	cout << matched.size() << "\n";
	for (auto i : matched)
	{
		cout << i + 1<<" ";
	}
	return 0;
}