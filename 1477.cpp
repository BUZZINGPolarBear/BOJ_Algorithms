#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void max_push_heap(vector<int>& v, int n);
int max_pop_heap(vector<int>& v);
void min_push_heap(vector<int>& v, int n);
int min_pop_heap(vector<int>& v);
vector<int> max_v, min_v;

int main()
{
	int n, m, l, temp;
	cin >> n >> m >> l;
	vector<int> v, pq;

	v.push_back(0);
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	v.push_back(l);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size()-1; i++)
	{
		max_push_heap(pq,((v[i] + v[i + 1]) / 2));
	}
	while (m--)
	{
		int x = pq[0];
		max_push_heap(pq, x / 2);
	}
	cout << pq[0];
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

void min_push_heap(vector<int>& v, int n)
{
	v.push_back(n);
	int index = v.size() - 1;
	while (index > 0 && v[(index - 1) / 2] > v[index])
	{
		swap(v[index], v[(index - 1) / 2]);
		index = (index - 1) / 2;
	}
}

int min_pop_heap(vector<int>& v)
{
	int ret_num = v[0];
	v[0] = v.back();
	v.pop_back();
	int here = 0;
	while (1)
	{
		int left = here * 2 + 1, right = here * 2 + 2;
		if (left >= v.size())break;
		int next = here;
		if (v[next] > v[left]) next = left;
		if (right < v.size() && v[next] > v[right]) next = right;
		if (next == here) break;
		swap(v[here], v[next]);
		here = next;
	}
	return ret_num;
}