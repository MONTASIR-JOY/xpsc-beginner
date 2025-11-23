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
        long long a, b;
        cin >> a >> b;

        long long remforone = 0;
        long long need = 0;
        if(b>0)
        {
            need = (b + 1) / 2;
            long long x = b % 2;
            remforone = need * 7;
            if(x==1)
            {
                remforone += 4;
            }
        }
        long long ans = need;

        if(remforone>=a)
        {
            cout << ans << endl;
            continue;
        }
        long long extra = remforone;
        while(extra<a)
        {
            extra += 15;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}