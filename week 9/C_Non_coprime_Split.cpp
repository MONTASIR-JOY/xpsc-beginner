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
        long long c = b;
        for (long long i = b; i >= a;i--)
        {
            if(i%2==0)
            {
                c = i;
                break;
            }
        }
        if(c%2==0)
        {
            if(c==2)
            {
                cout << -1 << endl;
                continue;
            }
            cout << c / 2 << " " << c / 2 << endl;
            continue;
        }
        long long ans = -1;
        for (long long i = 3; i*i <= c;i++)
        {
            if(__gcd(c,c-i)!=1)
            {
                ans = i;
                break;
            }
        }
        if(ans==-1 || ans==c)
        {
            cout << -1 << endl;
        }
        else{
            cout << ans << " " << c - ans << endl;
        }
    }
    return 0;
}