#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> v(n);
    vector<long long> v1(m);

    for (long long i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (long long i = 0; i < m;i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    long long l = 0;
    long long r = 0;
    long long cnt = 0;

    while(l<m)
    {
        if(abs(v1[l]-v[r])<=k)
        {
            cnt++;
            l++;
            r++;
        }
        else
        {
            l++;
        }
    }
    cout << cnt << endl;
    return 0;
}