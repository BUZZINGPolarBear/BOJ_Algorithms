#include <iostream>
using namespace std;

int Min(int a, int b)//�����ϴ� �Լ�
{
	return a < b ? a : b;
}
int main()
{
	int n;
	int Houses[1000][3] = { 0, };//index[0]�� ����, [1]�� ȣ���� �ǹ��Ѵ�.
	int MinNum = 10000;//�ּڰ��� ���ϱ� ���� �Լ�.
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
			if (Color == 0)//R�̸� ������ G,B�� ����� ���� ���� ĥ�ؾ���
				Houses[House][Color] += Min(Houses[House - 1][1], Houses[House - 1][2]);
			else if (Color == 1)//G�̸� ������ R,B�� ����� ���� ���� ĥ�ؾ���
				Houses[House][Color] += Min(Houses[House - 1][0], Houses[House - 1][2]);
			else //B�̸� ������ R,G�� ����� ���� ���� ĥ�ؾ���
				Houses[House][Color] += Min(Houses[House - 1][0], Houses[House - 1][1]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (MinNum > Houses[n][i])
		{
			MinNum = Houses[n][i];//��� �� �� ���� �ּڰ��� ����Ѵ�.
		}
	}
	cout << MinNum;
	return 0;
}