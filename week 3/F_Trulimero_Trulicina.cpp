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
        long long n, m, k;
        cin >> n >> m  >> k;
        // cout << n << m << k << endl;

        long long a[n][m];
        long long val = 1;
        bool got = false;
        vector<int> v;
        for (long long i = 1; i <= k;i++)
        {
            v.push_back(i);
        }
        long long track = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                if(track==k)
                {
                    track = 0;
                }
                a[i][j] = v[track];
                track++;
            }
            if(n==k || m==k)
            {
                reverse(v.begin(), v.end());
            }
        }

        for (long long i = 0; i < n;i++)
        {
            for (long long j = 0; j < m;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}