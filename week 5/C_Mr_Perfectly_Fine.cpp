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
        vector<pair<long long, string>> v;
        for (long long i = 0; i < n;i++)
        {
            long long k;
            string s;
            cin >> k;
            cin >> s;
            v.push_back({k, s});
        }
        long long mn = LONG_LONG_MAX;
        bool x = false;
        bool y = false;
        bool z = false;
        long long mn1 = LONG_LONG_MAX;
        long long ans = LONG_LONG_MAX;
        for (auto val:v)
        {
            if(val.first<mn && val.second=="01")
            {
                mn = val.first;
                x = true;
            }
            if(val.first<mn1 && val.second=="10")
            {
                mn1 = val.first;
                y = true;
            }
            if(val.first<ans && val.second=="11")
            {
                ans = val.first;
                z = true;
            }
        }

        if(z && x && y)
        {
            cout << min(ans, mn1 + mn) << endl;
            continue;
        }
        if(z && ((x&&!y)||(!x&&y)))
        {
            cout << ans << endl;
            continue;
        }
        if(!z && (x && y))
        {
            cout << mn1 + mn << endl;
            continue;
        }
        if(z)
        {
            cout << ans << endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}
