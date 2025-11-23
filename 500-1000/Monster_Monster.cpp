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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        long long ans = v[0];
        long long pl = k;
        k = 0;
        for (long long i = 1; i < n;i++)
        {
            k += pl;
            ans = max(v[i] + k, ans);
        }
        cout << ans << endl;
    }
    return 0;
}