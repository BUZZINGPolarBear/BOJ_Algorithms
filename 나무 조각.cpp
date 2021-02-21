#include <iostream>
using namespace std;

int main() {
    int ary[10] = { 0 };
    ary[5] = 1000;

    for (int i = 0; i < 5; i++) {
        cin >> ary[i];
    }

    for (int k = 5; k > 0; k--) {
        for (int i = 0; i < k; i++) {
            if (ary[i] > ary[i + 1]) {
                int temp;
                temp = ary[i + 1];
                ary[i + 1] = ary[i];
                ary[i] = temp;
                for (int j = 0; j < 5; j++) {
                    cout << ary[j] << " ";
                }
                cout << endl;
            }
        }

    }
}
