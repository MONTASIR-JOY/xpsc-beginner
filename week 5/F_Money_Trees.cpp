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
        vector<long long> h(n);
        vector<long long> f(n);

        for (long long i = 0; i < n;i++)
        {
            cin >> f[i];
        }
        for (long long i = 0; i < n;i++)
        {
            cin >> h[i];
        }

        long long r = 1;
        long long l = 0;
        long long ans = 0;
        long long sum = f[0];
        if(sum<=k)
        {
            ans = 1;
        }
        while(r<n)
        {
            if(h[r-1]%h[r]==0)
            {
                sum += f[r];
            }
            else{
                sum = f[r];
                l = r;
            }
            if(sum<=k)
            {
                ans = max(ans, r - l + 1);
                // cout << l << " " << r << endl;
            }
            else
            {
                while(sum>k)
                {
                    sum -= f[l];
                    l++;
                }
                if(sum<=k)
                {
                    ans = max(ans, r - l + 1);
                    // cout << l << " " << r << endl;
                }
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}