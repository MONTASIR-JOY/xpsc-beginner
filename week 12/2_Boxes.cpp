#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int dif = abs(x - y);
        if(abs(k-dif)%2==1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << abs(dif - k) / 2 << endl;
    }
    return 0;
}