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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        long long g1 = 0;
        long long g2 = 0;
        for (long long i = 0; i < n;i+=2)
        {
            g1 = __gcd(g1, v[i]);
        }
        for (long long i = 1; i < n;i+=2)
        {
            g2 = __gcd(g2, v[i]);
        }

        bool ok = true;
        for (long long i = 1; i < n;i+=2)
        {
            if(v[i]%g1==0)
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << g1 << endl;
            continue;
        }
        ok = true;
        for (long long i = 0; i < n;i+=2)
        {
            if(v[i]%g2==0)
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << g2 << endl;
            continue;
        }
        cout << 0 << endl;
    }
    return 0;
}