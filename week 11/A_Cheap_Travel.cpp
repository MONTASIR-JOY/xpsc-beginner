#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    long long rem = n % m;
    long long cnt = n / m;
    cnt = cnt * m;
    long long ans1 = min(cnt * a, (cnt / m) * b);
    if(rem>0)
    {
        ans1 += min(rem * a, b);
    }
    cout << ans1 << endl;
    return 0;
}