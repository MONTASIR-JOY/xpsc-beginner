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
        long long m = (n - 1) * n / 2;
        vector<long long> v(m);
        set<long long> s;
        map<long long, long long> mp;
        for (long long i = 0; i < m;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            s.insert(v[i]);
        }

        sort(v.begin(), v.end());

        vector<long long> ans;
        auto it = s.begin();
        long long cnt = 0;
        long long i = 1;
        while(it!=s.end())
        {
            
            if(mp[*it]==cnt)
            {
                *it++;
                cnt = 0;
            }
            cnt += n - i;
            i++;
            if(it!=s.end())
            {
                ans.push_back(*it);
            }
        
        }
        ans.push_back(1000000000);
        for(long long i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}