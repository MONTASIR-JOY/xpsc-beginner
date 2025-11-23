#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> pre(n, 0);
    pre[0] = v[0];
    for (long long i = 1; i < n ;i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    map<long long, long long> cnt;
    cnt[0] = 1;
    long long ans = 0;
    long long r = 0;
    while (r < n)
    {
        long long mod = ((pre[r] % n) + n) % n;
        ans += cnt[mod];
        cnt[mod]++;
        r++;
    }
    cout << ans << endl;
    return 0;
}