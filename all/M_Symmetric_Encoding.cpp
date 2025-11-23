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
        string s;
        cin >> s;
        set<char> se;
        for(char i:s)
        {
            se.insert(i);
        }
        string ans;
        for(char i:se)
        {
            ans.push_back(i);
        }
        map<char, char> mp;
        int l = 0;
        int r = ans.size() - 1;

        while(l<=r)
        {
            mp[ans[l]] = ans[r];
            mp[ans[r]] = ans[l];
            l++;
            r--;
        }

        for (int i = 0; i < n;i++)
        {
            cout << mp[s[i]];
        }
        cout << endl;
    }
    return 0;
}