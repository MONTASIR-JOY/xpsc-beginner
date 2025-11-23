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
        long long ans = 0;
        for (long long i = 0; i <= n/2;i++)
        {
            ans += (1LL * i * (n - i)+1);
        }
        cout << ans << endl;
    }
    return 0;
}