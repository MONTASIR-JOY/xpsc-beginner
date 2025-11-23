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
        long long n,s;
        cin >> n>>s;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        if(n==1)
        {
            cout << abs(v[0] - s)<<endl;
            continue;
        }
        if(s>=v[0] && s>=v[n-1])
        {
            cout << s - v[0] << endl;
            continue;
        }
        if(s<=v[0] && s<=v[n-1])
        {
            cout << v[n - 1] - s << endl;
            continue;
        }
        bool x = true;
        if((s-v[0])>(v[n-1]-s))
        {
            x = false;
        }
        if(x)
        {
            long long ans = 2 * (s - v[0]);
            ans += (v[n - 1] - s);
            cout << ans << endl;
        }
        else
        {
            long long ans = 2 * (v[n-1]-s);
            ans += (s-v[0]);
            cout << ans << endl;
        }
    }
    return 0;
}