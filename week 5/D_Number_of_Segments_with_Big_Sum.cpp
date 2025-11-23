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
    long long ans = 0;
    long long sum = 0;
    while(r<n)
    {
        sum += v[r];
        bool y = false;
        if(sum>=k)
        {
            ans+=(n-r);
            y = true;
            //cout << sum << endl;
        }
        // else 
        // {
        //     r++;
        // }
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
                    ans+=(n-r);
                    //cout << sum << endl;
                }
            }
            // if(sum<k)
            // {
            //     r++;
            // }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}