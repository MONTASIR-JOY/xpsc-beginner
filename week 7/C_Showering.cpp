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
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> v;

        for (int i = 0; i < n;i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end());

        int d = 0;
        bool flag = false;
        for (int i = 0; i < n;i++)
        {
            if(v[i].first-d>=s)
            {
                flag = true;
                break;
            }
            else
            {
                d = v[i].second;
            }
        }
        if(m-v[n-1].second>=s)
        {
            flag = true;
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}