//TLE KHABO NA

#include<bits/stdc++.h>
using namespace std;
 main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        
        vector<pair<long long,long long>> d;
        vector<pair<long long,long long>> a;
        vector<pair<long long,long long>> b;
        vector<pair<long long,long long>> c;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            a.push_back({x, i});
        }
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            b.push_back({x, i});
        }
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            c.push_back({x, i});
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        long long maxi = LLONG_MIN;
        for (long long i = 0; i < 3;i++)
        {
            for (long long j = 0; j < 3;j++)
            {
                for (long long k = 0; k < 3;k++)
                {
                    if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second)
                    {
                        maxi = max(maxi, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}