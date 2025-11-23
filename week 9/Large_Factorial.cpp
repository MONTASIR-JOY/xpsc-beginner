#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long ans = 1;
        for (long long i = 1; i <= n;i++)
        {
            ans = (1LL*ans % mod * i % mod) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}