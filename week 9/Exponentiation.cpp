#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long power(long long x, long long n)
{
    long long ans = 1;
    while(n)
    {
        if(n&1)
        {
            ans = (1LL * ans % mod * x % mod) % mod;
        }
        x = 1LL * x * x % mod;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long x, n;
        cin >> x >> n;
        cout<<power(x, n) << endl;
    }
    return 0;
}
