#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> mp;
    while(t--)
    {
        string s;
        cin >> s;
        if(mp[s]==0)
        {
            cout << "OK" << endl;
            mp[s]++;
            continue;
        }
        else{
            cout << s << mp[s] << endl;
            mp[s]++;
            continue;
        }
    }
    return 0;
}