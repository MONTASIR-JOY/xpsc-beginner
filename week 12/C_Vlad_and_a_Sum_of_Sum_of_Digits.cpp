#include<bits/stdc++.h>
using namespace std;
const long long s = 1e6 + 5;
long long dp[s];
long long fun(long long n)
{
    long long sum = 0;
    long long m = n; 
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    for (long long i = 1; i < s; i++)
    {
        dp[i] = dp[i - 1] + fun(i);
    }
    while(t--)
    {
        long long n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}