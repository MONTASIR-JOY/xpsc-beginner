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
        vector<int>v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = n;
        for (int i = 0; i < n;i++)
        {
            int for_this = v[i] + n - i-1;
            ans = min(for_this, ans);
        }
        cout << ans << endl;
    }
    return 0;
}