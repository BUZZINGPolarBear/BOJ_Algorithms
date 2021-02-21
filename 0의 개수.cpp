#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		int zero_cnt = 0;
		cin >> n >> m;

		for (int i = n; i <= m; i++)
		{
			string temp = to_string(i);
			for (int i = 0; i < temp.size(); i++)
			{
				if (temp[i] == '0') zero_cnt++;
			}
		}
		cout << zero_cnt << "\n";
	}

	return 0;
}