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
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool found = false;
        long long l = 0, r = v[0];
        while(l <= r)
        {
            long long one = l + (r - l) / 2;
            // From v[0] - one - n*sec = 0 => sec = (v[0] - one) / n
            if((v[0] - one) % n != 0)
            {
                r = one - 1;
                continue;
            }
            long long sec = (v[0] - one) / n;
            if(sec < 0)
            {
                r = one - 1;
                continue;
            }
            // Check if v[n-1] - n*one - sec == 0
            if(v[n-1] - n*one - sec != 0)
            {
                if(v[n-1] - n*one - sec > 0)
                    l = one + 1;
                else
                    r = one - 1;
                continue;
            }
            // Check all elements
            bool ok = true;
            for(long long i = 0; i < n; i++)
            {
                if(v[i] - (i+1)*one - (n-i)*sec != 0)
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                found = true;
                break;
            }
            else
            {
                r = one - 1;
            }
        }
        if(found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}