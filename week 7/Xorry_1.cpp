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
        long long n;
        cin >> n;

        long long a = 1 << (__lg(n));
        long long b = (a ^ n);
        cout << b << " " << a << endl;
    }
    return 0;
}