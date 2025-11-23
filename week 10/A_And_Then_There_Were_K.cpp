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
        long long c = __lg(n);
        long long ans = (1 << c) - 1;
        cout << ans << endl;
    }
    return 0;
}