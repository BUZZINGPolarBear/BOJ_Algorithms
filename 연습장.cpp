#include <iostream>
#include <algorithm>
using namespace std;

bool commas(string input) {
	bool commas = true;

	for (int z = 1; z < input.size(); z++) {
		if (z % 4 == 0 && input[z] == ',') {
			commas = true;
		}
		else {
			if (z % 4 == 0 && input[z] != ',') {
				commas = false;
			}
		}
	}
	return commas;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	bool temp;
	string str="35,000";
	cout << commas(str);
	return 0;
}
