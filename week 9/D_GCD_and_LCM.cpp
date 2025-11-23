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

        if(k==1)
        {
            cout << min(x, y) + __gcd(x, y) << endl;
        }
        else{
            cout << 2 * __gcd(x, y) << endl;
        }
    }
    return 0;
}