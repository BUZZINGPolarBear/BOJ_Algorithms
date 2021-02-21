#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

string clock_diaod[9][5];
void original_clock_diaod();

int main()
{
	original_clock_diaod();

}

void original_clock_diaod()
{
	clock_diaod[0][0] = "###";
	clock_diaod[0][1] = "#.#";
	clock_diaod[0][2] = "#.#";
	clock_diaod[0][3] = "#.#";
	clock_diaod[0][4] = "###";

	clock_diaod[1][0] = "..#";
	clock_diaod[1][1] = "..#";
	clock_diaod[1][2] = "..#";
	clock_diaod[1][3] = "..#";
	clock_diaod[1][4] = "..#";

	clock_diaod[2][0] = "###";
	clock_diaod[2][1] = "..#";
	clock_diaod[2][2] = "###";
	clock_diaod[2][3] = "#..";
	clock_diaod[2][4] = "###";

	clock_diaod[3][0] = "###";
	clock_diaod[3][1] = "..#";
	clock_diaod[3][2] = "###";
	clock_diaod[3][3] = "..#";
	clock_diaod[3][4] = "###";

	clock_diaod[4][0] = "#.#";
	clock_diaod[4][1] = "#.#";
	clock_diaod[4][2] = "###";
	clock_diaod[4][3] = "..#";
	clock_diaod[4][4] = "..#";

	clock_diaod[5][0] = "###";
	clock_diaod[5][1] = "#..";
	clock_diaod[5][2] = "###";
	clock_diaod[5][3] = "..#";
	clock_diaod[5][4] = "###";

	clock_diaod[6][0] = "###";
	clock_diaod[6][1] = "#..";
	clock_diaod[6][2] = "###";
	clock_diaod[6][3] = "#.#";
	clock_diaod[6][4] = "###";

	clock_diaod[7][0] = "###";
	clock_diaod[7][1] = "..#";
	clock_diaod[7][2] = "..#";
	clock_diaod[7][3] = "..#";
	clock_diaod[7][4] = "..#";

	clock_diaod[8][0] = "###";
	clock_diaod[8][1] = "#.#";
	clock_diaod[8][2] = "###";
	clock_diaod[8][3] = "#.#";
	clock_diaod[8][4] = "###";

	clock_diaod[9][0] = "###";
	clock_diaod[9][1] = "#.#";
	clock_diaod[9][2] = "###";
	clock_diaod[9][3] = "..#";
	clock_diaod[9][4] = "###";
}
