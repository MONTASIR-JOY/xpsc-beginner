#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(k);
        for (long long i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        if (n == 1 || k == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        vector<long long> ans(k);
        for (long long i = 1; i < k; i++)
        {
            ans[i] = v[i] - v[i - 1];
        }

        bool x = true;
        for (long long i = 2; i < k; i++)
        {
            if (ans[i] < ans[i - 1])
            {
                x = false;
                break;
            }
        }

        if (x && (n - k + 1) * ans[1] >= v[0])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
