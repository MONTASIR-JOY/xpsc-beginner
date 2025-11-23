#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        mp[v[i]]++;

        //cout << v[i] << " " << mp[v[i]]<<endl;
    }
    string ans;
    for (int i = n-1; i >= 0;i--)
    {
        if(mp[v[i]]==0)
        {
            continue;
        }

        string s = v[i];
        char ch = s.back();
        s.pop_back();
        ans.push_back(s.back());
        ans.push_back(ch);
        mp[v[i]] = 0;
    }
    cout << ans << endl;
    return 0;
}