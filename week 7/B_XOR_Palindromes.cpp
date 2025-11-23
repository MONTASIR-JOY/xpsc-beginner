#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;

    vector<char> y(n + 1, '0');

    int starting_mismatch = 0;


    
    for (int i = 0; i < n / 2; ++i)
    {
        if (x[i] != x[n - i - 1])
        {
            ++starting_mismatch;
        }
    }

    y[starting_mismatch] = '1';

    int ok = n - 2 * starting_mismatch;
    int changes = ok / 2;

    if (n % 2 == 0)
    {
        for (int i = starting_mismatch; i <= n && changes >= 0; i += 2, --changes)
        {
            y[i] = '1';
        }
    }
    else
    {
        for (int i = starting_mismatch; i <= n && changes >= 0; i += 2, --changes)
        {
            y[i] = '1';
            if (i + 1 <= n)
            {
                y[i + 1] = '1';
            }
        }
    }

    for (char c : y)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}