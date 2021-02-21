#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> rect(n, vector <long long > (m, 0));

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = m - 1; j >= 0; j--)
        {
            rect[i][j] = temp[j];
        }
    }
    //for (int i = 0; i < n; ++i) {
    //    long long temp;
    //    cin >> temp;
    //    for (int j = m - 1; j >= 0; --j) {
    //        rect[i][j] = temp % 10;
    //        temp = temp / 10;
    //    }
    //}

    int size = (n > m) ? m : n;
    while (size > 1) {
        for (int i = 0; i < n - (size - 1); ++i) {
            for (int j = 0; j < m - (size - 1); ++j) {
                if (rect[i][j] == rect[i][j + (size - 1)] && rect[i][j] == rect[i + (size - 1)][j + (size - 1)] && rect[i][j] == rect[i + (size - 1)][j]) {
                    cout << size * size << "\n";
                    return 0;
                }
            }
        }
        size--;
    }

    cout << size * size << "\n";

    return 0;
}