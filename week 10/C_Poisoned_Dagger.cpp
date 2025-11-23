#include<bits/stdc++.h>
using namespace std;
bool fun(long long n,long long h,vector<long long>v,long long mid)
{
    long long sum = 0;
    for (long long i = 0; i < n-1;i++)
    {
        sum += min(v[i + 1] - v[i], mid);
    }
    sum += mid;
    if(sum>=h)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, h;
        cin >> n >> h;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long l = 0;
        long long r = h;
        long long mid = 0;
        long long ans = 0;
        while(l<=r)
        {
            mid = l + (r - l) / 2;
            if(fun(n,h,v,mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}