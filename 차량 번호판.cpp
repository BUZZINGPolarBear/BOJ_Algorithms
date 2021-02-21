#include <iostream>
#include <cstring>
using namespace std;

char form[5];
int m, allc = 1;
int c = 26, d = 10;
int cntc = 0, cntd = 0;

int count() {
	for (int i = 0; i < m; i++) {
		if (cntc >= 2)
			c = 25;
		else if (cntd >= 2)
			d = 9;

		if (form[i] == 'c') {
			allc = allc * c;
			c--;
			cntc++;
			d = 10;
		}
		else {
			allc = allc * d;
			d--;
			cntd++;
			c = 26;
		}


	}
	return 0;

}
int main() {

	cin >> form;
	m = strlen(form);
	count();
	cout << allc;

	return 0;
}