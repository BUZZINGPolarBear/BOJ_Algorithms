	#include <iostream>
	#include <algorithm>
	#include <vector>
	using namespace std;

	typedef pair<int, int> score_pare;
	vector<pair <score_pare, score_pare> > v;

	bool compare(pair<score_pare, score_pare> &front, pair<score_pare, score_pare> &back)
	{
		int front_s = front.first.first;
		int front_c = front.first.second;
		int front_l = front.second.first;

		int back_s = back.first.first;
		int back_c = back.first.second;
		int back_l = back.second.first;

		if (front_s == back_s)
		{
			if (front_c == back_c) return front_l < back_l;
			return front_c < back_c;
		}
		return front_s > back_s;
	}

	int main()
	{
		int n;
		int s, c, l;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> s >> c >> l;
			v.push_back({ {s,c},{l,i} });
		}
		sort(v.begin(), v.end(), compare);
		cout<<v[0].second.second;
		return 0;
	
	}