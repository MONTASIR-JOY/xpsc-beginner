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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        int cnt = 0;
        int mn = INT_MAX;
        int ln = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[i]>=x)
            {
                cnt++;
                continue;
            }
            ln++;
            mn = min(v[i], mn);
            if(mn*ln>=x)
            {
                cnt++;
                mn = INT_MAX;
                ln = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}