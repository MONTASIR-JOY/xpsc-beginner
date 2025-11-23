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
        long long h, x, y;
        cin >> h >> x >> y;

        h = h - y;
        long long ans = 0;
        ans++;
        if(h<0)
        {
            cout << ans << endl;
            continue;
        }

        while(h>00)
        {
            h = h - x;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}