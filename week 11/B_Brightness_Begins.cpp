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
        long long l = 0;
        long long h = 3e18 + 7;
        long long mid = 0;
        long long ans = 0;
        while(l<=h)
        {
            mid = l + (h - l) / 2;
            long long sq = sqrt(mid);
           
            if((sq+1)*(sq+1)<=mid)
            {
                sq++;
            }
            if(sq*sq>mid)
            {
                sq--;
            }
            cout << sqrt(mid) << " " << sq << endl;
            long long on = mid - sq;
            if(on>=n)
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}