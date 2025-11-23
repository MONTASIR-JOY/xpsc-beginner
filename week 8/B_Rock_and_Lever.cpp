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
        long long ans = 0;
        for (long long i = 0;i < n;i++)
        {
            cin >> v[i];
            ans += mp[__lg(v[i])];
            mp[__lg(v[i])]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}