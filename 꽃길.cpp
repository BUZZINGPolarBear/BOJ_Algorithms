#include <iostream>
#include <vector>
using namespace std;

int field[15][15] = { 0, };
int temp_field[15][15] = { 0, };

int cost(int x, int y)
{
	int cost_sum = 0;
	cost_sum = (field[x][y]) + (field[x - 1][y] + field[x + 1][y] + field[x][y + 1] + field[x][y - 1]);
	return cost_sum;
}

bool is_possible(int origin_x)

int main()
{
	int n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> field[i][j];
		}
	}




}