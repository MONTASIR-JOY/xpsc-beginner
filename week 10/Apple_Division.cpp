#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> v(n);
    long long total = 0;
    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
        total += v[i];
    }
    long long mn = LLONG_MAX;
    for (long long i = 0; i < (1 << n);i++)
    {
        long long c = 0;
        for (long long j = 0; j < n;j++)
        {
            if((i>>j)&1)
            {
                c += v[j];
            }
        }
        mn = min(mn,abs(total - 2*c));
    }
    cout << mn << endl;
    return 0;
}