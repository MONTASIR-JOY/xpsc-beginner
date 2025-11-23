#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    int t;
    cin>>t;

    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a, b, c;
        cin >> a >> b >> c;

        int ans = 0;
        if(z>c)
        {
            ans += c;
            z -= c;
        }
        else
        {
            ans += z;
            z = 0;
        }

        if(y>b)
        {
            ans += b;
            y -= b;
        }
        else
        {
            ans += y;
            y = 0;
            b -= y;
            if(z>=b)
            {
                ans += b;
                z -= (b);
            }
            else
            {
                ans += z;
                z = 0;
            }
        }

        if(x+y+z>=a)
        {
            ans += a;
            x = 0;
            y = 0;
            z = 0;
        }
        else{
            ans += (x + y + z);
        }
        cout << ans << endl;
    }
    return 0;
}