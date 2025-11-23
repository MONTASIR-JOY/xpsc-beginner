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
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        map<long long, long long> mp;
        mp[v[0]] = 1;
        long long cnt = 0;
        long long cnt2 = 1;
        long long r = 1;
        map<long long, long long> mp1;
        long long ans = 1;
        while(r<n)
        {
            mp1[v[r]]++;
            if(mp[v[r]]>=1 && mp1[v[r]]==1)
            {
                cnt++;
                // cout << cnt << endl;
                if(cnt==cnt2)
                {
                    // cout << cnt << endl;
                    // cout << cnt2 << endl;
                    cnt = 0;
                    mp.clear();
                    mp = mp1;
                    mp1.clear();
                    // cout << mp[1] << " " << mp1[1] << endl;
                    ans++;
                    cnt2 = mp.size();
                    // cout << r << endl;
             
                    // cout << cnt2 << endl;
                }
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}