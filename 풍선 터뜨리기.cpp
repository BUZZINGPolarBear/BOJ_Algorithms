//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <stack>
//#include <queue>
//#include <map>
//#include <unordered_set>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	deque<pair<int, int> > dq;
//	int n, temp, next_target=0;
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> temp;
//		dq.push_back(make_pair(temp, i));
//	}
//
//	cout << dq.front().second << " ";
//	next_target = dq.front().first;
//	dq.pop_front();
//
//	while (!dq.empty())
//	{
//		if (0 < next_target)
//		{
//			for (int i = 1; i < next_target; i++)
//			{
//				dq.push_back(dq.front());
//				dq.pop_front();
//			}
//			cout << dq.front().second << " ";
//			next_target = dq.front().first;
//			dq.pop_front();
//		}
//		else
//		{
//			next_target *= -1;
//			for (int i = 1; i < next_target; i++)
//			{
//				dq.push_front(dq.back());
//				dq.pop_back();
//			}
//			cout << dq.back().second << " ";
//			next_target = dq.back().first;
//			dq.pop_back();
//		}
//	}
//
//
//
//}

#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, num, jump;
    bool check;
    deque < pair<int, int> > d;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> num;
        d.push_back(make_pair(num, i));
    }

    jump = d.front().first;
    cout << d.front().second << " ";
    d.pop_front();

    while (!d.empty()) {
        if (jump > 0) {
            for (int i = 0; i < jump - 1; i++) {
                d.push_back(d.front());
                d.pop_front();
            }
            cout << d.front().second << " ";
            jump = d.front().first;
            d.pop_front();
        }
        else {
            jump *= -1;
            for (int i = 0; i < jump - 1; i++) {
                d.push_front(d.back());
                d.pop_back();
            }
            cout << d.back().second << " ";
            jump = d.back().first;
            d.pop_back();
        }
    }
}