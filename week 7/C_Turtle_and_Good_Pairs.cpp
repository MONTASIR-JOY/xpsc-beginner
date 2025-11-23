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
        map<char, int> mp;
        for(char c:s)
        {
            mp[c]++;
        }
        vector<pair<int, char>> v;
        for(auto val:mp)
        {
            v.push_back({val.second, val.first});
        }
        sort(v.rbegin(), v.rend());
    
        vector<char> ans(n);
        int idx = 0;
        for(auto val:v)
        {
            while(val.first--)
            {
                if(idx>=n)
                {
                    idx = 1;
                }
                ans[idx] = val.second;
                idx += 2;
            }
        }
        for(char c:ans)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}