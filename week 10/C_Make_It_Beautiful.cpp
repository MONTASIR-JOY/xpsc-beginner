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
        // if(n == 1)
        // {
        //     long long cnt = 0;
        //     while(n)
        //     {
        //         cnt++;
        //         n /= 2;
        //     }
        //     cout << cnt << endl;
        //     continue;
        // }
        vector<long long> v(n);
        long long beauty = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            beauty += __builtin_popcountll(v[i]);
        }
        vector<long long> bitoff(64,0);
        for (long long i = 0; i < n;i++)
        {
            for (long long k = 0; k < 64;k++)
            {
                if(!((v[i]>>k)&1))
                {
                    bitoff[k]++;
                }
            }
        }
        // for (long long i = 0; i < 64;i++)
        // {
        //     cout << bitoff[i] << " ";
        // }
        // cout << endl;
        for (long long i = 0; i < 64; i++)
        {
            if (k <= 0)
            {
                break;
            }
            long long po = pow(2, i);
            long long pl = min(bitoff[i], k / po);
            k -= pl * po;
            beauty += pl;
        }
        cout << beauty << endl;
    }
    return 0;
}