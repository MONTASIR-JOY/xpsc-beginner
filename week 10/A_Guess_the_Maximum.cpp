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
        vector<int> ans;
        for (int i = 0; i < n-1;i++)
        {
            int a = max(v[i], v[i + 1]);
            ans.push_back(a);
        }
        sort(ans.begin(), ans.end());
        cout << ans[0] - 1 << endl;
    }
    return 0;
}