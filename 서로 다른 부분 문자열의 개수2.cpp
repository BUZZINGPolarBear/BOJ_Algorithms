#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;

int main()
{
	string str;
	int str_len, cnt = 0;
	unordered_set<string> set;

	cin >> str;

	str_len = str.length();
	for (int i = 0; i < str_len; i++)
	{
		for (int j = 0; j < str_len; j++)
		{
			string hash_str = str.substr(i, j + 1);
			set.insert(hash_str);
		}
	}
	cout << set.size();
	return 0;
}