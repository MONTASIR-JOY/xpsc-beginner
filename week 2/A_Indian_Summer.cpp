#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string,string>,int>mp;
    while(n--)
    {
        string s;
        string s1;
        cin >> s;
        cin >> s1;
        mp[{s,s1}] = 1;
    }

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    
    cout << mp.size() << endl;
    return 0;
}