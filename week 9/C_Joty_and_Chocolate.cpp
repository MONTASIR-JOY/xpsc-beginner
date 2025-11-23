#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long x = (n / a) * p;
    long long y = (n / b) * q;
    long long lcm = (a * b) / __gcd(a, b);
    long long over = (n / lcm) * (min(p, q));
    cout << x + y - over << endl;
    return 0;
}