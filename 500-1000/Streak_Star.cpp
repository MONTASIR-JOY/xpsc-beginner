#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        long long cnt = 1;
        map<long long, long long> mp;
        for (long long i = 0; i < n;i++)
        {
            long long save = v[i];
            v[i] = v[i] * k;
            cnt = 1;
            for (long long j = 1; j < n;j++)
            {
                if(v[j]>=v[j-1])
                {
                    cnt++;
                }
                else
                {
                    ans = max(ans, cnt);
                    cnt = 1;
                }
            }
            ans = max(ans, cnt);
            v[i] = save;
        }
        cout << ans << endl;
    }
    return 0;
}