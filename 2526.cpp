#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, p, temp, finder;
	vector<int> v;

	cin >> n >> p;
	v.push_back(n);

	while (1)
	{
		temp = v[v.size() - 1] * n % p;
		for (finder = 0; finder < v.size(); finder++)	if (v[finder] == temp) break;

		if (finder == v.size())
		{
			v.push_back(temp);
		}
		else
		{
			cout << v.size() - finder;
			return 0;
		}
	}
}