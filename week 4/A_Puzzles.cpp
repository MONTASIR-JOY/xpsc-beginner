#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> v(m);
    for (long long i = 0; i < m;i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long r = 0;
    long long l = 0;
    long long mn = LLONG_MAX;
    while(r<m)
    {
        if(r-l+1==n)
        {
            mn = min(mn, v[r] - v[l]);
            l++;
        }
        r++;
    }
    cout << mn << endl;
    return 0;
}