#include <iostream>
#include <vector>
using namespace std;

void push_heap(vector<long>& v, long l);
void pop_heap(vector<long>& v);
int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	vector <long> v;
	int n;
	cin >> n;
	while (n--)
	{
		int temp;
		cin >> temp;
		if (temp == 0)
		{
			if (v.size() == 0)
			{
				cout << 0 << "\n";
			}
			else
			{
				pop_heap(v);
			}
		}
		else
		{
			push_heap(v, temp);
		}
	}
}

void push_heap(vector<long>& v, long l)
{
	v.push_back(l);
	int index = v.size() - 1;
	while (index > 0 && v[(index - 1) / 2] > v[index])
	{
		swap(v[index], v[(index - 1) / 2]);
		index = (index - 1) / 2;
	}
}

void pop_heap(vector<long>& v)
{
	cout << v[0] << "\n";
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
}