#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <pair<int, int> > v;
	v.push_back(make_pair(1, 1));
	v.push_back(make_pair(2, 1));
	v.push_back(make_pair(3, 3));
	v.push_back(make_pair(3, 2));
	v.push_back(make_pair(3, 1));

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
