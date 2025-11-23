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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
    
        int mx = 0;
        int ans = 0;
        int l = 0;
        int r = 0;
        map<char,int> mp;
        while(r<n)
        {
            if(r==0 || s[r-1]==s[r] || mp[s[r]]==0)
            {
                mp[s[r]]++;
                mx = max(mx, mp[s[r]]);
                if(s[r-1]!=s[r] && r!=0)
                {
                    mp[s[r - 1]] = 0;
                }
            }
            else
            {
                mp[s[r - 1]] = 0;
            }
            r++;
        }
        cout << mx << " ";
        int bc = s[n - 1];
        while(k--)
        {
            char c;
            cin >> c;
            if(bc==c)
            {
                mp[bc]++;
            }
            else{
                mp[bc] = 0;
                bc = c;
                mp[bc]++;
            }
            mx = max(mx, mp[bc]);
            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}