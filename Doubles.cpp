#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
	int n;
	while (1)
	{
		vector<int> v;
		cin >> n;
		if (n == -1) break;
		else
		{
			int size = 1;
			v.push_back(n);
			while (1)
			{
				cin >> n;
				if (n == 0) break;
				else
				{
					v.push_back(n);
					size++;
				}
			}
			int cnt = 0;
			for (int i = 0; i < size - 1; i++)
			{
				int original = v[i];
				for (int j = i + 1; j < size; j++)
				{
					if (v[j] == original * 2 || original == v[j]*2) cnt++;
				}
			}
			cout << cnt << "\n";
		}
	}
}