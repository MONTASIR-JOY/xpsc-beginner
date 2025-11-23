#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    long long ans = 0;
    long long mn = LLONG_MAX;
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
        if(v[i]<mn)
        {
            ans++;
        }
        mn = min(mn, v[i]);
    }
    cout << ans << endl;
    return 0;
}