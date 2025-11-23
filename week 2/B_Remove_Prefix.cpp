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
        vector<long long> v;
        map<long long, long long> mp;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }

        // for(auto it=mp.begin();it!=mp.end();it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
        long long ans = 0;
        bool found = false;
        for (long long i = 0; i < n;i++)
        {
            long long x = v[i];
            // cout << v[i] << " ";
            if(mp[x]>1)
            {
                ans = i;
                mp[x]--;
                found = true;
            }
        }
        if(found)
        {
            cout << ans +1 << endl;
        }
        else{
            cout << 0 << endl;
        }
       
    }
    return 0;
}