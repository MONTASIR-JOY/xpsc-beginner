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
        long long n, x;
        cin >> n >> x;

        vector<long long> v(n);
        long long l = -1;
        bool y = true;
        for (long long i = 0; i < n;i++)
        {
            cin >> v[i];
            if(v[i]%x!=0 && y)
            {
                l = i;
                y = false;
            }
        }
       
        vector<long long> pre(n);
        pre[0] = v[0];

        for (long long i = 1; i < n;i++)
        {
            pre[i] = pre[i - 1] + v[i];
            
        }

        if(l==-1)
        {
            cout << "-1" << endl;
            continue;
        }
        long long sum = 0;
        
        for (long long i = 0; i <= l;i++)
        {
            sum += v[i];
        }

        long long ans = 0;
    
        for (long long i = n - 1; i >= 0;i--)
        {
            if((pre[i]-sum)%x!=0)
            {
                ans = max(ans, i - l);
            }
            if(pre[i]%x!=0)
            {
                ans = max(ans, i + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}