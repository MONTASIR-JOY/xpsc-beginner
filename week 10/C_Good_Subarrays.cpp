#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        map<long long, long long> mp;
        mp[0] = 1;
        long long ans = 0;

        for (long long i = 0, sum = 0; i < n; i++)
        {
            sum += (s[i] - '0' - 1);
            ans += mp[sum];
            mp[sum]++;
        }

        cout << ans << endl;
    }
    return 0;
}