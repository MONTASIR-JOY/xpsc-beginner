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
        long long n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        long long maxi = 0;
        for (long long i = 1; i <= n;i++)
        {
            maxi = max(maxi, a * i + b * (n - i) + c * i * (n - i));
            maxi = max(maxi, b * i + a * (n - i) + d * i * (n - i));
        }
        cout << maxi << endl;
    }
    return 0;
}