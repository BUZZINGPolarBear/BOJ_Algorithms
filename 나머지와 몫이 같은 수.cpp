#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	long long n;
	long long ans = 0;

	cin >> n;

	for (int i = 1; i < n; i++) ans += n * i;
	for (int i = 1; i < n; i++) ans += i;

	cout << ans;
	return 0;
}