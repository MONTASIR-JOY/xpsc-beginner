#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a, b;
    cin >> a >> b;
    int q;
    cin >> q;
    long double mn = (long double)1e9;
    while(q--)
    {
        long double x, y, v;
        cin >> x >> y >> v;
        long double d1 = abs(x - a) * abs(x - a);
        long double d2 = abs(y - b) * abs(y - b);
        long double d2p = sqrt(d1 + d2);
        long double t = d2p / v;
        mn = min(mn, t);
    }
    cout << setprecision(20) << fixed << mn << endl;
    return 0;
}