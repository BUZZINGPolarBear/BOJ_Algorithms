#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	int cross_here_a=-1, cross_here_b=-1, b_temp=0;

	cin >> a >> b;
	int a_len = a.length(), b_len = b.length();

	for (int i = 0; i < a_len; i++)
	{
		for (int j = 0; j < b_len; j++)
		{
			if (a[i] == b[j])
			{
				cross_here_a = i;
				cross_here_b = j;
				break;
			}
		}
		if (cross_here_a != -1) break;
	}

	for (int i = 0; i < b_len; i++)
	{
		if (i == cross_here_b)
		{
			cout << a << "\n";
			b_temp++;
			continue;
		}
		
		for (int j = 0; j < a_len; j++)
		{
			if (j == cross_here_a)
			{
				cout << b[b_temp++];
			}
			else
			{
				cout << ".";
			}
		}
		cout << "\n";
	}

}