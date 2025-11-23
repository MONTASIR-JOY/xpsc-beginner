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
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0;i<n;i++)
        {
            cin >> a[i];
        }
        long long m = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> b[i];
            m = max(m, abs(b[i]));
        }
        map<long long, long long> mp;
        for (long long i = 0; i < n;i++)
        {
            long long x = a[i];
            long long y = b[i];
            if(y>0)
            {
                mp[y] += x;
            }
            else
            {
                mp[-y] += x;
            }
        }
        bool ans = true;
        long long cnt = 0;
        for (long long i = 1; i <= m;i++)
        {
            long long x = mp[i];
            cnt += k;
            if(mp[i]-cnt<=0)
            {
                mp[i] = 0;
                cnt = cnt - x;
            }
            else 
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}