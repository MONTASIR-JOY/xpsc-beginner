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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        int ans = 0;
        bool x = true;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i].size()<=m && x)
            {
                ans++;
                m -= v[i].size();
            }
            else{
                x = false;
            }
        }
        cout << ans << endl;
    }
    return 0;
}