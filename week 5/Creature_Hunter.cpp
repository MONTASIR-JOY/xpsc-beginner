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
        long long n, h;
        cin >> n >> h;

        long long mx1 = -1;
        long long mx2 = -1;

        for (long long i = 0; i < n; i++)
        {
            long long x, y;
            cin >> x >> y;
            if (x == 1)
            {
                mx1 = max(mx1, y);
            }
            else
            {
                mx2 = max(mx2, y);
            }
        }

        if (mx1 == -1) 
        {
           
            long long ans = 2 * (h / mx2);
            if (h % mx2 != 0)
            {
                ans += 2;
            }
            cout << ans << endl;
            continue;
        }

        if (mx2 == -1) 
        {
    
            long long ans = (h / mx1);
            if (h % mx1 != 0)
            {
                ans += 1;
            }
            cout << ans << endl;
            continue;
        }

        if (mx2 <= (2 * mx1))
        {

            long long ans = (h / mx1);
            if (h % mx1 != 0)
            {
                ans += 1;
            }
            cout << ans << endl;
        }
        else
        {
           
            long long ans = 0;

        
            ans = 2 * (h / mx2);
            h = h % mx2;

            if (h > 0)
            {
                if (h <= mx1)
                {
                    ans += 1; 
                }
                else
                {
                    ans += 2; 
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}