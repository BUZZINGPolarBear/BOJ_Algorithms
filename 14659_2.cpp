#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	deque <int> dq;
	int max = -1, n, temp, ans=0;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		dq.push_back(temp);
	}
	while (!dq.empty())
	{
		ans = 0;
		int front = dq.front();
		dq.pop_front();
		while (!dq.empty()&&dq.front() < front)
		{
			ans++;
			dq.pop_front();
		}
		ans > max ? max = ans : max;
	}
	cout << max;
	return 0;
}