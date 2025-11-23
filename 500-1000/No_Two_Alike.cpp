#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        map<int, int> mp;
        map<int, int> mp1;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int last = mp[v[i]];
            while(i<n && i<last)
            {
                last = max(last, mp[v[i]]);
                if(mp1[v[i]]==0)
                {
                    ans++;
                    mp1[v[i]] = 1;
                }
                i++;
            }
        }
        cout << ans << endl;
    } 
    return 0;
}