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

int main() {
	string a;
	cin >> a;
	auto pi = getPi(a);
	int x = pi[a.length() - 1];
	int f = 0;
	while (x) {
		for (int i = 1; i < a.length() - 1; i++)
			if (pi[i] == x) {
				for (int j = 0; j < x; j++)
					printf("%c", a[j]);
				f = 1;
				break;
			}
		if (f)break;
		x = pi[x - 1];
	}
	if (!f)puts("-1");
	return 0;
}