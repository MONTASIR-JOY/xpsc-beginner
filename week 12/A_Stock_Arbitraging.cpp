#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> v(n);
    vector<long long> v1(m);
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (long long i = 0; i < m;i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.rbegin(), v1.rend());
    long long b = v[0];
    long long s = v1[0];
    long long cnt = (k / b);
    long long ans = k % b;
    ans += cnt * s;
    cout << max(k, ans) << endl;
    return 0;
}