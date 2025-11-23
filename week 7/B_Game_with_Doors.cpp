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
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        if (l == L && r == R)
        {
            cout << r - l << endl;
        }
        else if (l < L && r == R)
        {
            cout << r - L + 1 << endl;
        }
        else if (l < L && r < R && r >= L)
        {
            cout << r - L + 2 << endl;
        }
        else if (l < L && r < L)
        {
            cout << 1 << endl;
        }
        else if (L < l && r == R)
        {
            cout << R - l + 1 << endl;
        }
        else if (L < l && r > R && R >= l)
        {
            cout << R - l + 2 << endl;
        }
        else if (L < l && R < l)
        {
            cout << 1 << endl;
        }
        else if (l > L && r < R)
        {
            cout << r - l + 2 << endl;
        }
        else if (L > l && R < r)
        {
            cout << R - L + 2 << endl;
        }
        else if (r < L || l > R)
        {
            cout << 1 << endl;
        }
        else if (r == L || l == R)
        {
            cout << 2 << endl;
        }
        else if (l > L && r < R)
        {
            cout << r - l + 2 << endl;
        }
        else if (L > l && R < r)
        {
            cout << R - L + 2 << endl;
        }
        else if ((r == R && (l > L || L > l)))
        {
            int mx = max(l, L);
            cout << r - mx + 1 << endl;
        }
        else if ((l == L && (r > R || R > r)))
        {
            int mn = min(r, R);
            cout << mn - l + 1 << endl;
        }
        else
        {
            cout << r - l + 1 << endl;
        }
    }

    return 0;
}