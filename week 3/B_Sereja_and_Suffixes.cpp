#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> dp(n);
    set<long long> s;
    for (long long i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        dp[i] = s.size(); 
    }

    while (m--)
    {
        long long x;
        cin >> x;
        cout << dp[x - 1] << endl;
    }

    return 0;
}