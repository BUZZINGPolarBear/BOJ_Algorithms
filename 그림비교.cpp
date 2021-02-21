#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string str_field[55][5];
int main()
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) // !!!! 1부터 시작 !!!!
	{
		string input_str;
		for (int j = 0; j < 5; j++)
		{
			cin >> input_str;
			str_field[i][j] = input_str;
		}
	}

	vector <pair<int, int> > best_similar_pair(1, { 0,0 }); //가장 비슷한 짝꿍을 저장하기 위한 벡터

	int minimal_different = 1000000;
	int different = 0;
	int i, j;
	for (i = 1; i < n - 1; i++)
	{
		for (j = i + 1; j <= n; j++)
		{//str_fied[i]와 str_field[j]를 비교

		for (int k = 0; k < 5; k++)
		{
			for (int m = 0; m < 7; m++)
			{
				if (str_field[i][k][m] != str_field[j][k][m]) different++;
			}
		}
			//cout << different << "\n";
			if (different < minimal_different)
			{
				minimal_different = different;
				best_similar_pair[0].first = i;
				best_similar_pair[0].second = j;
			}
			different = 0;
		}
	}

	cout << best_similar_pair[0].first << " " << best_similar_pair[0].second;
	return 0;
}