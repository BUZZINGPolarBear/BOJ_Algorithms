#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int rev(int a)
{
	string str_a = to_string(a);
	//string str_b = b;

	reverse(str_a.begin(), str_a.end());
	//reverse(str_b.begin(), str_b.end());

	int to_int_a = stoi(str_a);
	//int to_int_b = stoi(str_b);

	return to_int_a;
}

int main()
{
	int x, y;
	int ans = 0;
	
	cin >> x >> y;
	ans = rev(x) + rev(y);
	ans = rev(ans);
	cout << ans;
	return 0;
}