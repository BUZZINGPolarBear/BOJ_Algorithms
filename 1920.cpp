#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, n_field[100010] = { 0, };
void binary_search(int low, int high, int m);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, m_input;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n_field[i];
	}
	sort(n_field, n_field + n);

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> m_input;
		binary_search(0, n, m_input);
	}
	return 0;
}

void binary_search(int low, int high, int m)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (n_field[mid] == m)
		{
			cout << 1 << "\n";
			return;
		}
		if (n_field[mid] < m)
		{
			low = mid + 1;
		}
		else if(m <= n_field[mid])
		{
			high = mid - 1;
		}
	}

	cout << 0 << "\n";
	return;
}