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
        int a[n][m];
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                mx = max(mx, a[i][j]);
            }
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a[i][j] == mx)
                {
                    v.push_back({i + 1, j + 1});
                }
            }
        }
        if(v.size() < 3)
        {
            cout << mx - 1 << endl;
            continue;
        }
        map<int, int> mp, mp1;
        for(auto val : v)
        {
            mp[val.first]++;
            mp1[val.second]++;
        }

        int row = v[0].first;
        int col = v[0].second;
        int c = -1;
        int r = -1;
        bool x = true;
        for(auto val:v)
        {
            if(x)
            {
                x = false;
                continue;
            }
            if(val.first!=row)
            {
                c = val.second;
            }
        }
        x = true;
        for(auto val:v)
        {
            if(x)
            {
                x = false;
                continue;
            }
            if(val.second!=col)
            {
                r = val.first;
            }
        }
        bool ans = true;
        for(auto val : v)
        {
            if(val.first != row && val.second != c)
            {
                ans = false;
                break;
            }
        }

        if(ans)
        {
            cout << mx - 1 << endl;
            continue;
        }

        ans = true;
        for(auto val : v)
        {
            if(val.first != r && val.second != col)
            {
                ans = false;
                break;
            }
        }

        if(ans)
        {
            cout << mx - 1 << endl;
        }
        else
        {
            cout << mx << endl;
        }
    }
    return 0;
}