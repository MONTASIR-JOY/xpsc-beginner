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
        map<char, int> mp;
        for (int i = 0; i < n;i++)
        {
            mp[s[i]]++;
        }
        int x = 0;
        for(auto val:mp)
        {
            if(val.second%2!=0)
            {
                x++;
            }
        }
        if(x<=k+1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}