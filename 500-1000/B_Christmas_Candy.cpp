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
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int mx = v[0];
        int ans = 0;
        for (int i = 1; i < n;i++)
        {
            if(mx>v[i])
            {
                ans++;
            }
            mx = max(mx, v[i]);
        }
        // cout << mx << endl;
        cout << ans << endl;
    }
    return 0;
}