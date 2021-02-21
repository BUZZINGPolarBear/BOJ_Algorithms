#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

string str_sum(string a, string b)
{//�ſ� �� �� string a�� b�� �Է¹޾� string result�� ��ȯ�Ѵ�.
	int a_len = a.length(), b_len = b.length();
	int carry = 0, local_sum = 0;
	string result = "";

	if (a_len < b_len)
	{//b�� �׻� �� ª��.
		swap(a, b);
		swap(a_len, b_len);
	}

	while (b_len != a_len)
	{//b���̰� �׻� ª���Ƿ�, a���̿� ���� �� ���� b�տ� 0�� �߰��Ѵ�.
	 //ex) 1234 + 12 -->> 1234 + 0012�� ��ȯ���ش�.
		b = "0" + b;
		b_len++;
	}

	for (int i = a_len - 1; i >= 0; i--)
	{//�ڿ������� �ϳ��� ���� result�� �����ش�.
		int a_temp = a[i] - '0';
		int b_temp = b[i] - '0';
		local_sum = a_temp + b_temp + carry;
		carry = local_sum / 10;
		local_sum %= 10;
		result = to_string(local_sum) + result;
	}

	if (carry)
	{//����� �����µ� carry�� �����ִ� ���
		result = to_string(carry) + result;
	}
	return result;
}

string str_mult(string a, string b)
{
	int a_len = a.length(), b_len = b.length();
	int carry = 0, local_mult = 0, cnt=-1;
	string result = "", local_result="";

	if (a_len < b_len)
	{//b�� �׻� �� ª��.
		swap(a, b);
		swap(a_len, b_len);
	}

	for (int i = b_len - 1; i >= 0; i--)
	{
		int b_temp = b[i] - '0';
		cnt++;
		carry = 0;
		local_mult = 0;
		local_result = "";
		for (int j = a_len - 1; j >= 0; j--)
		{
			int a_temp = a[j] - '0';
			local_mult = a_temp * b_temp + carry;
			carry = local_mult / 10;
			local_mult %= 10;
			local_result = to_string(local_mult) + local_result;
		}

		if (carry)
		{//����� �����µ� carry�� �����ִ� ���
			local_result = to_string(carry) + local_result;
		}

		for (int k = 0; k < cnt; k++) local_result += "0";
		result = str_sum(result, local_result);
	}
	return result;
}


int main()
{
	string n;
	cin >> n;


}