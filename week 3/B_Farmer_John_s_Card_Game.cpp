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
        long long n, m;
        cin >> n >> m;
        set<pair<long long, long long>> se;

        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < m;j++)
            {
                long long x;
                cin >> x;
                se.insert({x, i + 1});
            }
        }
        if(m==1)
        {
            for(auto val:se)
            {
                cout << val.second << " ";
            }
            cout << endl;
            continue;
        }
        vector<long long> v;
        for(auto val:se)
        {
            v.push_back(val.second);
        }

        vector<long long> cmp(n);
        for (long long i = 0; i < n;i++)
        {
            cmp[i] = v[i];
        }

        bool ans = true;
        long long j = 0;
        for (long long i = 0; i < m*n;i++)
        {
            if(j==n)
            {
                j = 0;
            }
            if(v[i]!=cmp[j])
            {
                ans = false;
            }
            j++;
        }
        if(ans==false)
        {
            cout << -1 << endl;
        }
        else{
            for(long long i:cmp)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}