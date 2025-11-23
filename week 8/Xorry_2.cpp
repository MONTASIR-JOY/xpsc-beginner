#include<bits/stdc++.h>
using namespace std;

bool kth_bit_on(long long n,long long k)
{
    return ((n >> k) & 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long x;
        cin >> x;
        
        long long b = __lg(x);
        long long B = (1<<__lg(x));
        long long a = (B ^ x);
        long long sum = B;
        long long cnt = 0;
        for (long long k = 0; k < b; k++)
        {
            if(!kth_bit_on(a,k) && !kth_bit_on(B,k) && (sum+(1<<k))<=x)
            {
                cnt++;
                sum += (1 << k);
            }
        }
        long long ans = (1 << cnt);
        cout << ans << endl;
    }
    return 0;
}