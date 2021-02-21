#include <iostream>
using namespace std;

int Min(int a, int b)//값비교하는 함수
{
	return a < b ? a : b;
}
int main()
{
	int n;
	int Houses[1000][3] = { 0, };//index[0]은 층수, [1]은 호수를 의미한다.
	int MinNum = 10000;//최솟값을 구하기 위한 함수.
	cin >> T;

	for (int k = 0; k < T; k++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> Houses[k][j];
		}
	}

	for (int House = 1; House <= n; House++)
	{
		for (int Color = 0; Color < 3; Color++)
		{
			if (Color == 0)//R이면 윗집의 G,B중 비용이 적은 것을 칠해야함
				Houses[House][Color] += Min(Houses[House - 1][1], Houses[House - 1][2]);
			else if (Color == 1)//G이면 윗집의 R,B중 비용이 적은 것을 칠해야함
				Houses[House][Color] += Min(Houses[House - 1][0], Houses[House - 1][2]);
			else //B이면 윗집의 R,G중 비용이 적은 것을 칠해야함
				Houses[House][Color] += Min(Houses[House - 1][0], Houses[House - 1][1]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (MinNum > Houses[n][i])
		{
			MinNum = Houses[n][i];//계산 값 중 가장 최솟값을 출력한다.
		}
	}
	cout << MinNum;
	return 0;
}