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
        long long n, c;
        cin >> n >> c;
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        map<long long,long long> mp;
        for (long long i = 0; i < n;i++)
        {
            if(mp[a[i]]==0 || mp[a[i]]>b[i])
            {
                mp[a[i]] = b[i];
            }
        }
        vector<pair<long long, long long>> v;
        for(auto val:mp)
        {
            v.push_back({val.second, val.first});
        }

        sort(v.begin(), v.end());
        long long ans = 0;
        long long cost = 0;
        long long i = 1;
        for (auto val:v)
        {
            cost += val.first;
            ans = max(ans, c * i - cost);
            i++;
            //cout << val.first << val.second << endl;
        }
        cout << ans << endl;
    }
    return 0;
}