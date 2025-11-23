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
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b(m);
        for (long long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        long long mx=a[0];
        long long mn=a[0];
        for (long long i = 1; i < n;i++)
        {
            mn = mn ^ a[i];
            mx = mx ^ a[i];
        }
        if(n % 2 == 0)
        {   
            for (long long i = 0; i < m; i++)
            {
                for (long long k = 32; k >= 0; k--)
                {
                    if((b[i] >> k) & 1)
                    {
                        mn = (mn & (~(1 << k)));
                    }
                }
            }
        }
        else
        {
            for (long long i = 0; i < m; i++)
            {
                for (long long k = 32; k >= 0; k--)
                {
                    if((b[i] >> k) & 1)
                    {
                        mx = mx | (1 << k);
                    }
                }
            }
        }
        cout << mn << " " << mx << endl;
    }
    return 0;
}