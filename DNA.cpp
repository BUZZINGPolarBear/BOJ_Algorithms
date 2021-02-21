#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int, char>& front, pair<int, char>& back)
{
	int front_cnt = front.first;
	char front_char = front.second;
	
	int back_cnt = back.first;
	char back_char = back.second;

	if (front_cnt < back_cnt) return front_cnt > back_cnt;
	
	else if (front_cnt == back_cnt)	return front_char < back_char;
	
	else return front_cnt > back_cnt;
}

int main()
{
	int n, m, shortest_cnt=0;
	int hamming_field[1001] = { 0, };
	string str[1001], shortest_dna;
	cin >> n >> m;

	for (int i = 0; i < n; i++)	cin >> str[i];
	
	for (int i = 0; i < m; i++)
	{
		vector<pair<int, char> > v;
		int a_cnt = 0, c_cnt = 0, g_cnt = 0, t_cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (str[j][i] == 'A') a_cnt++;
			if (str[j][i] == 'C') c_cnt++;
			if (str[j][i] == 'G') g_cnt++;
			if (str[j][i] == 'T') t_cnt++;
		}
		v.push_back({ a_cnt, 'A' });
		v.push_back({ c_cnt, 'C' });
		v.push_back({ g_cnt, 'G' });
		v.push_back({ t_cnt, 'T' });

		sort(v.begin(), v.end(), compare);

		shortest_cnt += n - v[0].first;
		shortest_dna += v[0].second;
	}
	cout << shortest_dna << "\n" << shortest_cnt;
	return 0;
}