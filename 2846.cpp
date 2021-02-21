#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, pi, longest = 0, new_longest = -10000;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> pi;
		v.push_back(pi);
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[j-1] < v[j])
			{
				new_longest = v[j] - v[i];
			}
			else
			{
				i = j-1;
				break;
			}
		}
		longest < new_longest ? longest = new_longest : longest;
	}
	cout << longest;

}