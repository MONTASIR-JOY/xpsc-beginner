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
        vector<long long> pre(n+1);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (long long i = 1; i <= n;i++)
        {
            pre[i] = pre[i - 1] + v[i-1];
        }
        while (k--)
        {
            long long x;
            cin >> x;
            long long ans = -1;
            auto it = lower_bound(pre.begin(), pre.end(), x);
            if (it != pre.end())
            {
                ans = it - pre.begin();
            }
            cout << ans << endl;
        }
    }
    return 0;
}