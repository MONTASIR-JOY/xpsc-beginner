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
        long long l, r;
        cin >> l >> r;
        long long L, R;
        cin >> L >> R;
        if(L > r || l > R)
        {
            cout << 1 << endl;
        }
        else
        {
            long long ans = min(r, R) - max(l, L) + 1;
            cout << ans << endl;
        }
    }
    return 0;
}