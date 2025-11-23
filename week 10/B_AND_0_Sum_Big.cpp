#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long mod = 1e9 + 7;
        long long ans = n;
        for (int i = 1; i < k;i++)
        {
            ans = (ans % mod * n % mod) % mod;
        }
        cout << ans<< endl;
    }
    return 0;
}