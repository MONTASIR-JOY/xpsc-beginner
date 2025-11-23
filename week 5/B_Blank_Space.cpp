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
        vector<long long> v(n);
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        // for(long long i:v)
        // {
        //     cout << i << " ";
        // }
        long long ans = 0;
        long long l=0;
        long long r= 0;
        long long sum = 0;

        while(r<n && l<n)
        {
            if(v[r]==1)
            {
                r++;
                l = r;
            }
            else if(v[r]==0)
            {
                
                ans = max(ans, r - l + 1);
                r++;
                // cout << r << " " << l << endl;
            }
            
        }

        cout << ans<< endl;
    }
    return 0;
}