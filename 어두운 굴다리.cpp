#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

bool calc(int mid);
int n, m;
vector<int> x(100005);

int main()
{

	cin >> n >> m;

	for (int i = 0; i < m; i++) cin >> x[i];

	int left = 0, right = n, ans = 0;
	int mid, height = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (calc(mid))
		{
			ans = mid;
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}

	cout << ans;
	return 0;
}

bool calc(int mid)
{
	bool check = true;

	if (0 < x[0] - mid)
	{
		check = false;
		return check;
	}

	for(int i=1; i<m; i++)
	{
		if (((x[i - 1]+mid) - (x[i] - mid)) < 0)
		{
			check = false;
		}
	}

	if (x[m-1] + mid < n) check = false;

	return check;
}