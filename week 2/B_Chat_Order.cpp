#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    map<string, int> mp;
    
    reverse(v.begin(), v.end());
    for (int i = 0; i < n;i++)
    {
        string s = v[i];
        mp[s] = 1;
    }
    vector<string> ans;
    
    for (int i = 0; i < n;i++)
    {
        string s = v[i];
        if(mp[s]==1)
        {
            ans.push_back(s);

            mp[s] = 2;
        }
    }
    for (int i = 0; i < ans.size();i++)
    {
        cout << ans[i] << endl;
    }
        return 0;
}