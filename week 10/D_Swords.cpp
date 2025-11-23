#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    long long mx = LLONG_MIN;
    
    for(long long i = 0; i < n;i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    long long gcd = mx-v[0];
    long long sum = mx-v[0];
    for (long long i = 1; i < n;i++)
    {
        sum += (mx - v[i]);
        gcd = __gcd(gcd,mx - v[i]);
    }
    cout << sum / gcd << " " << gcd << endl;
    return 0;
}