#include<bits/stdc++.h>
using namespace std;
bool fun(long long n,long long k,vector<long long>a,vector<long long>b,long long mid)
{
    for (long long i = 0; i < n;i++)
    {
        long long req = a[i] * mid - b[i];
        if(req>0)
        {
            k -= req;
            if(k<0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> b(n);
    for (long long i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < n;i++)
    {
        cin>>b[i];
    }
    long long l = 0;
    long long r = 1e9;
    long long mid = 0;
    long long ans = 0;
    while(l<=r)
    {
        mid = l + (r - l) / 2;
        if(fun(n,k,a,b,mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}