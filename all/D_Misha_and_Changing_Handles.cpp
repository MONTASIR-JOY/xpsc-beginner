#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mp;
    map<string, string> mp1;
    for (int i = 0; i < n;i++)
    {
        string s, s1;
        cin >> s >> s1;
        bool found = false;
        
        for(auto val:mp)
        {
            if(val.second==s)
            {
                mp[val.first] = s1;
                found = true;
                break;
            }
        }
        if(found==false)
        {
            mp[s] = s1;
        }
    }
    cout << mp.size() << endl;
    for(auto val:mp)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    return 0;
}