#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin >> n >> k;
    vector<long long> v(n);

    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    long long l = 0;
    long long r = 0;
    long long sum = 0;
    long long ans = 0;
    while(r<n)
    {
        sum += v[r];
        if(sum<=k)
        {
            ans = max(ans, r - l + 1);
        }
        else{
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}


