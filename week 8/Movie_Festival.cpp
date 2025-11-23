#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return (a.second < b.second);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    int end = -1;
    for (int i = 0; i < n;i++)
    {
        if(end<=v[i].first)
        {
            end = v[i].second;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}