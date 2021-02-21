#define _CRT_SECURE_NO_WARNINGS
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


priority_queue<pair<double, int> > pq;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, smallest_index;
	double temp, smallest = 200.000;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &temp);
		pq.push(temp);

	}

	for (int j = 0; j < 7; j++)
	{
		printf("%.3lf\n", pq.top());
		pq.pop();
	}

	return 0;
}