#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;


	for (int i = 1; i <= 8; i++)
	{
		q.push(i);
	}

	int k, n, t, time_ticking =0;
	char z;

	cin >> k;
	while (q.front() != k)
	{
		q.push(q.front());
		q.pop();
	}

	cin >> n;
	while (n--)
	{
		cin >> t >> z;
		time_ticking += t;
		if (time_ticking >= 210)break;

		if (z == 'T')
		{
			q.push(q.front());
			q.pop();
			continue;
		}

		else
		{
			continue;
		}
	}
	cout << q.front();
	return 0;

}