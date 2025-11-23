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
        long long x, y;
        cin >> x >> y;
        long long cnt = 0;
        if(x == 1)
        {
            x++;
            cnt++;
        }
        if(y == 1)
        {
            y++;
            cnt++;
        }
        if(__gcd(x, y) != 1)
        {
            cout << cnt << endl;
            continue;
        }
        if(x%2==0 && y%2==0)
        {
            cout << cnt+0 << endl;
            continue;
        }

        long long odd = 0;
        long long even = 0;
        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(y%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(even==2)
        {
            cout << cnt+0 << endl;
            continue;
        }
        if(even==1)
        {
            cout << cnt+1 << endl;
            continue;
        }
        long long temx = x;
        long long temy = y;
        temx++;
        if(__gcd(temx,temy)!=1)
        {
            cout << cnt+1 << endl;
            continue;
        }
        temx--;
        temy++;
        if(__gcd(temx,temy)!=1)
        {
            cout << cnt+1 << endl;
            continue;
        }
        cout << cnt+2 << endl;
    }
    return 0;
}