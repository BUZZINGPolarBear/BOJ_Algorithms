/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	//long long a = 126663666;
	long long a = 12345678;
	string str = to_string(a);

	if (str.find("666") != string::npos)
	{
		cout << "666이 str안에 있어요!\n";
		cout << "처음 발견한 위치는 : " << str.find("666") << "입니다.\n";
	}
	else
	{
		cout << "666이 str안에 없어요..\n";
		cout << str.find("666") << "\n";
	}
}*/

/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n, i = 666, cnt = 0;
	cin >> n;
	while (1)
	{
		auto s = to_string(i);
		if (s.find("666") != string::npos)
		{
			cnt++;
			if (cnt == n) break;
		}
		i++;
	}
	cout << i;
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <pair <int, int> > a;
	a.push_back(make_pair(1, 1));
	a.push_back(make_pair(2, 1));
	a.push_back(make_pair(3, 1));
	a.push_back(make_pair(4, 1));
	a.push_back(make_pair(4, 2));
	
	a.push_back(make_pair(5, 3));
	a.push_back(make_pair(5, 2));
	a.push_back(make_pair(5, 1));

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i].first << " " << a[i].second << "\n";
	}
	
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, field[51] = { 0 };
	cin >> t;
	vector <pair <int, int> > a(t);


	for (int i = 0; i < t; i++)
	{
		cin >> a[i].first >> a[i].second;
		field[i] = 1;
	}
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++)
		{
			if (a[j].first > a[i].first && a[j].second > a[i].second)
			{
				field[i] += 1;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		cout << field[i] << '\n';
	}
	return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, field[51] = { 0 };

	cin >> t;
	vector <pair <int, int> > a(t);
	
	for (int i = 0; i < t; i++)
	{
		cin >> a[i].first >> a[i].second;
		field[i] = 1;
	}

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++)
		{
			if (a[j].first > a[i].first && a[j].second > a[i].second)
			{
				field[i] += 1;
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		cout << field[i] << '\n';
	}

	return 0;
}