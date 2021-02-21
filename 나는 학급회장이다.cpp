#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef pair<int, int> score_pair;
vector <pair<score_pair, score_pair> > score_v;//<<3점 받은 횟수, 2점 받은 횟수>, <1점 받은 횟수, n번째 후보> >

int main()
{
	int n;
	int score[3] = { 0, }; //투표 결과 합
	score_v.push_back({ {0,0}, {0,1} });
	score_v.push_back({ {0,0}, {0,2} });
	score_v.push_back({ {0,0}, {0,3} });

	cin >> n;

	while (n--)
	{
		int temp_one, temp_two, temp_three;
		cin >> temp_one >> temp_two >> temp_three;

		score_v[0].first.first += temp_one;
		score_v[1].first.first += temp_two;
		score_v[2].first.first += temp_three;

		switch (temp_one) {
			case 3: 
			{
				score_v[0].first.second += 1;
				break;
			}
			case 2: 
			{			
				score_v[0].second.first += 1;
				break;
			}
			case 1: 
			{
				break;
			}
		}
		switch (temp_two) {
			case 3: 
			{
				score_v[1].first.second += 1;
				break;
			}
			case 2: 
			{
				score_v[1].second.first += 1;
				break;
			}
			case 1: 
			{
				break;
			}
		}
		switch (temp_three) {
			case 3: 
			{
				score_v[2].first.second += 1;
				break;
			}
			case 2: 
			{
				score_v[2].second.first += 1;
				break;
			}
			case 1: 
			{
				break;
			}
		}

	}

	sort(score_v.begin(), score_v.end(), greater<pair<score_pair, score_pair> > ());

	if (score_v[0].first.first == score_v[1].first.first)
	{
		if (score_v[0].first.second == score_v[1].first.second && score_v[0].second.first == score_v[1].second.first)
		{
			cout << 0 << " " << score_v[0].first.first;
			return 0;
		}
	}
	cout << score_v[0].second.second << " " << score_v[0].first.first;
	return 0;
}