#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ans = 0;
    long long s, t;
    cin >> s >> t;
    
    long long mx = max(s, t);
    long long mn = min(s, t);
    if(s==0 || t==0)
    {
        mn = mx;
    }
    for (long long i = 0; i <= mn; i++)
    {
        for (long long j = 0; j <= mn;j++)
        {
            for (long long k = 0; k <= mn;k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    ans++;
                    // cout << i << " " << j << " " << k << endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<ans<<"\n";
    return 0;

}