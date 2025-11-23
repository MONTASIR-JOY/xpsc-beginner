#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < 26;i++)
        {
            mp[s[i]] = i;
        }

        string give;
        cin >> give;
        int ans = 0;
        for (int i = 1; i < give.size();i++)
        {
            ans += abs(mp[give[i - 1]] - mp[give[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}