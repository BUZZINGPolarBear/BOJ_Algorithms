#include <iostream>
using namespace std;

int mat_A[110][110] = { 0, }, mat_B[110][110] = { 0, }, mat_ans[110][110] = { 0, };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n1, k1, n2, k2;

	cin >> n1 >> k1;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < k1; j++) cin >> mat_A[i][j];
		
	}

	cin >> n2 >> k2;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < k2; j++) cin >> mat_B[i][j];
		
	}

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < k2; j++)
		{
			int temp=0;
			for (int k = 0; k < k1; k++) temp += mat_A[i][k] * mat_B[k][j];
			cout << temp << " ";
		}
		cout << "\n";
	}
}