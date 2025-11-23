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
        cin >> n >> m >> k;
        vector<long long> v(n);
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum * m < k)
        {
            cout << 0 << endl;
            continue;
        }

        long long sz = n * m;
        long long go = 0;
        reverse(v.begin(), v.end());
        long long trc = 0;
        long long i = 0;
        long long idx = 0;

        if (sum < k)
        {
            i = k / sum;
            k -= i * sum;
        }
        if (k == 0)
        {
            i--;
            k = sum;
        }
        while (true)
        {
            go += v[trc];
            if (go >= k)
            {
                idx = n * i + trc;
                break;
            }
            trc++;
        }
        cout << sz - idx << endl;
    }
    return 0;
}