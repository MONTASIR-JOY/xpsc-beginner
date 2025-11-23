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
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        vector<long long> bit(31, 0);

        for (long long j = 0; j < n;j++)
        {
            long long val = v[j];
            for (long long i = 30; i >= 0;i--)
            {
                if((val>>i)&1)
                {
                    bit[i]++;
                }
            }
        }
        // for (long long i = 30; i >= 0;i--)
        // {
        //     cout << bit[i] << " ";
        // }
        // cout << endl;
        long long ans = 0;
        for (long long i = 30; i >= 0;i--)
        {
            long long need = n - bit[i];
            if(k>=need)
            {
                k -= need;
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}