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
        long long m;
        cin >> m;
        long long n=2*m;
        map<long long, long long> mp;
        vector<long long> v;
        vector<long long> ans;
        long long a[m][m];
        for (long long i = 0; i < m;i++)
        {
            for (long long j = 0; j < m;j++)
            {
                cin >> a[i][j];
            }
        }
        // for (long long i = 0; i < m;i++)
        // {
        //     for (long long j = 0; j < m;j++)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (long long i = 0; i < m;i++)
        {
            for (long long j = 0; j < m;j++)
            {
                long long x = a[i][j];
                if(mp[x]==0)
                {
                    v.push_back(x);

                    mp[x]++;
                }
            }
        }
        for (long long i = 1; i < n+1;i++)
        {
            if(mp[i]==0)
            {
                ans.push_back(i);
                // cout << i << endl;
            }
        }
        
        for (long long i : v)
        {
            ans.push_back(i);
        }
        for(long long i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}