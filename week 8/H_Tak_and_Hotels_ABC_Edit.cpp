#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    long long n, k, x, y;
    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;

    if(n<=k)
    {
        cout << n * x << endl;
        return 0;
    }

    long long ans = 0;
    ans += k * x;
    ans += (n-k) * y;
    cout << ans << endl;

    return 0;
}