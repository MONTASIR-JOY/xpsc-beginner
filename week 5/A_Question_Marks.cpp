#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        map<char, long long> mp;

        for (long long i = 0; i < s.size();i++)
        {
            mp[s[i]]++;
        }
        long long ans = 0;
        for(auto val:mp)
        {
            if(mp[val.first]>n && val.first!='?')
            {
                ans += n;
            }
            else if(val.first!='?')
            {
                ans += mp[val.first];
            }
        }
        cout << ans << endl;
    }
    return 0;
}