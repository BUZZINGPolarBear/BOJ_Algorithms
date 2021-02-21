//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int fibo_factory[3] = { 0, 0, 1 };
//int ans_field[3] = { 0, 1};
//
//int main()
//{
//	long long n;
//	long long sum=1;
//	long long ans = 1;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		ans = (ans_field[1]%10 + fibo_factory[2]%10)%10;
//
//		swap(ans_field[0], ans_field[1]);
//		ans_field[1] = ans % 10;
//
//		swap(fibo_factory[0], fibo_factory[1]);
//		swap(fibo_factory[1], fibo_factory[2]);
//		fibo_factory[2] = fibo_factory[0] % 10 + fibo_factory[1] % 10;
//	}
//	cout << ans;
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;


int n;
long long fib(long long n) {
    vector<long long> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 10;
    }
    return dp[n];
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    //dp.resize(n + 1, -1);
    
    cout << fib(n);
}