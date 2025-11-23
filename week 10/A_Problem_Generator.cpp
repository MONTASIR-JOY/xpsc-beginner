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
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n;i++)
        {
            mp[s[i]]++;
        }
        int ans = 0;
        for (char i = 'A'; i <= 'G';i++)
        {
            if(m>mp[i])
            {
                ans += (m - mp[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}