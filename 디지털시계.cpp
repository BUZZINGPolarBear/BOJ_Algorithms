#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int time_to_int(string str);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		string first_tmp, second_tmp, first="", second="";
		int first_num, second_num;
		int sec, min, hour;
		int three_cnt = 0;

		cin >> first_tmp >> second_tmp;
	
		first_num = time_to_int(first_tmp);
		second_num = time_to_int(second_tmp);
		if (first_num % 3 == 0) three_cnt++;

		sec = stoi(first_tmp.substr(6, 2));
		min = stoi(first_tmp.substr(3, 2));
		hour = stoi(first_tmp.substr(0, 2));
		while (first_num != second_num)
		{
			sec++;

			if (sec == 60)
			{
				first_tmp.replace(6, 2, "00");
				sec = 0;
				min++;
				if (min == 60)
				{
					first_tmp.replace(3, 2, "00");
					min = 0;
					hour++;
					if (hour == 24)
					{
						first_tmp.replace(0, 2, "00");
						hour = 0;
					}
					else
					{
						if(hour<10) first_tmp.replace(0, 2, "0" + to_string(hour));
						else first_tmp.replace(0, 2, to_string(hour));
					}
				}
				else
				{
					if (min < 10)first_tmp.replace(3, 2, "0" + to_string(min));
					else first_tmp.replace(3, 2, to_string(min));
				}
			}
			else
			{
				if (sec < 10)first_tmp.replace(6, 2, "0"+ to_string(sec));
				else first_tmp.replace(6, 2, to_string(sec));
			}
			//cout << first_tmp << endl;
			first_num = time_to_int(first_tmp);
			if (first_num % 3 == 0) three_cnt++;
		}
		cout << three_cnt << "\n";

	}
}

int time_to_int(string str)
{
	string str_temp="";
	int to_int = 0;
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ':') continue;
		str_temp += str[i];
	}
	to_int = stoi(str_temp);
	return to_int;	
}