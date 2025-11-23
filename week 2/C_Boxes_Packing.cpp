#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[v[i]]++;
        ans = max(mp[v[i]], ans);
    }
    cout << ans;
    return 0;
}