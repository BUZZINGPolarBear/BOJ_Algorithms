#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str_toked(string str, int start, int end);

int main()
{
	string str, temp, king, tok1, tok2, tok3;
	int str_len;
	cin >> str;
	king = "zzzzzzz";
	str_len = str.length();
	for (int i = 1; i < str_len - 1; i++)
	{
		for (int j = i; j < str_len; j++)
		{
			if (i >= j) continue;
			temp = str_toked(str, i, j);
			if (king > temp) king = temp;
		}
	}
	cout << king;
	return 0;
}

string str_toked(string str, int start, int end)
{
	string temp="";
	string tok1="", tok2="", tok3="";
	tok1 = str.substr(0, start);
	for (int i = start; i < end; i++) tok2 += str[i];
	tok3 = str.substr(end);
	reverse(tok1.begin(), tok1.end());
	reverse(tok2.begin(), tok2.end());
	reverse(tok3.begin(), tok3.end());
	temp = tok1 + tok2 + tok3;
	return temp;
}