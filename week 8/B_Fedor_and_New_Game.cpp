#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;
    m++;
    vector<long long> v(m);
    for (long long i = 0; i < m;i++)
    {
        cin >> v[i];
    }
    long long ans = 0;
    for (long long i = 0; i < m-1;i++)
    {
        long long cnt = 0;
        long long tmp = v[i] ^ v[m-1];
        for (long long k = 31; k >= 0;k--)
        {
            if((tmp>>k)&1)
            {
                cnt++;
            }
            
        }
        cout << endl;
        if(cnt<=k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;

}