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
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long ans = 0;
        for (long long i = 0; i < n-1; i++)
        {
            ans += min(v[i], v[i + 1]);
        }
        //cout << ans << endl;

        while (q--)
        {
            long long id, val;
            cin >> id >> val;
            id--;
            if (id>0)
            {
                ans -= min(v[id-1], v[id]);
            }
            if (id<n-1)
            {
                ans -= min(v[id], v[id+1]);
            }

            v[id] = val;

            if (id>0)
            {
                ans += min(v[id-1], v[id]);
            }
            if (id<n-1)
            {
                ans += min(v[id], v[id+1]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}