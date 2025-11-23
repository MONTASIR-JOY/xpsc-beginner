#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        long long mod = 1e9 + 7;
        long long ans = 0;
        for (long long i = 0; i < 64; i++) 
        {
            long long pl = 1;
            bool x = false;
            if((m>>i)&1)
            {
                x = true;
                for (long long k = 0; k < i; k++)
                {
                    pl = (pl % mod * n % mod) % mod;
                }
            }
            if(x)
            {
                ans = (ans % mod + pl % mod);
            }
        }
        cout << ans % mod << endl;
    }
    return 0;
}