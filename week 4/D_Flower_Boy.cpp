#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<long long> pref(n + 1, 0);
        long long j = 0;

        for (int i = 0; i < n; i++)
        {
            if (j < m && a[i] >= b[j])
            {
                j++;
            }
            pref[i + 1] = j;
        }

        if (pref[n] == m)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> suff(n + 1, 0);
        j = m - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (j >= 0 && a[i] >= b[j])
            {
                j--;
            }
            suff[i] = m - 1 - j;
        }
        suff[n] = 0;

        long long ans = -1;

        for (int i = 0; i <= n; i++)
        {
            long long l = pref[i];
            long long r = suff[i];

            if (l + r < m)
            {
                long long need = b[l];

                if (l + 1 + r >= m)
                {
                    if (ans == -1 || need < ans)
                    {
                        ans = need;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}