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
    long long mn = v[n - 1];
    long long sum = v[n-1];
    for (long long i=n - 2; i >= 0;i--)
    {
        mn = min(mn-1, v[i]);
        if(mn<=0)
        {
            break;
        }
        sum += mn;
    }
    cout << sum << endl;
    return 0;
}