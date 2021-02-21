#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
using namespace std;

int main()
{
	unsigned long long N;
	queue<bool> q;
	unsigned long long stack_size = 0, mult=1;

	cin >> N;
	while (N)
	{
		q.push(N % 2);
		N /= 2;
		stack_size++;
	}
	unsigned long long ans=0, add=1;

	while (q.empty() != true)
	{
		ans += q.front() * add;
		add *= 3;
		q.pop();
	}

	cout << ans;
	return 0;

}