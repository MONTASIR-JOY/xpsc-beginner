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
        long long n, m, k;
        cin >> n >> m >> k;
        vector<long long> v(m);
        vector<long long> v1(k);
        for (long long i = 0; i < m;i++)
        {
            cin >> v[i];
        }
        map<long long, long long> mp;
        for (long long i = 0; i < k;i++)
        {
            cin >> v1[i];
            mp[v1[i]]++;
        }
        for (long long i = 0; i < m;i++)
        {
            if(mp[v[i]]==0 && k==n-1)
            {
                cout << 1;
            }
            else if(mp[v[i]]==1 && k==n)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}