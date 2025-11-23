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
        long long n, m;
        cin >> n >> m;

        long long l = max(0LL, n - m);
        long long r = n + m;
        long long ans = 0;
        for(long long i = 31; i >= 0; i--) 
        {
            if((1 & (l >> i)) || (1 & (r >> i)))
            {
                ans = ans | (1 << i);
            }
            if((1 & (l >> i)) != (1 & (r >> i)))
            {
                ans = ans | ((1ll << (i + 1)) - 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}