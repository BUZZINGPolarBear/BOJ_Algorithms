#include <iostream>
#include <vector>
using namespace std;

void max_push_heap(vector<int>& v, int n);
int max_pop_heap(vector<int>& v);
void min_push_heap(vector<int>& v, int n);
int min_pop_heap(vector<int>& v);
vector<int> max_v, min_v;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, temp;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		if (max_v.size() == 0) max_push_heap(max_v, temp);
		else
		{
			if (max_v.size() > min_v.size())
			{
				min_push_heap(min_v,temp);
			}	
			else
			{
				max_push_heap(max_v,temp);
			}

			if (max_v[0] > min_v[0])
			{
				int maxtop = max_v[0];
				int mintop = min_v[0];
				max_pop_heap(max_v);
				min_pop_heap(min_v);
				max_push_heap(max_v, mintop);
				min_push_heap(min_v, maxtop);
			}
		}
		cout << max_v[0] << "\n";
		
	}
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
	int ret_num=v[0];
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