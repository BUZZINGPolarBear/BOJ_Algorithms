#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string a, b, zeros = "", ans = "";
	cin >> a >> b;

	if (a.find("1") == string::npos && b.find("1") == string::npos)
	{
		cout << 0;
		return 0;
	}

	int a_len = a.size();
	int b_len = b.size();

	if (a_len < b_len)
	{//a 이진수가 더 길다고 가정한다.
		swap(a, b);
		swap(a_len, b_len);
	}

	for (int i = 0; i < a_len - b_len; i++)
	{
		zeros += "0";
	}
	b = zeros + b;

	bool carry = 0;
	for (int i = a_len - 1; i >= 0; i--)
	{

		if (a[i]+b[i]==('1' + '1') && carry == 1)
		{
			carry = 1;
			ans = "1" + ans;
		}
		else if (a[i] + b[i] == ('1' + '1') && carry == 0)
		{
			carry = 1;
			ans = "0" + ans;
		}
		else if (a[i] + b[i] == ('1' + '0') && carry == 1)
		{
			carry = 1;
			ans = "0" + ans;
		}
		else if (a[i] + b[i] == ('1' + '0') && carry == 0)
		{
			carry = 0;
			ans = "1" + ans;
		}
		else if (a[i] + b[i] == ('0' + '0') && carry == 1)
		{
			carry = 0;
			ans = "1" + ans;
		}
		else if (a[i] + b[i] == ('0' + '0') && carry == 0)
		{
			carry = 0;
			ans = "0" + ans;
		}
		
	}
	if (carry) ans = "1" + ans;

	int first_one = ans.find("1");
	for(int i=first_one; i<ans.size(); i++) cout << ans[i];
	return 0;
}