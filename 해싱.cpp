#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#define MOD 1234567891;
using namespace std; 

string str_sum(string a, string b)
{//매우 긴 수 string a와 b를 입력받아 string result를 반환한다.
	int a_len = a.length(), b_len = b.length();
	int carry = 0, local_sum=0;
	string result = "";

	if (a_len < b_len)
	{//b가 항상 더 짧다.
		swap(a, b);
		swap(a_len, b_len);
	}

	while (b_len != a_len)
	{//b길이가 항상 짧으므로, a길이에 맞을 때 까지 b앞에 0을 추가한다.
	 //ex) 1234 + 12 -->> 1234 + 0012로 변환해준다.
		b = "0" + b;
		b_len++;
	}

	for (int i = a_len - 1; i >= 0; i--)
	{//뒤에서부터 하나씩 더해 result에 더해준다.
		int a_temp = a[i] - '0';
		int b_temp = b[i] - '0';
		local_sum = a_temp + b_temp + carry;
		carry = local_sum / 10;
		local_sum %= 10;
		result = to_string(local_sum) + result;
	}

	if (carry)
	{//계산이 끝났는데 carry가 남아있는 경우
		result = to_string(carry) + result;
	}
	return result;
}


int main()
{
	unsigned long long ans;
	int l;
	long long hash=0;
	string str;

	cin >> l >> str;
	hash += str[0] - 'a' + 1;

	for (int i = 1; i < l; i++)
	{
		long long temp = str[i] - 'a'+1;
		for (int j = 1; j <= i; j++)
		{
			temp *= 31;
			temp %= MOD;
		}
		temp %= MOD;
		hash += temp;
		hash %= MOD;
	}
	cout << hash%MOD;

	return 0;
}