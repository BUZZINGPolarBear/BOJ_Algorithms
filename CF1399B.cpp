#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int eat_count(int length);

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int gift_EA;
		cin >> gift_EA;
		cout<<eat_count(gift_EA);
	}
	return 0;
}

int eat_count(int length)
{
	long long min_a =(long long)pow(10,9)+1, min_b = (long long)pow(10,9)+1,count=0,temp;
	vector<pair<int, int> > v;
	for (int i = 0; i < length; i++)
	{
		cin >> temp;
		v[i].first = temp;
		v[i].first < min_a ? v[i].first = min_a : min_a;
	}
	for (int i = 0; i < length; i++)
	{
		cin >> temp;
		v[i].second = temp;
		v[i].second < min_a ? v[i].second = min_b : min_b;
	}
	for (int i = 0; i < length; i++)
	{
		if (v[i].first > min_a && v[i].second > min_b) count++, v[i].first--, v[i].second--;
		else if (v[i].first > min_a) count++, v[i].first--;
		else if (v[i].second > min_b) count++, v[i].second--;
	}
	return count;
}