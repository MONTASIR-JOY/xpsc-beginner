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
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        map<long long, long long> mp;

        for (long long i = 0; i < n;i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        long long m;
        cin >> m;
        vector<long long> d(m);
        map<long long, long long> mp1;
        for (long long i = 0; i < m;i++)
        {
            cin >> d[i];
            mp1[d[i]]++;
        }
        bool ans = true;
        long long cnt = 0;
        for (long long i = 0; i < n;i++)
        {
            if(a[i]!=b[i] && mp1[b[i]]>0)
            {
                mp1[b[i]]--;
            }
            else if(a[i]!=b[i])
            {
                ans = false;
                break;
            }
        }
        if(mp[d[m-1]]>0 && ans)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}