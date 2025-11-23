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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        map<long long, long long> mp;
        set<long long> se;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            se.insert(v[i]);
        }
        sort(v.begin(), v.end());
        long long r = 0;
        long long idx = -1;
        for (long long i = 0; i < n;i++)
        {
            if(mp[v[i]]>=k)
            {
                idx = i;
                r = v[i];
                break;
            }
        }
        if(idx==-1)
        {
            cout << idx << endl;
            continue;
        }
        long long mx = 0;
        long long ansl = r;
        long long dupl = r;
        long long ansr = r;
        long long dupr = r;
        while(r<=v[n-1])
        {
            if(mp[r]>=k)
            {
                while(mp[r]>=k)
                {
                    dupr = r;
                    r++;
                    idx++;
                }
                if(dupr-dupl>mx)
                {
                    ansr = dupr;
                    ansl = dupl;
                    mx = dupr - dupl;
                }
            }
            else
            {
                auto it = se.upper_bound(r);
                if (it == se.end())
                {
                    break;
                }
                r = *it;
                dupl = r;
                dupr = r;
            }
        }
        cout << ansl << " " << ansr << endl;
    }
    return 0;
}