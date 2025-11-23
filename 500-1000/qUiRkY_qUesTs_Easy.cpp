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
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long sum = 0;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        long long mx = LLONG_MIN;
        sort(v.begin(), v.end());
        mx=max(sum, n * n);
        for (long long i = 0; i < n;i++)
        {
            long long k = i + 1;
            sum -= v[i];
            if(i==0)
            {
                mx = max(sum, mx);
                continue;
            }
            if(i==1)
            {
                sum += k*k;
                mx = max(sum, mx);
                continue;
            }
            sum -= i * i;
            sum += k*k;
            mx = max(sum, mx);
        }
        cout << mx << endl;
    }
    return 0;
}