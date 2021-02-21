#include <iostream>
#include <vector>
using namespace std;

void max_push_heap(vector<int>& v, int n);
int max_pop_heap(vector<int>& v);
vector<int> max_v, min_v;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	vector<int> v;
	int n, temp, score=0, score_temp = 0;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		max_push_heap(v,temp);
	}
	while (v.size() != 1)
	{
		temp = v[0];
		score_temp = v[0];
		max_pop_heap(v);
		temp += v[0];
		score_temp *= v[0];
		max_pop_heap(v);
		score += score_temp;
		max_push_heap(v, temp);
	}
	cout << score;
	return 0;
}

void max_push_heap(vector<int>& v, int n)
{
	v.push_back(n);
	int index = v.size() - 1;
	while (index > 0 && v[(index - 1) / 2] < v[index])
	{
		swap(v[index], v[(index - 1) / 2]);
		index = (index - 1) / 2;
	}
}

int max_pop_heap(vector<int>& v)
{
	int retNum = v[0];
	v[0] = v.back();
	v.pop_back();
	int here = 0;
	while (1)
	{
		int left = here * 2 + 1, right = here * 2 + 2;
		if (left >= v.size()) break;
		int next = here;
		if (v[next] < v[left])
		{
			next = left;
		}
		if (right < v.size() && v[next] < v[right])
		{
			next = right;
		}
		if (next == here) break;
		swap(v[here], v[next]);
		here = next;
	}
	return retNum;
}