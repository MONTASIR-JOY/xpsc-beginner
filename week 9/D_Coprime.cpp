#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            mp[v[i]] = i + 1;
        }
        int mx = -1;
        for (auto it = mp.begin(); it != mp.end();it++)
        {
            for (auto ite = mp.begin(); ite != mp.end();ite++)
            {
                if(__gcd(it->first,ite->first)==1)
                {
                    mx = max(mx, it->second + ite->second);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}

