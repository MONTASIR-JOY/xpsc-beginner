#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long cnt = 0; 
        int l = 0; 

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                l++;
                if (l >= k)
                {
                    cnt += (l - k + 1);
                }
            }
            else
            {
                l = 0;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}