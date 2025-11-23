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
        vector<pair<int,int>> v;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        int mn = v[0].first;
        for (int i = 1; i < n;i++)
        {
            mn = min(mn, max(v[i].first + 1, v[i].second));
        }
        cout << mn << endl;
    }
    return 0;
}