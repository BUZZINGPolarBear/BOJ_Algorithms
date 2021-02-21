#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string> v;
	string s, temp;
	cin >> s;
	int v_length = s.size();
	v.push_back(s);
	for (int i = 1; i < v_length; i++)
	{
		v.push_back(s.substr(i, v_length-1));
	}
	sort(v.begin(), v.end());
	for (int i=0; i<v.size();i++)
	{
		cout << v[i] << "\n";
	}
	return 0;
}