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
        vector < vector<int>> v(n);

        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < n-1;j++)
            {
                long long x;
                cin >> x;
                v[i].push_back(x);
            }
        }
        vector<int> rest(n-1);
        map<int, int> mp;
        long long mx = 0;
        for (long long i = 0; i < n;i++)
        {
            mp[v[i][0]]++;
        }
         for (long long i = 0; i < n;i++)
        {
            if(mp[v[i][0]]!=n-1)
            {
                rest = v[i];
            }
            else{
                mx = v[i][0];
            }
        }
        cout << mx << " ";
        for (long long i = 0; i < n - 1;i++)
        {
            cout << rest[i] << " ";
        }
        cout << endl;
    }

    return 0;
}