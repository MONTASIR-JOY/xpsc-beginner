#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> l(n);
        vector<long long> g(n);
        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        for (long long i = 0; i < n; i++)
        {
            v.push_back({l[i], i}); // store index instead of gold directly
        }
        sort(v.begin(), v.end());
        vector<long long> ans(n, 0);
        multiset<long long> ml;
        long long sum = 0;
        for(auto val : v)
        {
            long long lv = val.first;
            long long idx = val.second;
            ans[idx] = sum;
            if(k > ml.size())
            {
                sum += g[idx];
                ml.insert(g[idx]);
            }
            else
            {
                auto it = ml.begin();
                if(*it < g[idx])
                {
                    sum -= *it;
                    ml.erase(it);
                    ml.insert(g[idx]);
                    sum += g[idx];
                }
            }
        }
        for (long long i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
