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
        vector<long long> v(n);
        set<long long> s;

        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        if(s.size()==1)
        {
            cout << 0 << endl;
            continue;
        }
        long long ans = LLONG_MAX;
        long long l = 0;
        long long r = 0;
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==v[i+1]&& i<n-1)
            {
                ans = min(ans, v[i] * l + v[i] * (n - i - 1));
                //cout << ans << endl;
                continue;
            }
            l = i;
            ans = min(ans, v[i] * i + v[i] * (n - i - 1));
        }
        reverse(v.begin(), v.end());
        for (long long i = 0; i < n;i++)
        {
            if(v[i]==v[i+1]&& i<n-1)
            {
                ans = min(ans, v[i] * l + v[i] * (n - i - 1));
                //cout << ans << endl;
                continue;
            }
            l = i;
            ans = min(ans, v[i] * i + v[i] * (n - i - 1));
        }
        cout << ans << endl;
    }
    return 0;
}