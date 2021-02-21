#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector <int> v;
	while (n--)
	{
		int temp;
		cin >> temp;
		if (temp == 0)
		{
			if (v.size() == 0)
			{
				cout << -1 << "\n";
				continue;
			}
			else
			{
				pop_heap(v.begin(), v.end());
				cout << v.back()<<"\n";
				v.pop_back();
			}
		}
		else
		{
			if (v.size() == 0)
			{
				for (auto i = 0; i < temp; i++)
				{
					int new_present_num;
					cin >> new_present_num;
					v.push_back(new_present_num);
				}
				make_heap(v.begin(), v.end());
			}
			else
			{
				for (auto i = 0; i < temp; i++)
				{
					int new_present_num;
					cin >> new_present_num;
					v.push_back(new_present_num);
					push_heap(v.begin(), v.end());
				}
			}
		}
	}
}