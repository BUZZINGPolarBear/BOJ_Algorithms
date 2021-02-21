#include <iostream>
#include <algorithm>
#define mod 10007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int a, b, c, n;
	int flag = 0, temp;

	cin >> a >> b >> c >> n;

	temp = n;
	while (temp)
	{
		temp -= a;
	}

	cout << flag;
	return 0;
}