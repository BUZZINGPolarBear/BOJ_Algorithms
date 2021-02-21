#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	queue<int> q;
	
	cin >> n;
	for (int i = 1; i <= n; i++) q.push(i);

	while (q.size() != 1)
	{
		cout << q.front()<<" ";
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();

	return 0;
}