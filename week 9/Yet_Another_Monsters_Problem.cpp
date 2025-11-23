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
        int mx = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        int ans = min(mx, n);
        sort(v.begin(), v.end());
        for (int i = 0; i < n;i++)
        {
            ans = min(ans, v[i] + (n - 1 - i));
        }
        cout << ans << endl;
    }
    return 0;
}