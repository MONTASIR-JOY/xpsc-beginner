#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    long long  t;
    cin >> t;
    while(t--)
    {
        long long  n;
        cin >> n;
        long long  cnt = 0;
        if(n<4)
        {
            cout << 1 << endl;
            continue;
        }
        while(n)
        {
            n = n / 4;
            cnt++;
        }
        long long ans = pow(2, cnt - 1);
        cout << ans << endl;
    }
    return 0;
}