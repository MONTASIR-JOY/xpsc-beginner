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
        long long n, k;
        cin >> n >> k;
        long long fir;
        long long sec;
        long long ans = 0;
        for (long long i = 0; i <= n;i++)
        {
            bool x = true;
            fir = i;
            sec = n;
            for (long long j = k -2; j >= 1;j--)
            {
                long long ne = sec - fir;

                if(ne>fir || ne<0)
                {
                    x = false;
                    break;
                }
                sec = fir;
                fir = ne;
            }
            if(x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}