#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string n;
	int n_len;
	long long N;

	cin >> n;
	n_len = n.size();
	N = stoi(n);


	for (int i = 1; i <= n_len - 1; i++)
	{
		long long left_mult = 1, right_mult = 1;

		for (int left = 0; left < i; left++)
		{
			left_mult *= n[left]-'0';
		}

		for (int right = i; right < n_len; right++)
		{
			right_mult *= n[right]-'0';
		}
		if (left_mult == right_mult)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;

}