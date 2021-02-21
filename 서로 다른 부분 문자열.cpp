#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

int main()
{
	string str;
	int str_len, cnt=0;
	map<string, int> mp;
	
	cin >> str;

	str_len = str.length();
	for (int i = 0; i < str_len; i++)
	{
		string hash_str = "";
		for (int j = 0; j < str_len - i; j++)
		{
			hash_str += str[i+j];
			mp.insert(pair<string, int> (hash_str, cnt++));
		}
	}

	cout << mp.size();
	return 0;	
}