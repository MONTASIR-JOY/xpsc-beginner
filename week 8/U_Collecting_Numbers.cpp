#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> idx(n+1);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        idx[v[i]] = i + 1;
    }
    int ans = 1;
    for (int i = 2; i < n + 1;i++)
    {
        if(idx[i]<idx[i-1])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;

}