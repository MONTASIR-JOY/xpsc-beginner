#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    long long l = 0, r = 0;
    long long sum = 0;
    long long ans = LLONG_MAX;

    while(r<n)
    {
        sum += v[r];
        bool y = false;
        
        if(sum>=k)
        {
            ans = min(ans, r - l + 1);
            y = true;
        }
        else
        {
            r++;
        }
        if(y==true)
        {
            while(sum>=k && l<=r)
            {
                if(sum<k)
                {
                    break;
                }
                sum -= v[l];
                l++;
                if(sum>=k)
                {
                    ans = min(ans, r - l + 1);
                }
            }
            if(sum<k)
            {
                r++;
            }
        }
    }
    if(ans==LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}