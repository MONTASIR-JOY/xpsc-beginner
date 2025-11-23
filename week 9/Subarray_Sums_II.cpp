#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
 
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    map< long long, long long > mp;
    long long sum = 0;
    long long ans = 0;
    mp[0] = 1;
    for (long long i = 0; i < n;i++)
    {
        sum += v[i];
        ans += mp[sum - k];
        mp[sum]++;
    }
    
    cout << ans << endl;

    return 0;
}
