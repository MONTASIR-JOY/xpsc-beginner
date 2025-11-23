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
            cout << "NO" << endl;
            mp[s] = 1;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}