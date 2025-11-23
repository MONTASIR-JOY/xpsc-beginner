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
        long long n;
        cin >> n;
        vector<long long> v(n);
        map<long long, long long> mp;
        bool x = false;
        long long z = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if(v[i]==0)
            {
                x = true;
                z++;
            }
        }
        long long cnt = 0;
        bool y = false;
        for (auto val:mp)
        {
            if(val.first==0)
            {
                continue;
            }
            long long v = (val.second / 2) * 2;
            cnt += v;
            if(v>0)
            {
                y = true;
            }
        }

        long long ans = n - cnt-z;
        if(x || y)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}