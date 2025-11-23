#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    while (true)
    {
        int n, k;
        cin >> n >> k;
        if (n == 0 && k == 0) break;
        cout << "CASE# " << test << ":" << endl;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (k--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end() && *it == x)
            {
                cout << x << " found at " << (it - v.begin() + 1) << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
        test++;
    }
    return 0;
}