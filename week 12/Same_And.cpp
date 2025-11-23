#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> ans;
        map<long long, long long> mp;
        mp[n] = 1;
        ans.push_back(n);
        for (long long i = 65; i >= 0;i--)
        {
            long long p = (1LL*1 << i) | n;
            if(p<=m && mp[p]==0 && p>0)
            {
                ans.push_back(p);
                mp[p] = 1;
            }
        }
        if(ans.size()<2)
        {
            cout << -1 << endl;
        }
        else{
            cout << ans.size() << endl;
            for(long long i:ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}