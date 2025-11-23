#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int ans = -1;
        bool x = false;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(mp[v[i]]==1 && x==false)
            {
                x = true;
                ans = v[i];
            }
            mp[v[i]]++;
        }
        if(ans==-1)
        {
            cout << -1 << endl;
        }
        else{
            cout << 1 << endl;
            cout << ans << endl;
        }
    }
    return 0;
}