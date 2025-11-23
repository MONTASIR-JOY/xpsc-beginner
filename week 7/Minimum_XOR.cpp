#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int y;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                y = v[i];
                continue;
            }
            y = y ^ v[i];
        }
        int ans = y;
        for (int i = 0; i < n;i++)
        {
            ans = min(ans, y ^ v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}