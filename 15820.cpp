#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int s1, s2;
	string test_case, answer;
	int sample_testCase_flag = 1, system_test_case_flag = 1;
	
	cin >> s1 >> s2;
	while (s1--)
	{
		cin >> test_case >> answer;
		if (test_case != answer) sample_testCase_flag = 0;
	}
	while (s2--)
	{
		cin >> test_case >> answer;
		if (test_case != answer) system_test_case_flag = 0;
	}
	if (sample_testCase_flag == 1 && system_test_case_flag == 1) cout << "Accepted";
	else if (sample_testCase_flag == 1 && system_test_case_flag == 0) cout << "Why Wrong!!!";
	else if (sample_testCase_flag == 0) cout << "Wrong Answer";
	return 0;
}