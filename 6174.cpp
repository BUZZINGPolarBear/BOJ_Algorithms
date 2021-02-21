#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int make_kapler(int a);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int temp, cnt = 0;
		cin >> temp;

		while (1)
		{
			if (temp == 6174)
			{
				cout << cnt << "\n";
				break;
			}

			temp = make_kapler(temp);
			cnt++;
		}
	}
	return 0;
}

int make_kapler(int a)
{
	vector<int> v;
	int smaller=0, bigger=0;
	for (int i = 0; i < 4; i++)
	{
		v.push_back(a % 10);
		a /= 10;
	}

	sort(v.begin(), v.end());
	smaller += v[0] * 1000;
	smaller += v[1] * 100;
	smaller += v[2] * 10;
	smaller += v[3] * 1;

	sort(v.begin(), v.end(), greater<int>());
	bigger += v[0] * 1000;
	bigger += v[1] * 100;
	bigger += v[2] * 10;
	bigger += v[3] * 1;

	return bigger - smaller;
}