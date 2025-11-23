#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        bool an = false;
        long long ans = INT_MAX;
        for (long long i = 0; i < n;i++)
        {
            long long x;
            cin >> x;
            if(x/k>0)
            {
                an = true;
                ans = min(ans, x % k);
            }
        }
        if(an)
        {
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}