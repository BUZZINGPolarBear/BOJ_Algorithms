#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, temp;
	cin >> a >> b;

	if (b < a)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (b - a == 1 || b==a)
	{
		cout << 0;
		return 0;
	}

	cout << b - a - 1 << "\n";
	for (unsigned long long i = a + 1; i < b; i++)
	{
		cout << i << " ";
	}
	return 0;
}