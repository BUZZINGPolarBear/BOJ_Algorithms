#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class less_schedule
{
public:
	bool operator() (const pair<int, int> &s1, const pair<int, int> &s2)
	{
		if (s1.second != s2.second) return s1.second < s2.second;
		return s1.first < s2.first;
	}
};

int main()
{
	int n, s, f;
	vector<pair<int, int> > schedule, ans;

	cin >> n;
	while (n--)
	{
		cin >> s >> f;
		schedule.push_back(make_pair(s, f));
	}

	sort(schedule.begin(), schedule.end(), less_schedule());

	int begin = -1;
	for (auto x : schedule)
	{
		if (x.first >= begin)
		{
			ans.push_back(x);
			begin = x.second;
		}
	}

	cout << ans.size();
	return 0;
}