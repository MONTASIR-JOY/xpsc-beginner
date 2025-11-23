#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);

    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    long long l = 0;
    long long r = 0;
    long long l1 = n - 1;
    long long r1 = n - 1;

    long long ans = 0;

    long long sum1 = v[r];
    long long sum3 = v[l1];
    while(r<l1)
    {
        if(sum1==sum3)
        {
            ans = max(ans, sum1);
            r++;
            sum1 += v[r];
        }
        else if(sum1>sum3)
        {
            l1--;
            sum3 += v[l1];
        }
        else 
        {
            r++;
            sum1 += v[r];
        }
    }
    cout << ans << endl;
    return 0;
}