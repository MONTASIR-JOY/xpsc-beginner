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
        long long x, y, k;
        cin >> x >> y >> k;

        long long trc = max(x, y);
        trc = min(trc, k);
        if(max(x,y)==x)
        {
            x -= trc;
        }
        else
        {
            y -= trc;
        }
        trc++;
        if(max(x,y)>=trc)
        {
            cout << "Bob" << endl;
            continue;
        }
        cout << "Alice" << endl;
    }
    return 0;
}