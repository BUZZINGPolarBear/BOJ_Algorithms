#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int a_cnt = 0, b_cnt = 0;
	int n;
	cin >> n;

	while (n--)
	{
		int temp_a, temp_b;
		cin >> temp_a >> temp_b;
		if (temp_a == temp_b) continue;
		else if (temp_b < temp_a) a_cnt++;
		else b_cnt++;
	}
	cout << a_cnt << " " << b_cnt;
	return 0;
}